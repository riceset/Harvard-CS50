#include <stdio.h>
#include <cs50.h>

const int SCORES = 3;

int main(void)
{
    int scores[SCORES];
    scores[0] = 1;
    scores[1] = 2;
    scores[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]);
    }
}