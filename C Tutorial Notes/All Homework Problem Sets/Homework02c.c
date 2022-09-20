#include<stdio.h>

//Write a program to print the smallest number of two

int main() {
    int a;
    int b;
    int small;
    
    printf("Enter Number : ");
    scanf("%d", &a);

    printf("Enter Number : ");
    scanf("%d", &b);
    small = (a>b) ? b : a;
    printf("\nsmallest = %d", small);
    
    return 0;

}