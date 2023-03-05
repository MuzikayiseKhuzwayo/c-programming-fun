#include <stdio.h>

/**
 * main - print out a 3 by n output of nums, their square and their cube
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, i, j;

	printf("Input number of lines: ");
	fflush(stdout);
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("%d %d %d\n", i, i * i, i * i * i);
	}
	return (0);
}
