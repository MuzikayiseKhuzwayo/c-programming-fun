#include <stdio.h>

/**
 * main - use input p and q to output p number of lines 
 * and q number of characters per line
 *
 * Return: 0;
 */

int main(void)
{
	int p, q, i, j, cnt;

	cnt = 1;

	printf("Input number of lines: ");
	fflush(stdout);
	scanf("%d", &p);
	printf("Number of characters in a line: ");
	fflush(stdout);
	scanf("%d", &q);

	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("%d ", cnt);
			cnt++;
		}
		printf("\n");
	}
	return (0);
}
