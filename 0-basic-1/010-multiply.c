#include <stdio.h>

/**
 * main - accept two ints and print the product
 * 
 * Return: 0 (Success)
 */

int main(void)
{
	/*
	 * use scanf and printf
	 */

	int a, b;

	printf("Input the first integer: ");
	fflush(stdout);
	scanf("%d", &a);
	printf("Input the second integer: ");
	fflush(stdout);
	scanf("%d", &b);

	printf("Product of the above two integers = %d\n", a * b);

	return (0);
}
