#include <stdio.h>

// This is an example of "Recursion"
// Here wo peit "Hello world" 5 times.
void printHW(int count);

int main()
{
    printHW(5);
    return 0;
}

void printHW(int count)
{
    if (count == 0)
    {
        return;
    }

    printf("Hello world! \t");
    printHW(count - 1);
}