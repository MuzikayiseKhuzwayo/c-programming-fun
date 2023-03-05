#include <stdio.h>

/**
 * main - gets input of two integers x and y and evaluates their position 
 * in a cartesian coordinate system relative to quadrant
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x, y;

	printf("Input the Coordinate(x, y):\n");
	printf("x: ");
	fflush(stdout);
	scanf("%d", &x);
	printf("y: ");
	fflush(stdout);
	scanf("%d", &y);

	if (x >= 0 && y >= 0)
	{
		printf("Quadrant-I(+,+)\n");
	}
	if (x < 0 && y >= 0)
	{
		printf("Quadrant-II(-,+)\n");
	}
	if (x < 0 && y < 0)
	{
		printf("Quadrant-III(-,-)\n");
	}
	if (x >= 0 && y < 0)
	{
		printf("Quadrant-IV(+,-)\n");
	}
	return (0);
}
