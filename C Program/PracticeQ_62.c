#include <stdio.h>

/*program to input student info from a user & enter it to a file.*/
int main()
{
    FILE *fptr;
    fptr = fopen("Student.text", "w");
    char name[100];
    int age;
    float cgpa;
    printf("enter name : ");
    scanf("%s", &name);
    printf("enter age : ");
    scanf("%d", &age);
    printf("enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name : %s\n", name);
    fprintf(fptr, "Studnet age : %d\n", age);
    fprintf(fptr, "Student cgpa : %f", cgpa);

    fclose(fptr);
    return 0;
}