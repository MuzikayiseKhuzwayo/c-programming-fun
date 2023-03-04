#include <stdio.h>

/**
 * main - takes in five integers and gives the sum of all odd values
 *
 * Return: 0 (success)
 */

int main(void)
{
	int nums[5], odd, sum, i;

	odd = 0, sum = 0;

	printf("Input the first number: ");
	fflush(stdout);
	scanf("%d", &nums[0]);
	printf("Input the second number: ");
	fflush(stdout);
	scanf("%d", &nums[1]);
	printf("Input the third number: ");
	fflush(stdout);
	scanf("%d", &nums[2]);
	printf("Input the fourth number: ");
	fflush(stdout);
	scanf("%d", &nums[3]);
	printf("Input the fifth number: ");
	fflush(stdout);
	scanf("%d", &nums[4]);

	for (i = 0; i < 5; i++)
	{
		if (nums[i] % 2 == 1)
		{
			odd++;
			sum += nums[i];
		}
	}
	printf("Number of odd numbers: %d\n", odd);
	printf("Sum of all odd nuber values: %d", sum);
	return (0);
}
