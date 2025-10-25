#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "student.h"

student *createStudent(
    int studentNo,
    char *firstName,
    char *lastName,
    double mark,
    int birthYear,
    int birthMonth,
    int birthDay)
{
    // Initializing values of New Student
    student *newStudent = (student *)malloc(sizeof(student));

    newStudent->studentNo = studentNo;
    newStudent->firstName = (char *)malloc(sizeof(char) * strlen(firstName) + 1);
    strcpy(newStudent->firstName, firstName);
    newStudent->lastName = (char *)malloc(sizeof(char) * strlen(lastName) + 1);
    strcpy(newStudent->lastName, lastName);
    newStudent->mark = mark;
    newStudent->dateOfBirth.year = birthYear;
    newStudent->dateOfBirth.month = birthMonth;
    newStudent->dateOfBirth.day = birthDay;

    return newStudent;
}

void printStudent(student *newStudent)
{
    printf("Student No: %d, Name: %s, Surname: %s, Date of Birth: %02d/%02d/%04d, Mark: %.2f\n",
           newStudent->studentNo, newStudent->firstName, newStudent->lastName,
           newStudent->dateOfBirth.day, newStudent->dateOfBirth.month, newStudent->dateOfBirth.year,
           newStudent->mark);

    return;
}