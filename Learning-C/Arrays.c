#include <stdio.h>
#include <stdlib.h>

// glibc library for data structures

int main()
{
    int Arr[] = {2, 4, 3, 5, 6};
    // int mat[][] = {{1, 2, 3}, {4, 5, 6}};
    printf("%d \n", Arr[0]);
    int n = 10, ar[n];
    for (int i = 0; i < n; i++)
    {
        ar[i] = 5 * i;
        printf("%d \n", ar[i]);
    }
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n");

    double arr[] = {1.41, 2.71, 3.14};
    int k = 3;
    int i = 0;
    double x;
    for (x = arr[0]; i < k; x = arr[++i])
    {
        printf("%f \n", x);
    }

    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n");
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int n1 = 10, sum = 0;
    for (int i = 0; i < n1; i++)
    {
        sum += primes[i]; // sum = sum + primes[i]
    }
    printf("Sum of primes: %d\n", sum);

    printf("+-+-+-+-+-+-+-+-+-+-+-+DYNAMIC ARRAYS-+-+-+-+-+-+-+-+-+-+- \n");
    // Example Working Fine
    int n2 = 2000000, arr2[n2];
    arr2[0] = 42, arr2[n2 - 1] = 100;
    printf("1st +last = %d \n", arr2[0] + arr2[n2 - 1]);
    /**
     * if n2 = 3 000 000 & arr2[n2], this would lead to Stack Overflow
     */

    // Dynamic Memory Allocation
    /**
     * Using the malloc() from <stdlib.h>, we enter the SIZE
     * of the bytes(memory) we wish to allocate.
     */
    int n3 = 3000000;
    int *arr3 = (int *)malloc(n3 * sizeof(int));
    arr3[0] = 45, arr3[n3 - 1] = 155;
    printf("1st +last = %d \n", arr3[0] + arr3[n3 - 1]);

    // Freeing the allocated memory
    free(arr3);
    arr3 = NULL; // Then reassigning the pointer to NULL IMPORTANT
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n");

    // MULTIDIMENSIONAL ARRAYS
    int N = 3;
    int **Matrix = NULL;
    Matrix = (int **)malloc(N * sizeof(int *)); // Allocate memory for N rows
    for (int i = 0; i < N; i++)
    {
        Matrix[i] = (int *)malloc(N * sizeof(int)); // Allocate memory for each row
    }

    int V = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Matrix[i][j] = V;
            V++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        free(Matrix[i]); // Free each row
    }
    free(Matrix); // Free the array of pointers
    Matrix = NULL;

    // Clever Alternative

    int x = 5, y = 3;
    int **Mat = (int **)malloc(x * sizeof(int *));
    Mat[0] = (int *)malloc((x * y) * sizeof(int)); // Allocate memory for the first row
    for (int i = 1; i < x; i++)
    {
        Mat[i] = *Mat + (y * i);
    }

    int val = 1;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            Mat[i][j] = val;
            val++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        free(Mat[i]); // Free each row
    }
    free(Mat);
    Mat = NULL;

    return 0;
}
