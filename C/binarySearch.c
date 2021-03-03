#include <cs50.h>
#include <stdio.h>

const int arrayLen = 10;

int main(void)
{
	int numbers[arrayLen] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int target = get_int("Enter your target: ");
	bool present;
	
	int middleIndex = arrayLen / 2;
	int middle = numbers[middleIndex] - 1;

	for (int i = 0; i < 10; i++)
	{

		if (numbers[i] != target)
		{
			present = false;
		}	

	}

	if (middle == target)
	{
		present = true;
	}
	
	if (present)
	{
		printf("The number is present!\n");
	}

	else
	{
		printf("The number isn't present...\n");
	}
}
