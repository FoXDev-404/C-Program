#include <stdio.h>
#include <string.h>

/* concatentes first string with second string using "Strcat(first str, sec str)" */

int main()
{
    char firstString[100] = "Hello "; /* size[100] must give large if wo don't give any size the it count only first word size("Hello " = 6) then no more character can add only first char print. */
    char secString[] = "World!";
    strcat(firstString, secString);
    puts(firstString);
}