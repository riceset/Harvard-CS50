#include <stdio.h>

int main(void)
{
    const int SIZE = 13;
    int numbers[SIZE] = {2, 4, 5, 7, 10, 27, 34, 120, 42, 53, 62, 70, 200};
    int highest = numbers[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (highest < numbers[i])
        {
            highest = numbers[i];
        }
    }

    printf(highest != 0 ? "The highest number is %i\n" : "ERROR!\n",
    highest);
}