#include <stdio.h>

/**
 * main - computes the perimeter and area of a circle
 * outputs their values to standard out
 * 
 * Return: 0 (Success)
 */

int main(void)
{
	/*
	 * Use system defined Constant for Pi
	 */
	float Pi;
	int radius;

	radius = 6;

	Pi = 22.0/7.0;

	printf("Perimeter of the Circle = %f\n", 2 * Pi * radius);
	printf("Area of the Circle = %f\n", radius * Pi * radius);


	return (0);
}
