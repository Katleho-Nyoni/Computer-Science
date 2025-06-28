#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

void ToUpperCase(char *str);

int main()
{
    char mess[] = "hello, World!";
    mess[0] = 'H';

    mess[5] = '\0';
    printf("%s\n", mess);

    mess[5] = ' ';
    printf("%s\n", mess);

    // STRING MANIPULATION
    char *name = (char *)malloc(12 * sizeof(char));
    strcpy(name, "Lord Eagle");
    int length = strlen(name);
    printf("%s is %d long.\n", name, length);

    char comparison = strcmp("Lord Eagle", "Lord eagle");
    printf("Comparison result: %d\n", comparison);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n");

    // TOKENIZATION
    char str[] = "Hedy, Lamarr, UNL, Avery Hall, Lincoln, NE";
    char *token = NULL;
    token = strtok(str, ", ");
    while (token != NULL)
    {
        printf("token = %s\n", token);
        token = strtok(NULL, ", ");
    }
    printf("+-+-+-+-+-+-+-+-+-+EXERCISES-+-+-+-+-+-+-+-+-+-+-+-+- \n");
    char testChar[] = "Hello, World! The classic programming phrase.";
    printf("Original: %s\n", testChar);
    ToUpperCase(testChar);
    printf("Uppercasing: %s\n", testChar);

    /**
     * Exercises :
     * 1A : Changes lowercase to uppercase
     * 1B : Makes a Deep Copy  then uppercase it
     */
    return 0;
}

// 1A
void ToUpperCase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        return;
    }
}

// 1B
char *DeepCopyUppercasing(const char *strr)
{
    char *copy = (char *)malloc((strlen(strr) + 1) * sizeof(char));
    strcpy(copy, strr);
    for (int i = 0; strr[i] != '\0'; i++)
    {
        copy[i] = toupper(strr[i]);
    }
    return copy;

    free(copy), copy = NULL;
}

// GDB Debugger