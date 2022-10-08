#include <stdio.h>
#include <string.h>

/* Compares 2 strings & returns a value. */
/* if return value is 0 -> string equal */
/* if return value is positive(+ve) -> first > second (ASCII) */
/* if return value is negative(-ve) -> first < second (ASCII) */

void printString(char arr[]);
int countLength(char arr[]);

int main()
{
    /* return value is 0 -> string equal */
    // char firstStr[] = "Apple";
    // char secStr[] = "Apple";

    /* return value is positive(+ve) -> first > second (ASCII) */
    // char firstStr[] = "Banan";
    // char secStr[] = "Apple";

    /* return value is negative(-ve) -> first < second (ASCII) */
    char firstStr[] = "Apple";
    char secStr[] = "Banana";

    printf("%d", strcmp(firstStr, secStr));
}