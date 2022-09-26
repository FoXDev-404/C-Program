#include <stdio.h>

// This is an example of pointer.

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d", _age);
    return 0;
}