#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int input = get_int("Enter a random int or 0: ");

	if (input)
	{
		printf("Your input is != 0 so this is true.\n");
	}

	else
	{
		printf("0 == false so this is false.\n");
	}
}
