#include <stdio.h>

// This is the example of pointers in function call.

void square(int n);
void _square(int *n);

int main()
{
    int number = 4;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);
    return 0;
}
// Call by value
void square(int n)
{
    n = n * n;
    printf("square = %d\n", n);
}

void _square(int *n)
{
    *n = (*n) * (*n); // 4 * 4
    printf("square = %d\n", *n);
}