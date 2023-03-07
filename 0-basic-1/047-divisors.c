#include <stdio.h>

/**
 * main - find all the divisors of an input number
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i, num;

	printf("Input an integer: ");
	fflush(stdout);
	scanf("%d", &num);

	printf("All the divisors of %d are:\n", num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
		}
	}
	return (0);
}
