#include <stdio.h>
#include <stdlib.h>

#define kmsPerMile 1.60934

int main()
{
    printf("Hello, World!\n");

    int a;
    double b;
    printf("Enter an integer: ");
    scanf("%d", &a); // Takes input

    printf("Enter any number: ");
    scanf("%lf", &b); // Takes input
    printf("You entered: %d and %lf with kilometers per mile conversion: %f \n", a, b, kmsPerMile);

    return 0;
}