#include <stdio.h>

// This is an example of function t calculate the Price.

void calculatePrice(float value);

int main()
{
    float value;
    printf("Enter Value : ");
    scanf("%f", &value);
    calculatePrice(value);
    printf("value is : %f\n", value);
    return 0;
}

void calculatePrice(float value)
{
    value = value + (0.18 * value); //(0.18*value) = 18% gst
    printf("Final Price : %f \n", value);
}