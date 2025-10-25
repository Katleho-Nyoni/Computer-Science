#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Hello World!\n");

    double x = 2;
    double y, z;
    y = sqrt(x);
    z = pow(x, 2);

    printf("2 to the power 2 is %.0f & the square root of 2 is %.9f\n", z, y);

    int a = 5, b = 10, c = 15, d;
    d = a + b * c;
    printf("The value of d is %d\n", d);
    d = b / c;
    printf("The value of d is %d\n", d);
    d = (double)b / c;
    printf("The value of d is %d\n", d);
    printf("What is your name : ");
    return 0;
}