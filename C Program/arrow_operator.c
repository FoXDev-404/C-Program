#include <stdio.h>
#include <string.h>

// Arrow operator ->

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1 = {1648, 8.5, "Raj"};
    printf("student roll no = %d\n", s1.roll);

    // Arro operator ->
    struct student *ptr = &s1;
    printf("student->roll no %d\n", ptr->roll);

    return 0;
}