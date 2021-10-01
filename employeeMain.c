#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void) {
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double targetSalary);

    extern Employee EmployeeTable[];
    extern const int employeeTableEntries;

    PtrToEmployee matchPtr;
    matchPtr = searchEmployeeByPhone(EmployeeTable, employeeTableEntries,"911-911-9111");
    

    if (matchPtr != NULL){
        printf("Employee phone number is in the record %d\n" ,matchPtr - EmployeeTable);

    }
    else{
        printf("Employee phone number is not in the record\n");
    }

    matchPtr = searchEmployeeBySalary(EmployeeTable, employeeTableEntries, 3.4 );

    if(matchPtr != NULL){
        printf("Employee salary is in the record %d\n", matchPtr - EmployeeTable);
    }
    else{
        printf("Employee salary is not in the record\n");
    }
    return EXIT_SUCCESS;
}