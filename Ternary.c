#include<stdio.h>

int main() {
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    //This is an example of Trenary Operator.
    // Condition ? doSomething if True : doSomethind if False.
    age >= 18 ? printf("Adult \n") : printf("Not adult \n");
    return 0;    
}