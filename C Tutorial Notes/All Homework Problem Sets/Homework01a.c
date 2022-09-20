#include<stdio.h>

/* Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.*/

int main()  {
    float Side1;
    float Side2;
    printf("entar Side1 : ");
    scanf("%f", &Side1);

    printf("enter Side2 : ");
    scanf("%f", &Side2);

    printf("Perimeter is %f: ", 2 * (Side1 * Side2));
    return 0;

}
