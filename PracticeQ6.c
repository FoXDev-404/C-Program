// Program to check if a number is even or odd...
#include<stdio.h>
#include<math.h>
// If even -> 1
// If odd -> 0
int main() {
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("%d \n", x % 2 == 0);
    return 0;
}