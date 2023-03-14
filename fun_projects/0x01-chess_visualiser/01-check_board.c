#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * check_board - check if move is valid based on current position
 * @b: board array
 * @move:move that is being checked
 *
 * Return: 1 if valid; 0 if invalid
 */
int check_board(char (*b)[8], char *move)
{
        /*
         * 1. check the last 3 chars of move
	 * 	1.1 check if 3rd last is an x (for removal of piece that was there)
	 * 	1.2 check if 2nd last and last chars correspond to board positions
	 * 2. Move is valid iff
	 * 	2.1 move with no occupation
	 * 	2.2 take with occupation
	 * 3. else move is invalid
         */

	int i, j, k, len;
	char *arr[8][8] = {
		{"a8", "b8", "c8", "d8", "e8", "f8", "g8", "h8"},
		{"a7", "b7", "c7", "d7", "e7", "f7", "g7", "h7"},
		{"a6", "b6", "c6", "d6", "e6", "f6", "g6", "h6"},
		{"a5", "b5", "c5", "d5", "e5", "f5", "g5", "h5"},
		{"a4", "b4", "c4", "d4", "e4", "f4", "g4", "h4"},
		{"a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3"},
		{"a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2"},
		{"a1", "b1", "c1", "d1", "e1", "f1", "g1", "h1"}
	};

	char *newpos;
	
	len = (int)strlen(move);
	
	strcpy(newpos, &move[len - 2]);
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((int)strcmp(newpos, arr[i][j]) == 0)
			{
				/* 
				 * check if position occupied on board
				 */
				if (b[i][j] == ' ')
					return (1);
				else
				{
					if (move[len - 3] == 'x' && len > 3)
						return (1);
				}
			}
		}
	}
	return (0);
}
