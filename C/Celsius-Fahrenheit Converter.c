#include <stdio.h>

int main()
{
	float enteredNumber;
	int FahOrCel;
	printf("Please enter 0 for converting Fahrenheit to Celsius.\nPlease enter 1 for converting Celsius to Fahrenheit.\n");
	printf(" \n");
	printf("⚡️ Enter 0 or 1: ");
	scanf("%i", &FahOrCel);

	if (FahOrCel == 0)
	{
		printf(" \n");
		printf("Enter your temperature in Fahrenheit: ");
		scanf("%f", &enteredNumber);

		//Fahrenheit to Celsius
		float fahCel = enteredNumber - 32;
		float _fahCel = fahCel * 5 / 9;

		printf(" \n");
		printf("%f°C\n", _fahCel);
		printf(" \n");
	}

	else if (FahOrCel == 1)
	{
		printf(" \n");
		printf("Enter your temperature in Celsius: ");
		scanf("%f", &enteredNumber);
		//Celsius to Fahrenheit
		float celFah = enteredNumber * 9 / 5;
		float _celFah = celFah + 32;

		printf(" \n");
		printf("%f°F\n", _celFah);
		printf(" \n");
	}

	else
	{
		printf(" \n");
		printf("⚠︎ ERROR\n");
		printf(" \n");
	}

	return 0;
}
