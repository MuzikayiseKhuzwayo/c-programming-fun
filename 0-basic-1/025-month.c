#include <stdio.h>

/**
 * main - takes in an integer between 1 and 12 and prints out the month
 *
 * Return: 0 (success)
 */

int main(void)
{
	int m;

	printf("Input a number between 1 and 12 to get the month name: ");
	fflush(stdout);
	scanf("%d", &m);

	if (m > 0 && m < 13)
		switch (m)
		{
			case 1:
				printf("January\n");
				break;
			case 2:
				printf("February\n");
				break;
			case 3:
                        	printf("March\n");
				break;
                	case 4:
                        	printf("April\n");
				break;
			case 5:
                        	printf("May\n");
				break;
                	case 6:
                        	printf("June\n");
				break;
                	case 7:
                        	printf("July\n");
				break;
                	case 8:
                        	printf("August\n");
				break;
			case 9:
                        	printf("September\n");
				break;
                	case 10:
                        	printf("October\n");
				break;
                	case 11:
                        	printf("November\n");
				break;
                	case 12:
                        	printf("December\n");
				break;
		}
	else
	{
		printf("Incorrect input\n");
	}
	return (0);
}
		
