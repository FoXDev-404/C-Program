#include <stdio.h>
/*Check if agiven character is persent in a string or not.*/

void checkChar(char str[], char ch);

int main()
{
    char str[] = "Hello World";
    char ch = 'e';
    checkChar(str, ch);
}

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Character is persent!");
            return;
        }
    }
    printf("Character is NOT persent :(");
}