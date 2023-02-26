#include <stdio.h>

/**
 * main - print out some chars in reverse order
 *
 * Return: 0 (success)
 */

int main(void)
{
	char a, b, c;

	a = 'X';

	b = 'M';

	c = 'L';

	printf("The reverse of %c%c%c is %c%c%c\n", a, b, c, c, b, a);
}
