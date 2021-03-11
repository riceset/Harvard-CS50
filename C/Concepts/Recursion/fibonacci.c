#include <stdio.h>

int fib(int n);

int main(void)
{
    int num;
    printf("Number: ");
    scanf("%i", &num);

    int result = fib(num);
    printf("result: %i\n", result);
}

int fib(int n)
{
    if (n == 1 || n == 0)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}