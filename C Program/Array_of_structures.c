#include <stdio.h>
#include <string.h>

// Array of Structures.

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student ece[100];
    ece[0].roll = 147;
    ece[0].cgpa = 9.1;
    strcpy(ece[0].name, "Raj");

    printf("Name = %s\n", ece[0].name);
    printf("roll = %d\n", ece[0].roll);
    printf("cgpa = %f\n", ece[0].cgpa);

    return 0;
}