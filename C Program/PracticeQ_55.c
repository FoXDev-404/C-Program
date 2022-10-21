#include <stdio.h>
#include <string.h>

/*write a program to store the data of three students.*/

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

    printf("Student name =  %s\n", s1.name);
    printf("Student rool no = %d\n", s1.rool);
    printf("student cgpa = %f\n", s1.cgpa);

    struct student s2;
    s2.rool = 21;
    s2.cgpa = 8.1;
    strcpy(s2.name, "Aman");

    printf("Student name = %s\n", s2.name);
    printf("Student rool no = %d\n", s2.rool);
    printf("Student cgpa = %f\n", s2.cgpa);

    struct student s3;
    s3.rool = 26;
    s3.cgpa = 7.8;
    strcpy(s3.name, "Xavier");

    printf("Student name = %s\n", s3.name);
    printf("Student rool no = %d\n", s3.rool);
    printf("Student cgpa = %f\n", s3.cgpa);

    return 0;
}