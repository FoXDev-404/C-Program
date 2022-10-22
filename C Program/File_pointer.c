#include <stdio.h>

/*here we  test file pointers*/

int main()
{
    FILE *fptr;
    fptr = fopen("Test.text", "w");

    /*write mode*/
    fputc('M', fptr);
    fputc('a', fptr);
    fputc('n', fptr);
    fputc('g', fptr);
    fputc('o', fptr);

    /*Read mode*/
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    /*Delete and write mode*/
    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'a');
    // fprintf(fptr, "%c", 'n');
    // fprintf(fptr, "%c", 'g');
    // fprintf(fptr, "%c", 'o');

    fclose(fptr);
    return 0;
}