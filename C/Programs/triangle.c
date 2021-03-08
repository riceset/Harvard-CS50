#include <cs50.h>
#include <stdio.h>

bool valid_triangle(double x, double y, double z);

const int TRIANGLE = 3;

int main(void)
{
	int sides[TRIANGLE];

	for (int i = 0; i < TRIANGLE; i++)
	{
		do
		{
			sides[i] = get_double("Please enter side %i: ", i + 1);
		}
		while(sides[i] <= 0);
	}
	
	bool possibility = valid_triangle(sides[0], sides[1], sides[2]);
	
	printf(possibility ? "Possible.\n" : "Not Possible.\n");
}

bool valid_triangle(double x, double y, double z)
{
	//Checks if any input is negative or 0:
	if (x <= 0 || y <= 0 || z <= 0)
	{
		return false;
	}
	
	//Checks if each combination of two sides of a triangle could possibly be
	//less or iqual than the third side:
	if (x + y <= z || z + y <= x || x + z <= y)
	{
		return false;
	}

	//If everything is ok:
	else
	{
		return true;
	}
}
