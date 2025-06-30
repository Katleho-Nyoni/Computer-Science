#include <iostream>
#include <string>

using namespace std;

/**
 * Author : Katleho Nyoni
 *
 */

struct cow
{
    string name;
    bool gender;
    int age;
    string breed;
    string purpose;
};

class Cows
{
private:
    string name;
    bool gender;
    int age;
    string breed;

public:
    string getName() const
    { // Getter for name
        return name;
    }
    bool getGender() const
    { // Getter for gender
        return gender;
    }
    int getAge() const
    { // Getter for age
        return age;
    }
    string getBreed() const
    { // Getter for breed
        return breed;
    }

    void setName(const string &newName)
    { // Setter for name
        name = newName;
    }
    void setGender(bool newGender)
    {
        gender = newGender;
    }
    void setAge(int newAge)
    {
        age = newAge;
    }

    Cows(string Name, bool Gender, int Age, string Breed)
    { // constructor
        name = Name;
        gender = Gender;
        age = Age;
        breed = Breed;
    }
    Cows()
    { // Default constructor
        string name = "No name";
        bool gender = false;
        int age = 0;
        string breed = "No breed";
    }
};

int main()
{

    return 0;
}