#include <stdio.h>

/**
 * main - display variables of different types using printf
 * 
 * Return: 0 (Success)
 */

int main(void)
{
	/*
	 * use printf formating to display variables properly
	 */
	int a, b;
	long ax;
	short s;
	float x;
	double dx;
	char c;
	unsigned long ux;

	a = 125;

	b = 12345;

	s = 4043;

	ax = 1234567890;

	x = 2.13459;

	dx = 1.1415927;

	c = 'W';

	ux = 2541567890;

	printf("%d\n", a + c);
	printf("%f\n", x + c);
	printf("%f\n", dx + x);
	printf("%ld\n", ((int)dx) + ax);
	printf("%f\n", a + x);
	printf("%i\n", s + b);
	printf("%ld\n", ax + b);
	printf("%hu\n", s + c);
	printf("%ld\n", ax + c);
	printf("%lu\n", ax + ux);

	return (0);
}
