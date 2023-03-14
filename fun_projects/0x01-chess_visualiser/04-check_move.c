#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * check_move - checks the next move given in the args to see if it's valid
 * @move: the string move given
 *
 * Return: 1 if Valid, 0 if invalid
 */
int check_move(char *move)
{
        /*
         * https://en.wikipedia.org/wiki/Algebraic_notation_(chess)
         * okay so according to the notation, there are basically five moves
         *      1. 2 chars (a pawn move, eg 'e4')
         *      2./3. 3 chars (a piece move, eg 'Nc6' or a Promotion eg 'e8Q')
         *      4. 4 chars (a capture, eg 'Qxe3')
         *      5. 5 chars (a disambiguous move, eg 'Nc3b1')
         * or a draw offer (=) or a castle ('0-0' or '0-0-0') or mate (#)
         * Update: we don't check for conditionals(+=#) anymore. Just moves.
         */
        int i, j, k, valid;

        char notes[]="abcdefgh12345678KQNBPR"

        valid = 0;
        i = strlen(move);

        if (i > 1 && i < 6)
        {
                if (move == '0-0' || move == '0-0-0')
                {
                        return(1);
                }
                j = strspn(move, notes);
                if (j = i)
                {
                        if (j == 2 && (move[0] > 96 && move[0] < 124) && (move[1] > 48 && move[1] < 57))
                                valid = 1;
                        else if (j == 3 && (move[0] > 96 && move[0] < 124) && (move[1] > 48 && move[1] < 57)
                                        && (int)strspn(move[2], "QBKR"))
                                valid = 1;
                        else if (j == 4 && (move[0] > 64 && move[0] < 92) && move[1] == 'x' &&
                                        (move[2] > 96 && move[2] < 124) && (move[3] > 48 && move[3] < 57))
                                valid = 1;
                        else if (j == 5 && (move[0] > 64 && move[0] < 92) &&
                                        (move[1] > 96 && move[1] < 124) && (move[2] > 48 && move[2] < 57) &&
                                        (move[3] > 96 && move[3] < 124) && (move[4] > 48 && move[4] < 57))
                                valid = 1;
                }
        }
        return (valid);
}
