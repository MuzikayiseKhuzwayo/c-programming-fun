#include <stdio.h>

/**
 * main - convert a number of days int years, months and weeks
 * 
 * Return: 0 (Success)
 */

int main(void)
{
	/*
	 * Use the Modulo op and int division op
	 */

	int days;

	days = 1329;
	
	printf("Number of days: %d\n", days);
	printf("Years: %d\n", days / 365);
	printf("Weeks: %d\n", (days % 365) / 7);
	printf("Days: %d\n", days - ((days / 365) * 365) - (((days % 365) / 7) * 7));

	return (0);
}
