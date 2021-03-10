#include <stdio.h>

int main(void)
{
    int number, reverse;

    printf("Enter a number: ");
    scanf("%i", &number);

    if (number >= 0)
    {
        do
        {
            reverse = number % 10;
            printf("%i", reverse);
            number /= 10;
        } while (number != 0);
    }
    else
    {
        number = number * -1; 
        printf("-");
        do
        {
            reverse = number % 10;

            printf("%i", reverse);
            number /= 10;
        } while (number != 0);
    }
}