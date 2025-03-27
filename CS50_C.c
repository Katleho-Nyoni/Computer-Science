#include <stdio.h>

int main(void)
{
    char Name[] = "Katleho";
    printf("Hello, %s \n", Name);

    // Intergers
    int num = 7;
    int numm = 12;
    printf("The lucky number is %i \n", num);

    // Conditional Statements
    if (num > num)
    {
        printf("The luck number %i is greater than the hidden number %i \n", num, numm);
    }
    else if (num < numm)
    {
        printf("The luck number %i is less than the hidden number %i \n", num, numm);
    }
    else
    {
        printf("The luck number %i is equal to the hidden number %i \n", num, numm);
    }
    return 0;
}