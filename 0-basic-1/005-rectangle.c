#include <stdio.h>

/**
 * main - Prints out the perimeter and area of a rectangle with given 
 * dimensions height and width
 *
 * Return: 0 (success)
 */

int main(void)
{
	int height, width;

	height = 7;

	width = 5;

	printf("Perimeter of the rectangle = %d inches\n", (2 * (height + width)));
	printf("Area of the rectangle = %d inches\n", (height * width));

	return (0);
}
