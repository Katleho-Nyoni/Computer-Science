#include <iostream>
using namespace std;

/**
 * Author : Katleho Nyoni
 *
 */

double sum(double n1, double n2);
double avg(double n1, double n2);

int main()
{
    double sum1 = sum(2, 4), average = avg(2, 4);
    printf("The sum is: %.2f with average: %.2f \n", sum1, average);

    return 0;
}

double sum(double n1, double n2)
{
    double s = n1 + n2;
    return s;
}

double avg(double n1, double n2)
{
    double a = (n1 + n2) / 2;
    return a;
}
