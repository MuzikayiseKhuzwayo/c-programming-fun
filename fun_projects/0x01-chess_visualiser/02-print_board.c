#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_board - prints the chess board
 * @b: board 2d array
 *
 * Return: Nothing
 */
void print_board(char (*b)[8])
{
        int i, j;

        for (i = -1; i < 8; i++)
        {
                if (i == -1)
                {
                        for (j = 0; j < 8; j++)
                        {
                                printf("___");
                        }
                        printf("\n");
                }
                else
                {
                        for (j = 0; j < 8; j++)
                        {
                                printf("|%c|", b[i][j]);
                        }
                        printf("\n");
                        for (j = 0; j < 8; j++)
                        {
                                printf("___");
                        }
                        putchar('\n');
                }
        }
}
