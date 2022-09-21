#include <stdio.h>

// Print the sum of first n natural numbers
// Also print them in reverse

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for (int j = n; j >= 1; j--)
    {
        sum = sum + j; // sum += j
        printf("%d\n", j);
    }

    printf("sun is %d \n", sum);
    return 0;
}