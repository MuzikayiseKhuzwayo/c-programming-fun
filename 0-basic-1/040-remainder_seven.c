#include <stdio.h>

/**
 * main - find and print all integers that have a remainder of 2 or 3
 * when divided by seven between the range of two inputed integers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x, y, i;

	printf("Input the first integer: ");
	fflush(stdout);
	scanf("%d", &x);
	printf("Input the second integer: ");
	fflush(stdout);
	scanf("%d", &y);

	for (i = x; i < y; i++)
	{
		if (i % 7 == 2 || i % 7 == 3)
		{
			printf("%d\n", i);
		}
	}
	return (0);
}
