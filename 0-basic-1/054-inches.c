#include <stdio.h>

/**
 * main - takes in a value in centimeters and converts to inches
 *
 * Return: 0 (success)
 */

/*
 * Input: integer value representing cm
 * Output: a string with an embedded value of inches
 * To Do:
 * 	1. declare temp variables (cm, in) as floats
 * 	2. print Input string
 * 	3. Take in input and store as float cm
 * 	4. calculate in from cm
 * 	5. print output string
 * 	6. return 0
 */

int main(void)
{
	float cm, in;

	printf("Input the distance in cm: ");
	fflush(stdout);
	scanf("%f", &cm);

	in = cm / 2.54;

	printf("Distance of %.2f cms is = %.2f inches", cm, in);

	return (0);
}
