#include <stdio.h>

// Keep taking numbers as input from user until user enters odd number.

int main()
{
    int n;
    do
    {
        printf("Enter number : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("Thank You!\n");

    return 0;
}