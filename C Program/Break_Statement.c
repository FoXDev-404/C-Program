#include <stdio.h>

// This is an Example of break statement.
// Break statement -> Exit the loop.

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
            break;
        {
            printf("%d\n", i);
        }
    }
    printf("end");

    return 0;
}