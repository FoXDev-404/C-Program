#include <stdio.h>
#include <string.h>

/* This is an example of standard librery functions "strcpy(newStr, oldStr)" */

void printString(char arr[]);
int countLength(char arr[]);

int main()
{
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";
    strcpy(newStr, oldStr);
    puts(newStr);
}