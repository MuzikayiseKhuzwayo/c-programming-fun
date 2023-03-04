#include <stdio.h>

/**
 * main - takes in five integers and gives the average of all positive nums
 *
 * Return: 0 (success)
 */

int main(void)
{
	int nums[5], pos, sum, i;

	pos = 0, sum = 0;

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
		if (nums[i] > 0)
		{
			pos++;
			sum += nums[i];
		}
	}
	printf("Number of positive numbers: %d\n", pos);
	printf("Average value of the said positive numbers: %.2f", (float)(sum) / pos);
	return (0);
}
