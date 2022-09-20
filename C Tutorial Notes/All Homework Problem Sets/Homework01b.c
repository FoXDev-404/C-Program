#include<stdio.h>

//Take a number(n) from user & output its cube(n*n*n).
// or we can say volume of cube.

int main() {
    float num;
    printf("enter number : ");
    scanf("%f", &num);

    printf("Cube of the number %f :", num * num * num);
    return 0;
}