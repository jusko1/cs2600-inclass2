#include <stdio.h>
#include <stddef.h>

typedef struct {
    char *phone;
    double salary;
} Employee, *PtrToEmployee;

typedef const Employee *PtrToConstEmployee;