#include <stdio.h>

/**
 * main - takes in input of five numbers and sums all the odd numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a, b, c, d, e, sum;

	printf("Input the first number: ");
	fflush(stdout);
	scanf("%d", &a);
	printf("Input the second number: ");
        fflush(stdout);
        scanf("%d", &b);
	printf("Input the third number: ");
        fflush(stdout);
        scanf("%d", &c);
	printf("Input the fourth number: ");
        fflush(stdout);
        scanf("%d", &d);
	printf("Input the fifth number: ");
        fflush(stdout);
        scanf("%d", &e);

	sum = 0;

	if (a % 2)
	{
		sum += a;
	}
	if (b % 2)
        {
                sum += b;
        }
	if (c % 2)
        {
                sum += c;
        }
	if (d % 2)
        {
                sum += d;
        }
	if (e % 2)
        {
                sum += e;
        }

	printf("Sum of all odd values: %d", sum);

	return (0);
}
