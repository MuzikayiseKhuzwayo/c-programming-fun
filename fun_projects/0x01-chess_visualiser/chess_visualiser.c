#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
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
        	{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
	};
	
	int i, j, k, chk;

	chk = 0, k = 1;
	printf("Test\n");
	if (argc == 1)
	{
		print_board(board);
		printf("\nMoves: None\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			/*
			 * check if argv[i] is valid, then update board
			 * if not valid, break out and print error message
			 * Update: added new value for checking white(0) or black(1)
			 */
			printf("Inside main\n");
			printf("CHecking move validity and syntax for move: %s\n", argv[i]);
			if (check_move(argv[i]))
			{
				printf("Done checking checking move\n");
				printf("Checking the board if move %s is possible\n", argv[i]);
				fflush(stdout);
				if (check_board(board, argv[i], (i % 2)))
				{
					printf("Done checking board\n");
					printf("Updating board for move %s\n", argv[i]);
					fflush(stdout);
					update_board(board, argv[i], (i % 2));
					printf("Done updating board\n");
				}
				else
				{
					chk++;
					break;
				}
			}
			else
			{
				chk++;
				break;
			}
		}
	}
	if (chk)
	{
		printf("The Moves you provided were Invalid/Incorrect/Not-Allowed\n");
		return (1);
	}
	print_board(board);
	printf("\nMoves:");
	for (i = 1; i < argc; i++)
	{
		if (i % 2 == 1)
			printf("%d. %s", k++, argv[i]);
		else if (i % 2 == 0)
			printf(" %s,", argv[i]);
	}
	printf("\n");
	return (0);
}
