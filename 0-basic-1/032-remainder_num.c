#include <stdio.h>

/**
 * main - inputs num and finds all nums in range 100 where 
 * divison by num equals 3
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num, i;
	
	printf("Input an integer: ");
	fflush(stdout);
	scanf("%d", &num);

	for (i = 0; i <= 100; i++)
	{
		if (i % num == 3)
		{
			printf("%d\n", i);
		}
	}
	return (0);
}
