#include <stdio.h>

/* This is an exapmle of "increment & decrement"
 using float[4 bit] operator in poinetr arithmetic. */

int main()
{
    float price = 100.0;
    float *ptr = &price;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u", ptr);

    return 0;
}