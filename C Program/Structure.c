#include <stdio.h>
#include <string.h>

/*Structures -> a collection of values of different data types*/

// User defined.
struct student
{
    int rool;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.rool = 17;
    s1.cgpa = 7.5;
    strcpy(s1.name, "Rajpal Nishad");

    printf("student name =  %s\n", s1.name);
    printf("Student rool no = %d\n", s1.rool);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}