#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	int numbers[100];

	for (int i = 0; i < 100; i++)
	{
		numbers[i] = i + 1;
		printf("%i\n", numbers[i]);
	}
}
