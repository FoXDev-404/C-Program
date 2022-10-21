#include <stdio.h>
// Slice Function
/* write a function to named slice, which takes a
string & returns a sliced string from index n to m. */

void slice(char str[], int n, int m);

int main()
{
    char str[] = "HelloWorld";
    slice(str, 3, 6);
    return 0;
}

void slice(char str[], int n, int m)
{
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}