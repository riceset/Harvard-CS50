#include <stdio.h>
#include <math.h>

int main() {
	double a;
	double b;
	
	printf("This program calculates the hypotenuse of a right triangle and outputs it.\n");
	
	printf("Enter a value: ");
	scanf("%lf", &a);

	printf("Enter another value: ");
	scanf("%lf", &b);
	double hypotenuse = sqrt((a * a) + (b * b));
	printf("The hypotenuse is: %lf\n", hypotenuse);

	return 0;
}
