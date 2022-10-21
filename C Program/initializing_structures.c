#include <stdio.h>
#include <string.h>

// Inintializing Structures and Pointer to structures

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1 = {32, 9.1, "Rajpal"};
    printf("Student roll = %d\n", s1.roll);
    printf("Studemt cgpa = %f\n", s1.cgpa);
    printf("Student name = %s\n", s1.name);

    // Pointers to strutures
    //  struct student *ptr = &s1;
    //  printf("Student roll = %d\n", (*ptr).roll);
    //  printf("Studemt cgpa = %f\n", (*ptr).cgpa);
    //  printf("Student name = %s\n", (*ptr).name);

    return 0;
}