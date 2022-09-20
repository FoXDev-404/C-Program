#include<stdio.h>
#include<math.h>
// Program to check if a number is divisivle by 2 or not.
// If we gat 1[True] it means the number is divisivle.
// If we get 0[False] it means tha number is not divisivle.
int main() {
    int x;
    printf("Enter a nimber : ");
    scanf("%d", &x);
    printf("%d \n", x % 2 == 0);
    return 0;
}