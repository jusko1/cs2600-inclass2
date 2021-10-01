#include <string.h>
#include "employee.h"

static PtrToEmployee searchEmployeeTable(PtrToConstEmployee ptr, int tableSize, const void *targetPtr, int (*functionPtr)(const void *, PtrToConstEmployee)){
    PtrToConstEmployee endPtr = ptr + tableSize;
    for (; ptr< endPtr; ptr++){
        if((*functionPtr)(targetPtr, ptr) == 0){
            return (PtrToEmployee) ptr;
        }
    }   
    return NULL;
}
static int compareEmployeeByPhone(const void *targetPtr, PtrToConstEmployee tableValuePtr){
    return strcmp((char *) targetPtr, tableValuePtr->phone);
}
static int compareEmployeeBySalary(const void *targetPtr, PtrToConstEmployee tableValuePtr){
    return * (double *) targetPtr != tableValuePtr->salary;
}
PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int size, char * phone){
    return searchEmployeeTable(ptr, size, &phone, compareEmployeeByPhone);
}
PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int size, double salary){
    return searchEmployeeTable(ptr, size, &salary, compareEmployeeBySalary);
}