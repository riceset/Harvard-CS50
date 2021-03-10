#include <stdio.h>

int main(void)
{
    //How many items in the array:
    int vectorSize;
    printf("How many grades? ");
    scanf("%i", &vectorSize);

    float grades[vectorSize], average;

    for (int i = 1; i <= vectorSize; i++)
    {
        printf("Please enter grade %i: ", i);
        scanf("%f", &grades[i]);
        average += grades[i];
    }
    average /= vectorSize;
    printf("Average: %.2f.\n", average);
}