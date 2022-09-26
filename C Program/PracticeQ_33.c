#include <stdio.h>

/*Write a function to calculate percentage of a
student frommarks in science, math, sanskrit*/

int calcPercentage(int science, int math, int sanskrit);

int main()
{
    int sc = 88;
    int math = 78;
    int sanskrit = 92;
    printf("percentag is : %d", calcPercentage(sc, math, sanskrit));
    return 0;
}

int calcPercentage(int science, int math, int sanskrit)
{
    return ((science + math + sanskrit) / 3);
}