#include <stdio.h>

/**
 * main - take in five nums into an array, 
 * 	then modify the positions of the items
 *
 * Return: 0 (success)
 */

/*
 * Input: five integers in a certain order
 * Output: five integers in modified positions
 * To do: 
 * 	1. declare array
 * 	2. print input message and take in integers
 * 		2.1 loop five times while adding in the correct positions
 * 	3. loop through array to modify positions(needs an integer i).
 * 		3.1 first and last elements switch positions
 * 		3.2 second and fourth element switch positons
 * 		3.3 third element stays the same
 * 	4. loop through array to print each element
 * 	5. return 0
 */

int main(void)
{
	int arr[5], i, j, tmp;
	
	printf("Input the 5 members of the array:\n");
	fflush(stdout);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}	
	for (i = 0; i < 5 / 2; i++)
	{
		j = i + 4 - (i * 2);
		tmp = arr[j];
		arr[j] = arr[i];
		arr[i] = tmp;
	}	
	for (i = 0; i < 5; i++)
	{
		printf("array_n[%d] = %d\n", i, arr[i]);
	}
	return (0);
}
