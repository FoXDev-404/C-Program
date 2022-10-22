#include <stdio.h>

/*program to write all the odd numbers from 1 to n in a file.*/
int main()
{
    FILE *fptr;
    fptr = fopen("Odd.text", "w");

    int n;
    printf("enter n : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\t", i);
        }
    }

    fclose(fptr);
    return 0;
}