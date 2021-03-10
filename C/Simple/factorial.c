#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int fact(int n);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./factorial number\n");
    }
    
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isalpha(argv[1][i]))
            {
                printf("Usage: ./factorial number\n");
                break;
            }
            
            else if (!isalpha(argv[1][i]))
            {
                printf("Factorial: %i\n", fact(atoi(argv[1])));
            }
        }
    }
}

int fact(int n)
{
    if (n == 1)
    return 1;
    
    else
    return n * fact(n - 1);
}

//Explanation:
// the factorial of 3 is the 3 * the factorial of 2.
//So 3 * fact(3 - 1)