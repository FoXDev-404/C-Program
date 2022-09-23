// #include <stdio.h>

// // This is an example of "Passing Argument".
// // here is a example of sum.

// int sum(int a, int b);

// int main()
// {
//     int a, b;
//     printf("enter a number : ");
//     scanf("%d", &a);
//     printf("enter a number : ");
//     scanf("%d", &b);

//     int s = sum(a, b);
//     printf("sum is : %d \n", s);
//     return 0;
// }

// int sum(int x, int y)
// {
//     return x + y;
// }

#include <stdio.h>

// This is an example of "Passing Argument".

void printTable(int x);

int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d", &x);

    printTable(x); // argument/actual parameter

    return 0;
}

void printTable(int x)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("\"%d\"", i * x);
    }
}
