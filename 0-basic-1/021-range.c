#include <stdio.h>

/**
 * main - takes in a number and prints the range it lies in
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, r1, r2;

	printf("Input an integer: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n > 0 && n < 80)
	{
		r1 = (n / 10) * 10;
		r2 = (1 + (n / 10)) * 10;
		printf("Range [%d, %d]", r1, r2);
	}
	else
	{
		printf("Error, incorrect input");
	}

	return (0);
}	
