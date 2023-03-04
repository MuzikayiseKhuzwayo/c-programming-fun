#include <stdio.h>

/**
 * main - prints out all even numbers between 1 and 50 (inclusive)
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 51; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
