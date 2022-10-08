#include <stdio.h>
#include <string.h>

/* Take a string input from the user using %c */

int main()
{
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", &ch); /* This is also count space(_) */
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
}