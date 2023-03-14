#ifndef MAIN_H
#define MAIN_H

int check_board(char (*b)[8], char *move);
void print_board(char (*b)[8]);
void update_board(char (*b)[8], char *move);
int check_move(char *move);

#endif
