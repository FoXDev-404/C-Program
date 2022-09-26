#include <stdio.h>

// Swap 2 numbers a & b.

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;
    swap(x, y);
    printf("x = %d & y = %d\n", x, y);

    _swap(&x, &y);
    printf("x = %d & y = %d\n", x, y);
    return 0;
}

// call by referance. Thia can "swap" the values.
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// call by value. This is can't "swap" the value of x, y.
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n", a, b);
}