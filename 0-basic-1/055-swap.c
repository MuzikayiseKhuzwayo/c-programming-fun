#include <stdio.h>

/**
 * main - swaps two numbers without using a third variable
 *
 * Return: 0 (success)
 */

/*
 * Input: two integers
 * Output: two integers with order swapped
 * To Do:
 * 	1. declare integer array
 * 	2. print out the input call to action
 * 	3. take in the two integers with a space in between
 * 		3.1 use an array
 * 		3.2 add integers in from the end to the beginning
 * 	4. print out the numbers in their new positions
 */

int main(void)
{
	int i, arr[2];
	
	printf("Before swapping the value of x & y: ");
	fflush(stdout);
	scanf("%d %d", &arr[1], &arr[0]);

	printf("After swapping the value of x & y: %d %d", arr[0], arr[1]);
	return (0);
}
