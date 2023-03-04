#include <stdio.h>

/**
 * main - takes in five integers and counts number of 
 * positive and negative numbers
 * update... independently expanded the definiton to deal with 0s since 0
 * is neither positive nor negative
 *
 * Return: 0 (success)
 */

int main(void)
{
	int nums[5], neg, pos, i, zero;

	neg = 0, pos = 0, zero = 0;

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
		if (nums[i] < 0)
		{
			neg++;
		}
		else if (nums[i] > 0)
		{
			pos++;
		}
		else
		{
			zero++;
		}
	}
	
	printf("Number of positive numbers: %d\n", pos);
	printf("Number of negative numbers: %d\n", neg);
	printf("Number of zero valued numbers: %d\n", zero);
	return (0);
}
