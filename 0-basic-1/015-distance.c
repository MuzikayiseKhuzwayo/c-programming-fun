#include <stdio.h>
#include <math.h>

/**
 * main - Calculates the distance between two points 
 * of x and y coordinates
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x1, x2, y1, y2;

	double ans;

	printf("Input x1: ");
	fflush(stdout);
	scanf("%d", &x1);
	printf("Input y1: ");
        fflush(stdout);
        scanf("%d", &y1);
	printf("Input x2: ");
        fflush(stdout);
        scanf("%d", &x2);
	printf("Input y2: ");
        fflush(stdout);
        scanf("%d", &y2);

	ans = sqrt((double)(pow((x2 - x1), 2) + pow((y2 - y1), 2)));

	printf("Distance between the said points: %.4f\n", ans);

	return (0);
}
