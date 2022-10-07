#include <stdio.h>

/* Make a program that input userr's name & print its length. */

void printString(char arr[]);
int countLength(char arr[]);

int main()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("length is : %d", countLength(name));
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