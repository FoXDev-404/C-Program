#include<stdio.h>


/* Write a program to check if given character is digit
or not. */

int main() {
    int ch;
    printf("enter a character : ");
    scanf("%d", &ch);

   if (ch >= 0 && ch <= 9) {
    printf("is digit. \n");
    } else 
    {
    printf("is not digit. \n");
    }
    return 0;
}