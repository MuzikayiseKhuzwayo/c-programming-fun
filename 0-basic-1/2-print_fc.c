#include <stdio.h>

/**
 * main - Prints a block F made up of hashes with height of 6 and width of 5
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 7; i++)
	{
		if (i == 0)
		{
			printf("######\n");
		}
		else if (i == 3)
		{
			printf("#####\n");
		}
		else
		{
			printf("#\n");
		}

	}
	
	for (j = 0; j < 9; j++)
        {
                if ((j == 0) || (j == 8))
                {
                        printf("   ######   \n");
                }
                else if ((j == 1) || (j == 7))
                {
                        printf(" ##      ##\n");
                }
                else
                {
                        printf("#\n");
                }

        }
	return (0);
}
