#include <stdio.h>

// Print all the odd numbers form 5 to 50.

int main()
{
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 != 0) // odd
        {
            printf("%d\n", i);
        }
    }
    return 0;
}