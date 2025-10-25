/**
 * Author : Katleho Nyoni
 * Date   : 12/06/2025
 *
 * This is a basic exercise that inputs three integers from the user, and calculates the average.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, n3;
    printf(" Input three integers to calculate the average:\n");

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    double avg = (n1 + n2 + n3) / 3.0;
    printf("The average of the three integers is: %.2f\n", avg);
    return 0;
}

// Linters are code analysis tools that help developers identify potential errors, enforce coding standards, and improve code quality.