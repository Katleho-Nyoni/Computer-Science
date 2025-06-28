/**
 * Author : Katleho Nyoni
 * Date   : 16/06/2025
 * Log    : I'm excited to learn about pointers as I struggled to understand them at first & they're SUPER  important.asm
 *
 * Insights: You use * to initialize a pointer & dereference it.
 *          You use & to reference a variable's address.
 *          You MUST ALWAYS Reference a pointer after initializing it.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a = 42;
    int *point = &a; // the & sign is for referencing

    printf("Value of a: %d, Address:%p , *Points to(content):%d \n", a, point, *point);

    return 0;
}