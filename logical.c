#include<stdio.h>
#include<math.h>
    // This is an exammple of logical Operator.
int main() {
    // If it print 1 it means True and if print 0 it means False.
    /* In this every statement must be True for True in logical &&(AND) operator
    otherwise it is False. */
    printf("Logical &&(AND) Operator!\n");
    printf("%d \n", 5>4 && 4<5);
    printf("%d \n", 4<5 && 5>6);

    /* In this anyone statement must True for True in logical ||(OR) operator
    if every statement  it is False then is is Fales. */
    printf("Logical ||(OR) Operator\n");
    printf("%d \n", 10>20 || 10<20);
    printf("%d \n", 7>8 || 8<7);
    printf("%d \n", 10<20 || 20<10);
    
    /* The logical NOT operator is represented as the '!' symbol,
    which is used to reverse the result of any given expression or condition.
    If the result of an expression is non-zero or true,
    the result will be reversed as zero or false value. */
    printf("Logical !(NOT) Operator!\n");
    printf("%d \n", !(10>9 && 9>8));
    printf("%d \n", !(10<9 && 9<8));
    printf("%d \n", !(10>20 || 10<20));
    return 0;
}