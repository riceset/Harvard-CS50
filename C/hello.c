#include <stdio.h>
#include <cs50.h>

int sum(int n1, int n2);

int main(void)
{
    int n1;
    int n2;
    printf("Enter number 1: ");
    scanf("%i", &n1);
    printf("Enter number 2: ");
    scanf("%i", &n2);
    int n3 = get_int("Enter number 3: ");

    int sumN = sum(n1, n2);
    printf("result: %i\n", sumN);
}

int sum(int n1, int n2)
{
    return n1 + n2;
}