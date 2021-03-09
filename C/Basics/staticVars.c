#include <stdio.h>

void sum(void);

int main(void)
{
    sum();
    sum();
}

void sum(void)
{
    static int num1 = 2;
    num1 += num1;
    printf("%i\n", num1);
}