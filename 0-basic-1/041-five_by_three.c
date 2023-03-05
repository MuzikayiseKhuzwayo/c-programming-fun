#include <stdio.h>

/**
 * main - print three numbers per line for n lines where n is the input
 *
 * Return: 0;
 */

int main(void)
{
	int n, i, j, cnt;

	cnt = 1;

	printf("Input number of lines: ");
	fflush(stdout);
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", cnt);
			cnt++;
		}
		printf("\n");
	}
	return (0);
}
