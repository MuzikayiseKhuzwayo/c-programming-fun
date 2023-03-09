#include <stdio.h>

/**
 * main - accets principle, interest rate and time
 * 	calculates the simple interest
 * 
 * Return: 0 (success)
 */

/*
 * Input: three numbers
 * 	1. ints: the principle amount and the interest rate and time in years
 * Output: one line that shows the Simple interest
 * To Do:
 * 	1. declare temp variables and counters
 * 	2. print Input message and take in values
 * 	3. calculate simple interest and store in a temp variable
 * 	4. print output taking si as argument
 * Optimisations:
 * 	1. It might be possible to calculate simple interest on the fly
 * Testing:
 * 	1. p > 0, p = 0, p < 0
 * 	2. r < 0, 0 < r < 1, r > 1
 * 	3. year > 0
 */

int main (void)
{
	int t, p, r;
	float si;

	printf("Input Principle, Rate of interest, time to find Simple Interest:\n");
	printf("principle = ");
	fflush(stdout);
	scanf("%d", &p);
	printf("rate of interest (in %) = ");
	fflush(stdout);
	scanf("%d", &r);
	printf("time (years) = ");
	fflush(stdout);
	scanf("%d", &t);

	si = (float)(p * r * t) / 100;

	printf("Simple Interest = %.2f", si);

	return (0);
}
