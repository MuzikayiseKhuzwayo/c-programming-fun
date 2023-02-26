#include <stdio.h>

/**
 * main - accept two floats and their weight and print the average
 * 
 * Return: 0 (Success)
 */

int main(void)
{
	/*
	 * use scanf and printf
	 */

	float a, b, aweight, bweight, ave;

	printf("Weight - Item1: ");
	fflush(stdout);
	scanf("%f", &aweight);
	printf("No. of item1: ");
	fflush(stdout);
	scanf("%f", &a);
	printf("Weight - Item2: ");
        fflush(stdout);
        scanf("%f", &bweight);
        printf("No. of item2: ");
        fflush(stdout);
        scanf("%f", &b);

	ave = ((a * aweight) + (b * bweight)) / (a + b);

	printf("Average Value = %f\n", ave);

	return (0);
}
