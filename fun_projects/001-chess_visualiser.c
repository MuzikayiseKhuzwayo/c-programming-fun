#include <stdio.h>
#include <string.h>
#include <stdio.h>

/*
 * Input: some chess movement args stored as strings
 * Output: the final board positions
 * Prerequisites:
 *	1. stdio.h for printing to stdout
 *	2. string.h for string manipuation
 *	3. stdlib maybe.. we'll see
 * Needs:
 * 	1. have an array that stores the board positions at start
 * 	2. for every allowed move, move the board pieces to reflect
 * 	3. print out the final array positions as a chess board
 * 	4. print out the moves it took to get there, formatted for standards
 * To Do:
 * 	1. declare main with args and other helper functions (for printing array)
 * 	2. declare variables in main
 * 		2.1 board array that stores all piece positions
 * 		2.2 temp variables for loops
 * 	3. if argc < 2
 * 		3.1 print out the board as is (use a helper function)
 * 	4. if argc > 1
 * 		4.1 for all moves in argv
 * 			4.1.1 if move is valid
 * 				4.1.2 move pieces and update the board array (helper)
 *	5. print out the board as it now is
 *	6. for every move in argv
 *		6.1 print out the moves it took to get that position
 *		- eg 1. e4, d5 2. exd5, Qxd5...
 *	7. return 0 in main
 */

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
	 *	1. 2 chars (a pawn move, eg 'e4')
	 *	2./3. 3 chars (a piece move, eg 'Nc6' or a Promotion eg 'e8Q')
	 *	4. 4 chars (a capture, eg 'Qxe3')
	 *	5. 5 chars (a disambiguous move, eg 'Nc3b1')
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

/**
 * check_board - check if move is valid based on current position
 * @move:move that is being checked
 * Return: 1 if valid; 0 if invalid
 */
int check_board(char (*b)[8], char *move)
{
	/*
	 * do something cool
	 */
}

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

/**
 * main - takes in args that describe chess moves and
 *	- calculates and outputs the board's final positions
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	char board[8][8] = {
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        	{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        	{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
	};
	
	int i, j, chk;

	chk = 0;

	if (argc == 1)
	{
		print_board(board);
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			/*
			 * check if argv[i] is valid, then update board
			 * if not valid, break out and print error message
			 */
			if (check_move(argv[i]))
			{
				update_board(board, argv[i]);
			}
			else if (check_move(argv[i]) != 1)
			{
				chk++;
				break;
			}
		}
	}
	if (chk)
	{
		printf("The Moves you povided were Invalid/Incorrect/Not-Allowed\n");
		return (1);
	}
	print_board(board);
	return (0);
}
