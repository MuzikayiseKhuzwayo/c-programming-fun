#include <stdio.h>

/**
 * main - divide input number x by input y
 * if division impossible, print "Division not possible"
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x, y;

	printf("Input two numbers:\n");
	printf("x: ");
	fflush(stdout);
	scanf("%d", &x);
	printf("y: ");
	fflush(stdout);
	scanf("%d", &y);

	if (y == 0)
	{
		printf("Division is not possible\n");
	}
	else
	{
		printf("%.1f", (float)x / y);
	}
	return (0);
}
