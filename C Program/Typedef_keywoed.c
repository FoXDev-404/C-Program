// Typedef keyword used to creat alice(short nikname) for data types.

#include <stdio.h>
#include <string.h>

// User Defined
typedef struct computerengineeringstudent
{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main()
{
    coe s1;
    s1.roll = 17;
    s1.cgpa = 8.9;
    strcpy(s1.name, "Rajpal Nishad");

    printf("Student name is : %s\n", s1.name);
    printf("Student roll is : %d\n", s1.roll);
    printf("Student cgpa is : %f\n", s1.cgpa);

    return 0;
}