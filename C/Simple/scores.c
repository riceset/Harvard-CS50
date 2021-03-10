#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;

//Main Function:
int main(void)
{
	//Scores array declaration:
	int scores[TOTAL];
	
	//Getting scores input:
	for (int i = 0; i < TOTAL; i++)
	{
		scores[i] = get_int("Score: ");
	}

	printf("%f\n", average(TOTAL, scores));
}

//Function to calculate the scores average:

//Explanation:

//This function gets an array lenght and an array as input. In this case,
//the array lenght is gonna be the const TOTAL = 3. And the array is going to be
//the scores array with the lenght of TOTAL = 3.

//Then, inside the function we declare an integer var called sum. This var is going
//to store the total sum of all the values inside the array. These values are going
//to be the values the user is going to enter as inputs.
//it iteracts on a for loop for the times the lenght the array is, in this case 3.
//in each iteraction we add to sum the value inside the array.

//Lastly, we return this sum divided by the array lenght that is 3 giving us the
//average. (The lenght gotta be converted into a float to avoid truncation.)
//And the whole value returned is a float because, in C, if one of the values in an
//formula is a float, the whole result becomes a float.

float average(int lenght, int array[])
{
	int sum = 0;
	for (int i = 0; i < lenght; i++)
	{
		sum += array[i];
	}

	return sum / (float) lenght;
}
