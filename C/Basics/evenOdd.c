#include <stdio.h>

int main() {
  
  //Variables:
  int number1;
   
  //Prompt:
  printf("Please enter a number: ");
  scanf("%i", &number1);
  
  //Calculation:
  if (number1 % 2 == 0) {
  printf("%i is an even number.\n", number1);
  }

  else if (number1 % 2 != 0) {
  printf("%i is an odd number.\n", number1);
  }

  return 0;
}
