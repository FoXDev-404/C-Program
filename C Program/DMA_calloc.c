#include <stdio.h>
#include <stdlib.h>

/*initialize with Zero(0.00...)*/
int main()
{
    float *ptr;
    ptr = (float *)calloc(5, sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    return 0;
}