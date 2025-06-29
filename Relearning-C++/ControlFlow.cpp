#include <iostream>
using namespace std;

/**
 * Author : Katleho Nyoni
 *
 */

int main()
{
    bool isEven = true;

    if (!isEven)
    {
        printf("It's Odd \n");
    }
    else if (isEven)
    {
        printf("It's Even \n");
    }
    else
    {
        printf("It's neither even nor odd \n");
    }

    /* SWITCH STATEMENT*/
    int day = 3;

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Invalid day\n");
    }

    return 0;
}