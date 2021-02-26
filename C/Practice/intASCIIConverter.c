#include <stdio.h>

int main() {
	printf("\n");
	printf("Welcome to ASCII/Int Converter!\n\n");
	printf("What would you like to convert?\n\n");
	printf("Enter 0 for converting ASCII - Int.\n");
	printf("Enter 1 for converting Int - ASCII.\n\n");
	printf("⭐️: ");
	int conversionInput;
	scanf("%i", &conversionInput);
	printf("\n");
	
	if (conversionInput == 0) {
	char ASCIIcharacter;
	printf("Please enter an ASCII character: ");	
	scanf(" %c", &ASCIIcharacter);
	printf("\n\nThe integer correspondent to %c is %i.\n", ASCIIcharacter, ASCIIcharacter);
	}
	
	else {
	int IntegerNumber;
	printf("Please enter an integer (33 - 126): ");
	scanf("%i", &IntegerNumber);
	printf("\n\nThe ASCII correspondent to %i is %c.\n", IntegerNumber, IntegerNumber);
	} 
}
