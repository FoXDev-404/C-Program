#include <stdio.h>

// This is an exapmle of "increment & decrement" operator in poinetr arithmetic.

int main()
{
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u", ptr);

    return 0;
}