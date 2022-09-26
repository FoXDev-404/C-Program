#include <stdio.h>

// will the address output be same, in this code given below?

void printAddress(int n);
void _printAddress(int *n);

int main()
{
    int n = 4;
    printf("address of n is : %p\n", &n);
    printAddress(n);
    _printAddress(&n);
    return 0;
}

// call by referance.
void _printAddress(int *n) // This has no changes in address.
{
    printf("address of n is(call by referance) : %p\n", n);
}

// call by value.
void printAddress(int n) // (int n) <- denote that this is call by value. So value is copy but address is change.
{
    printf("address of n is(call by value) : %p\n", &n);
}

// here we can see in terminal the address has been changed or not.
/* we are gatting -> address of n is : 0060FF1C
                     address of n is(call by value) : 0060FF00
                     address of n is(call by referance) : 0060FF1C     */