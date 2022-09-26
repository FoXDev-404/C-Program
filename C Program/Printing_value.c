#include <stdio.h>

// This is an example of formate specifier to print value.

int main()
{
    int age = 22;
    int *ptr = &age;

    // value
    printf("%d\n", age);

    printf("%d\n", *ptr);

    printf("%d\n", *(&age));

    return 0;
}