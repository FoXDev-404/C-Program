#include <stdio.h>

// This is an exapmle of formate specifier.

int main()
{
    int age = 22;
    int *ptr = &age;

    // address
    // printf("%p\n", &ptr);

    printf("%p\n", &age);

    printf("%u\n", ptr);

    printf("%u", &age);

    return 0;
}