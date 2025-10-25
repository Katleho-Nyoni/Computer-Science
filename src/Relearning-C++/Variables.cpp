#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int age = 10 * 8;
    cout << "Hello, my age is " << age << endl;
    cout << "Of course, I'm not " << age << "\n";
    char name[] = "Johnny";
    string name2 = "Max";
    printf("My name is %s not %s \n", name, name2.c_str()); // string is not built-in into C++

    bool isEven = true;

    if (!isEven)
    {
        printf("It's Odd \n");
    }
    else
    {
        printf("It's Even \n");
    }

    /* STRING OPERATION*/
    string academy = "Borraffe Academy";
    int len = academy.length();
    printf("The institution is called %s with %d characters \n", academy.c_str(), len);

    academy[0] = 'G', academy[1] = 'i';
    printf("Institution: %s \n", academy.c_str());
    academy.append(" of Technology");
    printf("Institution: %s \n", academy.c_str());
    cout << academy.find("Academy") << endl;
    cout << academy.substr(3, 3) << endl;
    cout << academy << endl;

    /* NUMBERS*/
    printf("The square root of 16 is %.2f \n", sqrt(16));
    printf(" %d to the power %d is %.2f \n", 2, 3, pow(2, 3));
    printf("Rounding 2.5 gives %.2f \n", round(2.5));

    return 0;
}