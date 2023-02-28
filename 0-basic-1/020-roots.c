#include <stdio.h>
#include <math.h>

/**
 * main - compute the roots of a, b, c of quadratic equation 
 * (bhaskara's formula)
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a, b, c; 
	double r1, r2;

	printf("Input the first number(a): ");
	fflush(stdout);
	scanf("%d", &a);
	printf("Input the second number(b): ");
        fflush(stdout);
        scanf("%d", &b);
	printf("Input the third number(c): ");
        fflush(stdout);
        scanf("%d", &c);

	r1 = (-b + sqrt(pow(b, 2) - (4 * a  * c))) / (2 * a);
	r2 = (-b - sqrt(pow(b, 2) - (4 * a  * c))) / (2 * a);

	printf("Root1 = %.5f\n", r1);
	printf("Root2 = %.5f\n", r2);

	return (0);
}
