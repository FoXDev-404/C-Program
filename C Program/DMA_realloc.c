#include <stdio.h>
#include <stdlib.h>
/*this is an example of realloc DMA*/
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("Enter no(5) : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("Enter no(8) : ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // print
    for (int i = 0; i < 5; i++)
    {
        printf("number %d is %d\n", i, ptr[i]);
    }
    return 0;
}