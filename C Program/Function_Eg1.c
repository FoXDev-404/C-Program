#include <stdio.h>

// This is an example of function.

void printHello(); // declaratation/Prototype

int main()
{
    printHello(); // Function Call
    printHello();
    printHello();
    return 0;
}

void printHello() // Fubction Definitation
{
    printf("Hello! \n");
}