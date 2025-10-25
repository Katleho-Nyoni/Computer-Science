#include <stdio.h>
#include <stdlib.h>

void countDown(int n);
int fibonacciSequence(int n);

int main()
{
    int n = 5;
    printf("First %d terms of the Fibonnacci sequence : %d \n", n, fibonacciSequence(n));

    return 0;
}

void countDown(int n)
{
    if (n == 0)
    {
        exit(1);
    }
    else if (n < 0)
    {
        printf("Please be serious. Enter Positive Integers. \n");
    }
    else
    {
        countDown(n - 1);
        printf("%d\n", n);
    }
}

int fibonacciSequence(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        int Fn = fibonacciSequence(n - 1) + fibonacciSequence(n - 2);
        return Fn;
    }
}
