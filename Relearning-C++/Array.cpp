#include <iostream>
using namespace std;

/**
 * Author : Katleho Nyoni
 *
 */
int main()
{
    double arr[] = {1, 2, 3, 4, 4.5, 7.6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The size of the array is: " << size << endl;

    return 0;
}