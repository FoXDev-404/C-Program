#include <stdio.h>

// This is an example of continue statement.
// Contonue Statement -> Skip to next iteration.

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        if (i == 3) // Skip,..
        {
            continue;
        }
        printf("%d\n", i);
    }
    printf("Thank You! \n");
    return 0;
}