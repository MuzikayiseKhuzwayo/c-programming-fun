#include <stdio.h>

/**
 * main - accept three integers and print the highest value out of all of them
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b, c, max;

	printf("Input the first integer: ");
	fflush(stdout);
	scanf("%d", &a);
	printf("Input the second integer: ");
	fflush(stdout);
	scanf("%d", &b);
	printf("Input the third integer: ");
	fflush(stdout);
	scanf("%d", &c);

	if ((a >= b) && ((b >= c) || (a >= c)))
	{
		max = a;
	}
	else if ((b >= a) && ((a >= c) || (b >= c)))
        {
                max = b;
        }
	else if ((c >= b) && ((b >= a) || (c >= a)))
        {
                max = c;
        }

	printf("\nMaximum value of three integers: %d\n", max);

	return (0);
}
