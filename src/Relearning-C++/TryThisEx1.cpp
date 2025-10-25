/*
This is a Try This Exercise from
Programming: Principles and Practice Using C++ Second Edition by Bjarne Stroustrup
Chapter 3: Objects, Types, and Values
*/

#include <iostream>
#include <string>

int main()
{
    // using namespace std;
    // Page 92
    char A = 'a';
    int Aa = A;
    int B = 'b';
    int C = char('a'+1);
    printf("The value of 'a' & 'b' is %i & %c respectively.\n",Aa,B);
    printf("It is said that 'b' = char('a'+1): %i \n",C);

    printf("************************************************************ \n");
    char letters[] = {'a','b','c','z'} ;
    for(int i : letters){
        printf("%c \t %i \n",letters[i],i);
    }
    return 0;
}