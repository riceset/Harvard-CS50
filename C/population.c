#include <cs50.h>
#include <stdio.h>

int main(void)
{

    //declares the starting population variable
    int initial;

    //checks if the starting population value is greater than 9.
    //If not it will prompt again until the user enters a value that is iqual or greater than 9.
    do
    {
        initial = get_int("Start Size: ");
    }
    while (initial < 9);

    //declares the ending population variable
    int finalEstimated;

    //checks if the starting population value is greater than the starting population.
    //If not it will prompt again until the user enters a value that is iqual or greater than the starting population.
    do
    {
        finalEstimated = get_int("End Size: ");
    }
    while (finalEstimated < initial);

    int counter = 0;

    while (initial < finalEstimated)
    {
        int gain = initial / 3;
        int lose = initial / 4;

        initial = (initial + gain) - lose;
        counter++;
    }

    printf("Years: %i\n", counter);
}