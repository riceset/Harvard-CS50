#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char agreeOrNot = get_char("Do You Agree? ");

    if (agreeOrNot == 'y' || agreeOrNot == 'Y')
    {
        printf("Agreed.\n");
    }

    else if (agreeOrNot == 'n' || agreeOrNot == 'N') {
        printf("Not Agreed.\n");
    }

    else {
        printf("Please enter a valid character.\n");
    }
}