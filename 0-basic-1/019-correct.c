#include <stdio.h>

/**
 * main - takes in 4 integers(p, q, r, s) and evaluates if their conditions
 * are true or not. q, r, s must be > 0, p must be even
 * if q > r and s > p, and r + s > p + q then print Correct
 *
 * Return: 0 (success)
 */

int main(void)
{
	int p, q, r, s, chk;

	printf("Input the first integer: ");
	fflush(stdout);
	scanf("%d", &p);
	printf("Input the second integer: ");
        fflush(stdout);
        scanf("%d", &q);
	printf("Input the third integer: ");
        fflush(stdout);
        scanf("%d", &r);
	printf("Input the fourth integer: ");
        fflush(stdout);
        scanf("%d", &s);

	chk = 1;

	if (q > 0 && r > 0 && s > 0)
	{
		if (p % 2)
		{
			if (q > r && s > p && (r + s > p + q))
			{
				printf("Correct values\n");
				chk = 0;
			}
		}
	}
	if (chk)
	{
		printf("Wrong values\n");
	}

	return (0);
}

