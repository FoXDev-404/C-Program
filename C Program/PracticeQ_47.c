#include <stdio.h>

/* This is an example of string. */

void printString(char arr[]);

int main()
{
    char firstName[] = "Rajpal";
    char lastName[] = "Nishad";

    printString(firstName);
    printString(lastName);
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