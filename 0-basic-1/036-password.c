#include <stdio.h>

/**
 * main - reads in input until user inputs correct password
 * correct password equals 1234
 *
 * Return: 0 (success)
 */

int main(void)
{
	int ntf, pass;

	ntf = 1;

	while (ntf)
	{
		printf("Input the password: ");
		fflush(stdout);
		scanf("%d", &pass);

		if (pass == 1234)
		{
			ntf = 0;
		}
		else
		{
			printf("Incorrect Password\n");
		}
	}
	printf("Correct Password\n");
	return (0);
}
