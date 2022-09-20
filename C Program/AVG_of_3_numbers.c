#include<stdio.h>
#include<math.h>

int main() {
    int a;
    a = 3;
    float x;
    printf("enter a number : ");
    scanf("%f", &x);
    float y;
    printf("enter a number : ");
    scanf("%f", &y);
    float z;
    printf("enter a number : ");
    scanf("%f", &z);
    printf("%f \n", (x + y + z)/a);
    return 0;
}