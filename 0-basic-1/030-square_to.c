#include <stdio.h>

/**
 * main - takes in a number n and prints all squares from one to n
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, i;

	printf("List of squares of every even number from 1 to: ");
	fflush(stdout);
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d^2 = %d\n", i, i * i);
		}
	}
	return (0);
}
