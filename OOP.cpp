#include <iostream>

using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void Introduce_Yourself() // Employee Behaviour
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    Employee(string name, string company, int age) // Constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Shubham", "TikTok", 23);
    /*
     employee1.Name = "Shubham";
     employee1.Company = "TikTok";
     employee1.Age = 23;
     */
    employee1.Introduce_Yourself();

    Employee employee2 = Employee("John", "Amazon", 30);
    employee2.Introduce_Yourself();

    return 0;
}