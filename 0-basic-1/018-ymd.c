#include <stdio.h>

/**
 * main - convert an integer number of days to years, months and days
 * assume years have 365 and months have 30 (wait what??)
 *
 * Return 0 (success)
 */

int main(void)
{
	int d, y, m;

	printf("Input no. of days: ");
	fflush(stdout);
	scanf("%d", &d);

	if (d / 365)
	{
		y = d / 365;
		d %= 365;
	}
	if (d / 30)
        {
                m = d / 30;
                d %= 30;
        }

	printf("%d Year(s)\n%d Month(s)\n%d Days\n", y, m, d);

	return (0);
}
