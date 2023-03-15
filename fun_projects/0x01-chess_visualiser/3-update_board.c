#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * update_board - takes in the board and the move and updates based on those
 * @arr: board 2d array
 * @move: chessmove string
 *
 * Return: Nothing
 */
void update_board(char (*b)[8], char *move, int col)
{
        /*
         * check_board has already been checked, so just move piece
	 * col is for the colour of the piece, very useful
         */
        int i, j, k, l, len, broke;
	char newpos[3], oldpos[3], *file, *retstr;
	char *piece[2] = {"pnbrqk", "nPBRQK"};
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

        len = (int)strlen(move), l = 0, broke = 0;

	file = "abcdefgh";

	retstr = strcpy(newpos, &move[len - 2]);
	newpos[2] = '\0';

	if (len == 2)
	{
		k = (int)strcspn(file, move);
		l = col;
		for (i = 0; i < 8; i++)
		{
			printf("piece is %c\n", piece[col][l]);
			if (b[i][k] == piece[col][l])
			{
				b[i][k] = ' ';
				break;
			}
		}
	}
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("comparing %s and %s\n", newpos, arr[i][j]);
			if ((int)strcmp(newpos, arr[i][j]) == 0)
			{
				b[i][j] = piece[col][l];
				printf("Updated position %s with piece %c\n", newpos, piece[col][l]);
				broke = 1;
				break;
			}
		}
		if (broke)
			break;
	}
}
