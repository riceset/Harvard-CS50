#include <cs50.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(int argc, string argv[])
{
	if (argc == 2)
	{
		printf("Hello, %s!\n", argv[1]); 
	}

	else if (argc >= 3)
	{
		printf("Hello, %s %s!\n", argv[1], argv[2]);
	}

	else
	{
		printf("Please enter your name after calling the program.\n");
	}
}
