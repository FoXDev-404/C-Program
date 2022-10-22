#include <stdio.h>

/*program to read full file*/
int main()
{
    FILE *fptr;
    fptr = fopen("Test.text", "r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}