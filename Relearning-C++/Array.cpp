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

    /* 2D ARRAYS*/
    int arr2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2D[i][j] << " ";
        }
        // cout << endl;
    }

    return 0;
}