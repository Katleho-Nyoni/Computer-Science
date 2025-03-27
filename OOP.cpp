#include <iostream>

// Abstraction : Hiding the complexicity and showing the essential features of the object.
using namespace std;

class Abstract_Emplpoyee
{
    virtual void AskForPromotion() = 0;
};

class Employee : Abstract_Emplpoyee
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
        if (age >= 18) // Validation | Restrictions
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
    void AskForPromotion()
    {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " sorry, No promotion for you!" << endl;
    }

    virtual void Work()
    {
        cout << Name << " is checking email, task backlog, performing tasks..." << endl;
    }
};

class Developer : public Employee
{ // Inheritance
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void Fix_Bug()
    {
        cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
    }
    void Work()
    {
        cout << getName() << " is writing " << FavProgrammingLanguage << " code." << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Shubham", "TikTok", 23);

    Employee employee2 = Employee("John", "Amazon", 35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    Developer Dev = Developer("Shubham", "TikTok", 23, "C++");
    Dev.Fix_Bug();
    Dev.AskForPromotion();
    Dev.Work();

    Employee *e1 = &Dev;
    e1->Work();
    
    return 0;
}