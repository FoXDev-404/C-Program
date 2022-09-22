#include <stdio.h>

// Write 2 function - one to print "Hello" % second to print "Good Bye".

void printHello(); // Declaration/prototype
void printGoodbye();

int main()
{
    printHello(); // function call
    printGoodbye();
    return 0;
}
// function definition
void printHello()
{
    printf("Hello \n");
}

void printGoodbye()
{
    printf("Good Bye \n");
}