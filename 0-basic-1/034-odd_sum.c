#include <stdio.h>

/**
 * main - take in two inputs and then compute all odd numbers within range of
 * inputs and compute the sum afterwards
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, m, i, sum;

	sum = 0;

	printf("Input the first number of the pair: ");
	fflush(stdout);
	scanf("%d", &n);
	printf("Input the second number of the pair: ");
	fflush(stdout);
	scanf("%d", &m);

	printf("List of odd numbers: ");
	for (i = m; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);
			sum += i;
		}
	}
	printf("Sum = %d", sum);
	return (0);
}
