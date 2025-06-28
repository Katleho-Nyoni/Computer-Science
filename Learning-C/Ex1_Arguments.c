/**
 * Author : Katleho Nyoni
 * Date   : 12/06/2025
 *
 * This is a basic exercise that inputs three integers from the user, and calculates the average.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    double n1, n2, n3;
    if (argc != 4)
    {
        printf("Usage: %s  <num1> <num2> <num3> enter three arguments\n", argv[0]);
        exit(1);
        return 1;
    }

    n1 = atof(argv[1]);
    n2 = atof(argv[2]);
    n3 = atof(argv[3]);

    double avg = (n1 + n2 + n3) / 3.0;
    printf("The average of the three integers is: %.2f\n", avg);
    return 0;
}