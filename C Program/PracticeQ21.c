#include <stdio.h>

// Print the factorial of a number n, if the number is given by user.
// Note- [Int] function can not calculat big factorial like fact.. of 33++

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Final answer is %d", fact);
    return 0;
}