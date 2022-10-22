#include <stdio.h>
#include <string.h>

/*make a structure to store Bank Account information of
    a customer of ABC Bank also, make an alice for it.*/
typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;

int main()
{
    acc acc1 = {123, "Rajpal"};
    acc acc2 = {124, "Nishad"};
    acc acc3 = {125, "Palu"};

    printf("acc no = %d\n", acc1.accountNo);
    printf("name = %s\n", acc1.name);

    printf("acc no = %d\n", acc2.accountNo);
    printf("name = %s\n", acc2.name);

    printf("acc no = %d\n", acc3.accountNo);
    printf("name = %s\n", acc3.name);

    return 0;
}