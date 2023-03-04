#include <stdio.h>

/**
 * main - takes in an integer and decides whether it is positive even,
 * positive odd, negative even, negative odd, or just even(0)
 *
 * ReturnL 0 (success)
 */

int main(void)
{
	int n;

	printf("Input an integer: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n > 0)
	{
		printf("Positive ");
	}
	if (n < 0)
	{
		printf("Negative ");
	}
	if (n % 2 == 0)
	{
		printf("Even\n");
	}
	if (n % 2 == 1 || n % 2 == -1)
	{
		printf("Odd\n");
	}
	return (0);
}

