#include <string.h>
#include <stdlib.h>
#include "employee.h"


Employee EmployeeTable[] = 
{
    {"123-456-7890", 12.3},
    {"911-911-9111", 6.5}
};

const int employeeTableEntries = sizeof(EmployeeTable)/sizeof(EmployeeTable[0]);