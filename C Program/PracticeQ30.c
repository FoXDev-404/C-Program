#include <stdio.h>

// Sum of first n natural numbers using recursion function.

int sum(int n);

int main()
{
    printf("sum is %d \n", sum(50));
    return 0;
}

// recursion function
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumNu1 = sum(n - 1); // sum of 1 to n
    int sumN = sumNu1 + n;
    return sumN;
}