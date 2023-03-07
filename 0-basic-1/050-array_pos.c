#include <stdio.h>

/**
 * main - take in five items into an array and then print out the 
 * position and value of items less than five
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, arr[5];

	printf("Input the 5 members of the array:\n");
	fflush(stdout);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (arr[i] < 5)
		{
			printf("A[%d] = %d\n", i, arr[i]);
		}
	}
	return (0);
}
