#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main()
{
    student first;
    first.studentNo = 3957302;
    first.firstName = (char *)malloc(10 * sizeof(char));
    strcpy(first.firstName, "Lord");
    first.lastName = (char *)malloc(10 * sizeof(char));
    strcpy(first.lastName, "Eagle");
    first.mark = 85.5;
    first.dateOfBirth.day = 15;
    first.dateOfBirth.month = 6;
    first.dateOfBirth.year = 2000;

    student *second = createStudent(3957303, "Lady", "Hawk", 90.0, 1999, 5, 20);
    /** to compile, you use : gcc -c student.c
     * then : gcc student.o Encapsulate.c
     */

    printStudent(second);
    printStudent(&first);
    return 0;
}