#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

// 1.1 VARIABLES
//  Data_Type Variable_Name = ***
    string Name = "Katleho";
    int Age = 35;

    cout << "There was once a man named " << Name << endl;
    cout << "He was "<<Age<<" years old. " << endl;
    cout << "He liked the name " << Name << endl;
    cout << "But didn't not like being " << Age << endl;

// 1.2 DATA TYPES
// 1.2.1 CHARACTER
    char grade = 'A';
    string Grade = "ABCDEF";

// 1.2.2 INTERGER
    int Age = 50;

// 1.2.3 REAL NUMBER/ DECIMALS
    float n = 2.3;
    double GPA = 2.3;

// 1.2.4 BOOLEAN
    bool IsMale = true;

// 1.3 STRING OPERATIONS
    string s = "Illegol Activity" ;
    cout << "Hello world!\n" ;
    cout << s << endl;
    cout << s.length() << endl; // finds the length of characters in "s"
    cout << s[1] << endl;
    cout << s[2] << endl;
    cout << s[3] << endl;
    cout << s.find('o',0) << endl;
    s[5] = 'a'; // no "cout" shit
    cout << s << endl;
    cout << s.substr(0,3) << endl;

 // 1.4 FUNCTIONS

// 1.5 CONDITIONAL STATEMENTS

  bool isMale = false;
  bool haveInsta = false;

  if(isMale && !haveInsta){
    cout << " You're Male.";}
    else if(isMale && haveInsta)
    {
        cout << "You're Gay.";
    }
    else
    {
        cout << "You're Female.";
    }

    int index = 1;
    while(index <= 5)
    {
        cout << index << endl;
        index++;
    }

     int X[] = {1,2 ,3 ,4, 5};
    for(int i = 0; i < 3 ; i++)
    {
            cout << X[i] << endl;
    }

    int Y[2][2] ={{1,2},{3,4}}; // Matrix
    cout << Y[1][0] << endl;
    cout << &Y[1][0]; // Pointer

  return 0;
}
