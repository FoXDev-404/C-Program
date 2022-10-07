#include <stdio.h>

void printString(char arr[]);

int main()
{
    // char str[100];
    // fgets(str, 100, stdin);
    // puts(str);

    char *canChange = "Hello World"; /* character pointer can cahnge value */
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "Hello World";
    puts(cannotChange);
    // cannotChange = "Hello"; /* Here we get error bcz of character array[] expression must be a modifiable lvalue */
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