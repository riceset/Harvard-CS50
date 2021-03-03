#include <cs50.h>
#include <stdio.h>


int search(int arr[], int target);

int main(void)
{
	int arr[] = {2, 3, 4, 7, 8, 9, 11, 13};
	int	target = get_int("Input: ");

	int result = search(arr, target);
	if (result != -1)
	{
		printf("Found.\n");
	}

	else
	{
		printf("Not found.\n");
	}
}

int search(int arr[], int target)
{
	int left = 0;
	int right = 8 - 1; //where 8 is the lenght of the array
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		
		if (arr[mid] == target)
			return mid;
		else if (target < arr[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return -1;
}
