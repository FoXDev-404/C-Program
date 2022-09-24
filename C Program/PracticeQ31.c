#include <stdio.h>
#include <math.h>

// function to calculate area of a sqare, a circle & a rectangle.

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{
    float a = 9;
    float b = 8;

    printf("area is : %f", rectangleArea(a, b)); /// Call function
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