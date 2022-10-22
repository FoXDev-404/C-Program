#include <stdio.h>
#include <string.h>

/*creat a stricter to store vectors then make a function to return sum of 2 vector.*/

struct vector
{
    int x;
    int y;
};

void calsSum(struct vector v1, struct vector v2, struct vector sum);

int main()
{
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};

    calsSum(v1, v2, sum);

    return 0;
}

void calsSum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}