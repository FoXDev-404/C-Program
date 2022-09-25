#include <stdio.h>
#include <math.h>

// function to calculate area of a sqare, a circle & a rectangle.

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{
    float x, a, b, side, rad;
    printf("Enter type '1' for circle, '2' for rectangle, '3' for square. : "); /// Call function
    scanf("%f", &x);

    if (x == 1)
    {
        printf("enter radius : ");
        scanf("%f", &rad);
        printf("area is : %f \n", circleArea(rad));
    }

    else if (x == 2)
    {
        printf("enter side a : ");
        scanf("%f", &a);
        printf("enter side b : ");
        scanf("%f", &b);
        printf("area is : %f \n", rectangleArea(a, b));
    }

    else if (x == 3)
    {
        printf("enter side : ");
        scanf("%f", &side);
        printf("area is : %f \n", squareArea(side));
    }

    else
    {
        printf("not valid. \n");
    }
    return 0;
}

float squareArea(float side)
{
    return side * side;
}

float circleArea(float rad)
{
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b)
{
    return a * b;
}