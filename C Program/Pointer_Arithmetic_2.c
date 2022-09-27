#include <stdio.h>

/* This is an exapmle of "increment & decrement"
 using char[1 bit] operator in poinetr arithmetic. */

int main()
{
    char star = '*';
    char *ptr = &star;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u", ptr);

    return 0;
}