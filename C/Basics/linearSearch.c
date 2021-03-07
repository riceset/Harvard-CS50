#include <stdio.h>

int main(void)
{
	const int SIZE = 9;
	int ages[SIZE] = {4, 6, 67, 40, 30, 20, 24, 90, 100};
	int target;

	printf("What's the number you're looking for? ");
	scanf("%i", &target);

	for (int i = 0; i < SIZE; i++)
	{
		if (target == ages[i])
		{
			printf("%i was found.\n", target);
			return 0;
		}
	}
	printf("The number wasn't found.\n");
	return 1;
}