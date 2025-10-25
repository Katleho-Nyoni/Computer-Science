#include <stdio.h>

void Smile(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Hello, world!\n");
    }

    for (int i = 0; i < 2; i++)
    {
        Smile();
    }

    return 0;
}

void Smile(void)
{
    printf("Smile!\n");
}