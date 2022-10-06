#include <stdio.h>

/* Ask the user to enter their firstName & print it back to them. Also try this with their fullName */

void printString(char arr[]);

int main()
{
    // char firstname[50]; /* first name */
    // scanf("%s", firstname);
    // printf("your name is %s", firstname); /* %s for string, here wo  don't use '\0' bcz when we use "%s" '\0' is automatically there. */

    char fullName[100]; /* full Name */
    scanf("%s", fullName);
    printf("your name is %s", fullName); /* %s for string, here wo  don't use '\0' bcz when we use "%s" '\0' is automatically there. */
    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}