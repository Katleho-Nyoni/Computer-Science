#include <iostream>
using namespace std;

/**
 * Author : Katleho Nyoni
 *
 *
 */

int main()
{
    int *ptr = nullptr;
    int age = 25;
    ptr = &age;

    cout << "Age: " << age << endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Dereferenced Pointer: " << *ptr << endl;
    cout << "Address of age: " << &age << endl;
    cout << "Address stored in pointer: " << ptr << endl;
    cout << "Size of pointer: " << sizeof(ptr) << " bytes" << endl;
    cout << "Size of age: " << sizeof(age) << " bytes" << endl;

    // to dereference a pointer
    ptr = nullptr;
    cout << "Pointer: " << ptr << endl;
    cout << "Address stored in pointer: " << ptr << endl;

    return 0;
}