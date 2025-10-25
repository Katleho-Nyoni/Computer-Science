#include <stdio.h>

int main()
{ // 1 CONDITIONAL STATEMENTS
    double x = 5;
    if (x < 10)
    {
        printf("%f is less than 10\n", x);
    }
    else if (x == 10)
    {
        printf("%f is 10\n", x);
    }
    else
    {
        printf("%f is greater than 10\n", x);
    }
    printf(" Don't forget conjunction and disjunction \n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n");

    // 2 LOOPS
    // 2.1 WHILE loop
    int i = 1, p;
    while (i < 10)
    {
        // printf("%i \n ", i);
        i++;
        p = i++;
        // printf("P is %i \n ", p);
    }

    printf("%i \n ", i);
    printf("P is %i \n ", p);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n");

    // 2.2 FOR loop
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i);
    }
    /* for (initialization; condition; update) {
        #for(initial value of x; condition to be met; increment / iteration)
        #Code block to execute repeatedly
     } */
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        // sum = sum + i;
        // sum += i; // same as above
        sum += i;
    }
    printf("Sum of first 10 numbers is %d \n", sum);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n");

    // 2.3 DO WHILE loop
    int j = 1;
    do
    {
        printf("%d \n", j);
        j++;
    } while (j <= 10);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n");

    // 3 NESTED LOOPS
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf(" The pairs are (%d , %d) \n", i, j);
        }
    }
    return 0;
}
