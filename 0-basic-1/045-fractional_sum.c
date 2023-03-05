#include <stdio.h>

/**
 * main - calculate the sum of s where S is 1 plus 1/2 plus 1/3... plus 1/50
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	float val;

	val = 0.0;

	for (i = 1; i <= 50; i++)
	{
		val += (float)1 / i;
	}
	printf("Value of S: %.2f\n", val);
	return (0);
}
