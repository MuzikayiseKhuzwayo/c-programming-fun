#include <stdio.h>
/**
 * main - takes in one numer and then adds it to the first position of array
 * for every num after that, it multiplies num by 3. arr has 5 items in total
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i, arr[5];

	printf("Input the first number of the array: ");
	fflush(stdout);
	scanf("%d", &arr[0]);

	for (i = 1; i < 5; i++)
	{
		arr[i] = arr[i - 1] * 3;
	}
	for (i = 0; i < 5; i++)
	{
		printf("n[%d] = %d\n", i, arr[i]);
	}
	return (0);
}
