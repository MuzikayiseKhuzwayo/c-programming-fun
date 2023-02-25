#include <stdio.h>

/**
 * main - Prints out the standard C type of the system.
 * uses the Standard Predefined Macros to do this
 *
 * Return: 0 (success)
 */

int main(void)
{
	/*__STDC_VERSION__ is a long int that has the form yyyymmL where 
	 * yyyy is the year and mm is the month of release
	 */
	if (__STDC_VERSION__ >= 201710L)
	{
		printf("We are using C18!\n");
	}
	else if (__STDC_VERSION__ >= 201112L)
        {
                printf("We are using C11!\n");
        }
	else if (__STDC_VERSION__ >= 199901L)
        {
                printf("We are using C99!\n");
        }
	else
        {
                printf("We are using C89!\n");
        }
	return (0);
}
