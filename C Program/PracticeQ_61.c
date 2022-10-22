#include <stdio.h>

/*program to  read 5 integers from a file.*/

int main()
{
    FILE *fptr;
    fptr = fopen("Test.text", "r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);

    fclose(fptr);
    return 0;
}