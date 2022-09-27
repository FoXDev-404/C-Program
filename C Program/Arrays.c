#include <stdio.h>

// This is an example of arrays

int main()
{
    // int marks1 = 97;
    // int marks2 = 98; //before that wo write that
    // int marsk2 = 89;

    int marks[3]; // in arrays
    printf("enter phy : ");
    scanf("%d", &marks[0]);

    printf("enter chem : ");
    scanf("%d", &marks[1]);

    printf("enter math : ");
    scanf("%d", &marks[2]);

    printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]);
    return 0;
}