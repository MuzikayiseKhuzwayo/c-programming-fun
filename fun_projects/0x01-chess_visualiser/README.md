##Chess Visualiser

A program that takes in arguments and outputs a chess board afterall the moves have been played

/*
 * Input: some chess movement args stored as strings
 * Output: the final board positions
 * Prerequisites:
 *      1. stdio.h for printing to stdout
 *      2. string.h for string manipuation
 *      3. stdlib maybe.. we'll see
 * Needs:
 *      1. have an array that stores the board positions at start
 *      2. for every allowed move, move the board pieces to reflect
 *      3. print out the final array positions as a chess board
 *      4. print out the moves it took to get there, formatted for standards
 * To Do:
 *      1. declare main with args and other helper functions (for printing array)
 *      2. declare variables in main
 *              2.1 board array that stores all piece positions
 *              2.2 temp variables for loops
 *      3. if argc < 2
 *              3.1 print out the board as is (use a helper function)
 *      4. if argc > 1
 *              4.1 for all moves in argv
 *                      4.1.1 if move is valid
 *                              4.1.2 move pieces and update the board array (helper)
 *      5. print out the board as it now is
 *      6. for every move in argv
 *              6.1 print out the moves it took to get that position
 *              - eg 1. e4, d5 2. exd5, Qxd5...
 *      7. return 0 in main
 */
/*
 * https://en.wikipedia.org/wiki/Algebraic_notation_(chess)
 * okay so according to the notation, there are basically five moves
 *      1. 2 chars (a pawn move, eg 'e4')
 *      2./3. 3 chars (a piece move, eg 'Nc6' or a Promotion eg 'e8Q')
 *      4. 4 chars (a capture, eg 'Qxe3')
 *      5. 5 chars (a disambiguous move, eg 'Nc3b1')
 * a castle ('0-0' or '0-0-0') or mate (#)
 * Update: we don't check for conditionals(+=#) anymore. Just moves.
*/

