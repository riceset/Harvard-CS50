#include <stdio.h>

int fib(int position);

int main(void)
{
    int input;
    printf("Number: ");
    scanf("%i", &input);

    int result = fib(input);
    printf("Result: %i\n", result);
}

int fib(int position)
{
    if (position <= 1)
        return position;
    else
        return fib(position - 1) + fib(position - 2);
}