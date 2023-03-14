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
void update_board(char (*b)[8], char *move)
{
        /*
         * use check_board
         * if checkboard says that move is possible, then update
         */
        int i, j, k;

        char a2[] = "12345678";

        char a1[] = "abcdefgh";

        if (check_board(b, move))
        {
                i = strlen(move);
                if (i == 2)
                {
                        j = strcspn(a1, move[0]);
                        k = strcspn(a2, move[1]);
                        /*
                         * find out the position of pawn using for loop
                         * remove it from that pos
                         * update position using j and k
                         */
                        if (p == 0)
                        {
                                b[j][k] = 'p';
                        }
        }

}
