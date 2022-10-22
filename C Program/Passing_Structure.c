#include <stdio.h>
#include <string.h>

// User Defined
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

// Passing structures to function
void printInfo(struct student s1); // Function Prototype

int main()
{
    struct student s1 = {1291, 9.2, "Rajpal Nishad"};
    printInfo(s1);

    return 0;
}

void printInfo(struct student s1)
{
    printf("Student Information :  \n");
    printf("Student.roll = %d\n", s1.roll);
    printf("Student.cgpa = %f\n", s1.cgpa);
    printf("Student.name = %s\n", s1.name);
}