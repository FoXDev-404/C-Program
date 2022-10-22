#include <stdio.h>
#include <stdlib.h>

/*this is an examole of free(ptr) DMA*/
int main()
{
    int *ptr;
    int n;
    printf("enter n : ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    ptr = (int *)calloc(2, sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}