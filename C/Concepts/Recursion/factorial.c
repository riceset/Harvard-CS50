#include <stdio.h>

int factorial(int num);

int main(void)
{
    int input;
    printf("Number: ");
    scanf("%i", &input);

    int result = factorial(input);
    printf("factorial: %i\n", result);
}

int factorial(int num)
{
    //Base case:
    if (num == 0)
        return 1;
    else
        return num *= factorial(num - 1);
}
//Explanation:
//num is 2
//2 *
//1 *
//num is now 0 so the function will return 1
//to the last func as a parameter.
//1 * 1
//2 * 1
//num = 2