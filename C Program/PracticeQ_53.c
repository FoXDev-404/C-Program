#include <stdio.h>
/*Write a function to count the "Occurrencr of voeels" in a string. */

int countVowels(char str[]);

int main()
{
    char str[] = "Hello World";
    printf("Vowels are : %d", countVowels(str));
    return 0;
}

int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}