#include <stdio.h>
/**
 * main - input two numbers and output thier order (ascending, descending)
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, m;

	printf("Input the first number of the pair: ");
	fflush(stdout);
	scanf("%d", &n);
	printf("Input the second number of the pair: ");
	fflush(stdout);
	scanf("%d", &m);

	printf("The pair is in ");
	if (n > m)
	{
		printf("descending order!\n");
	}
	else if (m > n)
	{
		printf("ascending order!\n");
	}
	else
	{
		printf("no order at all!\n");
	}
	return (0);
}
