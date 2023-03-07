#include <stdio.h>

/**
 * main - take in integers, store in an array of five items
 * if nums in the array are 0, replace with 100
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
		if (arr[i] < 1)
			arr[i] = 100;
	}
	printf("Array values are:\n");
	for (i = 0; i < 5; i++)
	{
		printf("n[%d] = %d\n", i, arr[i]);
	}
	return (0);
}
