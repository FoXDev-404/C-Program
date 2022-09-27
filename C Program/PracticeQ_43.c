#include <stdio.h>

/* int arr[] = {1, 2, 3, 4, 5};
   for the given array, what will tha following gives.
   a. *(arr+2), b. *(arr+5) */

int countOdd(int arr[5], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d \n", *(arr + 2)); // this print 3.
    printf("%d \n", *(arr + 5)); // this give error bcz arr 5th is not exist.

    return 0;
}

int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}