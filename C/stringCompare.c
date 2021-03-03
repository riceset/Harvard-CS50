#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
	string names[] = {"Bill", "Charlie", "Fred", "George"};
	
	if (argc == 2)
	{
		for (int i = 0; i < 4; i++)
		{
			if (strcmp(names[i], argv[1]) == 0)
			{	
				printf("Found.\n");
				return 0;
			}
		}

		printf("Not Found.\n");
		return 1;
	}

	else
	{
		printf("Invalid.\n");
		return 1;
	}
}
