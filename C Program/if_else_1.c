#include<stdio.h>

int main() {
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if(age >= 18)
    {
    printf("Adult \n");
    printf("They can vote \n");
    printf("Thay can drive \n");
    }
    else if(age > 13 && age < 18) {
        printf("Teenager \n");
        printf("They can't vote \n");
        printf("They can't drive \n");
    }
    else {
        printf("Child \n");
    }
    printf("Thank You! \n");
    return 0;
}