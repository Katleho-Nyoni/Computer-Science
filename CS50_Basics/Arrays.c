#include <stdio.h>

int main(void)
{
    int grades[3];
    grades[0] = 90;
    grades[1] = 85;
    grades[2] = 88;

    printf("The Grades are: %d, %d, %d\n", grades[0], grades[1], grades[2]);
    printf("The Average is: %.2f\n", (grades[0] + grades[1] + grades[2]) / 3.0);
}