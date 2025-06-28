#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * Linter prompt:
 * gcc -std=c99 -Wall -Wextra -pedantic -g3 Function.c -o Function.exe
 */
double euclideanDistance(double x1, double y1, double x2, double y2);

int main(int argc, char **argv)
{
    if (argc != 5)
    {
        printf("Usage: %s x1 x2 y1 y2\n", argv[0]);
        exit(1);
    }

    double x1 = atof(argv[1]);
    double x2 = atof(argv[2]);
    double y1 = atof(argv[3]);
    double y2 = atof(argv[4]);

    printf("Euclidean distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n",
           x1, y1, x2, y2, euclideanDistance(x1, y1, x2, y2));

    return 0;
}

double euclideanDistance(double x1, double x2, double y1, double y2)
{
    double val = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return val;
}
