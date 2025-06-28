#include <iostream>
using namespace std;

/**
 * Author : Katleho Nyoni
 * This file demonstrates how to take user input in C++.
 */
int main()
{
    int age;
    printf("Enter your age: ");
    cin >> age; // Main character "cin >>"
    printf("Hello, my age is %d\n", age);

    /**
     * we use getline(cin,var) to get a string inpute
     */
    string name;
    printf("Enter your name: ");
    cin.ignore(); // Clear the newline character left in the input buffer
    getline(cin, name);
    printf("Hello %s 👋🏽 Welcome😊! \n", name.c_str());

    return 0;
}