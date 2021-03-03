#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int n[] = {1, 2, 3, 4, 5, 6, 7, 8};
	bool present = false;
	
	int target = get_int("Enter your target: ");

	for (int i = 0; i < (sizeof(n) - 1); i++)
	{
		if (i == target)
		{
			present = true;
		}
	}
	
	if (present)
	{
			printf("True!\n");
	}
	else
	{
		printf("False!\n");
	}
}
