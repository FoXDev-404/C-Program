#include <stdio.h>
#include <string.h>

/* This is an example of standard librery functions "<string.h>" */

void printString(char arr[]);
int countLength(char arr[]);

int main()
{
    char name[] = "Rajpal";
    int length = strlen(name);
    printf("length is : %d", length);
    return 0;
}

int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}