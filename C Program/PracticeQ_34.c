#include <stdio.h>

// write a function to print n_th terms of the fibonacci sequence.

int fib(int n);

int main()
{
    printf("%d", fib(9));
    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    // printf("fib of %d is : %d \n", n, fibN);
    return fibN;
}