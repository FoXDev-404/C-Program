#include<stdio.h>
#include<math.h>

int main() {
    // This is an exammple of Relational Operator.
    // If it print 1 it means True and if print 0 it means False for [ < <= > >= ] operatior.
    printf("Relational(< > <= >=) Operators!\n");
    printf("%d \n", 4 > 5);
    printf("%d \n", 4 >= 4);
    printf("%d \n", 100 < 99);
    printf("%d \n", 100 >= 99);
    // In tha != (equalnot) form if it print 1 it means False and if print 0 then True.
    // Here is an example of !=(equalnot) operator.
    printf("Relational(!=(equalnot)) Operators!\n");
    printf("%d \n", 4 != 4);
    printf("%d \n", 4 != 5);
    return 0;
}