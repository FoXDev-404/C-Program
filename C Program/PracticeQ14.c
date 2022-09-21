#include <stdio.h>

// Print the number 0 to n, if n is given by user

int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}