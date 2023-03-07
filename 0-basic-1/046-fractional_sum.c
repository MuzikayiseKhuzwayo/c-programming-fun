#include <stdio.h>

/**
 * main - calculate the fractional sum 
 *
 * Return: 0 (success)
 */

int main(void)
{
	float i, j, k, l;
	
	i = 1.0, j = 3.0 / 2, k = 5.0 / 4, l = 7.0 / 8;

	printf("Value of series: %.2f\n", i + j + k + l);

	return (0);
}
