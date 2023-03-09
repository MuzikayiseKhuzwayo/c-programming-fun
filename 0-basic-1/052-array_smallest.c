#include <stdio.h>

/**
 * main - takes in five integers, and finds the on with the 
 * 	lowest value and it's position
 *
 * Return: 0 (success);
 */

/*
 * Input: Five integers in any order
 * Output: Two lines
 * 	1. line one shows smallest value
 * 	2. line two shows position of the value
 * To do:
 * 	1. declare temporary variables (counters)
 * 	2. Print Input message for array size
 * 		2.1 take in array size and declare array with it
 * 	3. Take in integers through a loop into the appropriate position
 *	4. Loop through array
 *		4.1 take first item as smallest
 *		4.2 if there is a smaller number, store it's position in a global var
 *	5. Print the output lines using position as an index
 *	6. return 0
 * optimisations
 * 	1. instead of two loops you could have one since both are going to j
 */

int main(void)
{
	int i, pos, j;

	pos = 0;

	printf("Input the length of the array: ");
	fflush(stdout);
	scanf("%d", &j);
	
	int arr[j];

	printf("Input the array elements:\n");
	fflush(stdout);
	for (i = 0; i < j; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[pos] > arr[i])
		{
			pos = i;
		}
	}

	printf("Smallest value: %d\n", arr[pos]);
	printf("Position of the element: %d\n", pos);

	return (0);
}
