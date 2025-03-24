#include <iostream>

// Encapsulation - Binding the data and the functions that manipulate the data into a single unit

using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;
    // these are Encapsulated : can't be accesses directly
public:
    void setName(string name)
    { // Setter
        Name = name;
    }
    string getName()
    { // Getter

        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void Introduce_Yourself()
    { // Employee Behaviour
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    Employee(string name, string company, int age)
    { // Constructor
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Shubham", "TikTok", 23);
    employee1.Introduce_Yourself();

    Employee employee2 = Employee("John", "Amazon", 30);
    employee2.Introduce_Yourself();

    employee1.setAge(30);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;

    return 0;
}