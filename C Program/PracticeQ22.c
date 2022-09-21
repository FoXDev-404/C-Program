#include <stdio.h>

// Print "revrese" of the table for a number n, n is given by user.

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", n * i);
    }
    return 0;
}