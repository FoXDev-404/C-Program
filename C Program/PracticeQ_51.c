#include <stdio.h>
#include <string.h>

/* Salting */
/* Find the salted fore of a password entered by
   user if salt is "123" & added at the end */
void salting(char password[]);

int main()
{
    char password[100];
    scanf("%s", password);
    salting(password);
}

void salting(char password[])
{
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}