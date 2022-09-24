#include <stdio.h>
#include <math.h> //Library function

/*Using library function to calculate the
square of number given by user.   */

int main()
{
    float n;
    printf("Enter number : ");
    scanf("%f", &n);
    printf("%f", pow(n, 2)); // pow(function)(n, 2)= n to the power 2.
    return 0;
}