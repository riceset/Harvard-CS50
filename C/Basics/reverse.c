#include <stdio.h>

int main(void)
{
    int input;
    printf("Enter a number: ");
    scanf("%i", &input);

    int reversed = input % 10;

    printf("reversed: %i\n", reversed);
}