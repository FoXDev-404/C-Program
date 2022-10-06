#include <stdio.h>

/* This is an example of string format specifier. */

void printString(char arr[]);

int main()
{
    char name[50];
    scanf("%s", name); /* %s for string */
    printf("your name is %s", name); /* %s for string */
    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}