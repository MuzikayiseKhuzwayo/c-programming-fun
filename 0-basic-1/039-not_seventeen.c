#include <stdio.h>

/**
 * main - calculate sum of all numbers that are indivisible by 
 * 17 between range
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x, y, sum, i;
	
	sum = 0;

	printf("Input the first integer: ");
	fflush(stdout);
	scanf("%d", &x);
	printf("Input the second integer: ");
	fflush(stdout);
	scanf("%d", &y);

	for (i = x; i <= y; i++)
	{
		if (i % 17)
		{
			sum += i;
		}
	}
	printf("Sum: %d", sum);
	return (0);
}

