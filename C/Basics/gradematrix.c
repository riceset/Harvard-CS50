#include <stdio.h>

int main(void)
{
    int students;
    printf("How many students? ");
    scanf("%i", &students);

    int numGradesPerStudent;
    printf("How many grades? ");
    scanf("%i", &numGradesPerStudent);

    float grades[students][numGradesPerStudent], average[students];

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < numGradesPerStudent; j++)
        {
            printf("Please enter grade %i for student %i: ", j + 1, i + 1);
            scanf("%f", &grades[i][j]);
            average[i] += grades[i][j];
        }
        average[i] /= numGradesPerStudent;
        printf("Average for student %i: %.1f\n", i + 1, average[i]);
    }
}