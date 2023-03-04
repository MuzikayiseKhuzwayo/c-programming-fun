#include <stdio.h>

/**
 * main - takes in five ints and determines the highest int
 * and it's position of entry
 *
 * Return: 0 (success)
 */

int main(void)
{
	int nums[5], i, h, p;
	
	h = 0, p = 0;

	printf("Input 5 integers:\n");
	fflush(stdout);
	scanf("%d", &nums[0]);
	scanf("%d", &nums[1]);
	scanf("%d", &nums[2]);
	scanf("%d", &nums[3]);
	scanf("%d", &nums[4]);

	for (i = 0; i < 5; i++)
	{
		if (nums[i] < 0 && h == 0)
		{
			h = nums[i];
			p = i + 1;
		}
		else if (h <= nums[i])
		{
			h = nums[i];
			p = i + 1;
		}
	}

	printf("Highest value: %d\n", h);
	printf("Position: %d\n", p);
	return (0);
}
