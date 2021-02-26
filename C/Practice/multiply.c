#include <cs50.h>
#include <stdio.h>

float multiplyFloats(float x, float y);

int main(void)
{
	float x = get_float("Enter the value of x: ");
	float y = get_float("Enter the value of y: ");

	float result = multiplyFloats(x, y);
	printf("%f\n", result);
}

float multiplyFloats(float x, float y)
{
	return x * y;
}
