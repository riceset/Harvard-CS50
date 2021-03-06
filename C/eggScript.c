#include <stdio.h>

int main()
{
    int amount;

    printf("Enter the number of eggs for the day: ");
    scanf("%i", &amount);
    printf("\n");
    int dozen = amount / 12;
    int remainder = amount % 12;

    if (amount == 1)
    {
        printf("You have 1 egg.\n");
        //printf("🥚\n");
    }

    else if (amount < 12)
    {
        printf("You have %i eggs.", amount);
    }

    else if (amount == 12)
    {
        printf("You have a dozen.");
    }

    else if (amount % 12 == 0)
    {
        printf("You have %i dozens.", dozen);
    }

    else if (dozen == 1 && remainder == 1)
    {
        printf("You have a dozen and  1 egg.");
    }

    else if (dozen == 1 && remainder < 24)
    {
        printf("You have a dozen and %i eggs.", remainder);
    }

    else if (remainder == 1)
    {
        printf("You have %i dozens and 1 egg.", dozen);
    }

    else if (remainder != 0)
    {
        printf("You have %i dozens and %i eggs.", dozen, remainder);
    }

    return 0;
}
