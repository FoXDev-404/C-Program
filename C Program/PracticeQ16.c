#include <stdio.h>

// Print The Table of a number. if the number is given by user.

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", n * i);
    }
    return 0;
}