#include <stdio.h>

/**
 * main - calculate the average of all marks while input is not 0
 *
 * Return: 0 (success)
 */

int main(void)
{
	int sum, num, chk;

	sum = 0, num = 0;
	
	printf("Input Mathematics marks (0 to terminate): ");
	fflush(stdout);
	scanf("%d", &chk);
	while (chk)
	{
		 sum += chk;
		 num++;
		 scanf("%d", &chk);
		 fflush(stdout);
	}
	
	printf("Average marks in Mathematics: %.2f", (float)sum / num);
	return (0);
}


