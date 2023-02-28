#include <stdio.h>

/**
 * main - takes in two integers and checks if they are divisible by one another
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n1, n2, chk1, chk2;

	printf("Enter the first number: ");
	fflush(stdout);
	scanf("%d", &n1);
	printf("Enter the second number: ");
        fflush(stdout);
        scanf("%d", &n2);

	chk1 = n1 % n2;
	chk2 = n2 % n1;

	if (!chk1 || !chk2)
	{
		printf("Multiplied!\n");
	}
	else
	{
		printf("Not Multiplied!\n");
	}
	return (0);
}
