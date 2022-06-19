#include <stdio.h>
#include <stdlib.h>
#include "checkendgame.h"
#include "checkLegal.h"
#include "CheckpointB.h"
#include "CheckpointW.h"
#include "GetInput.h"
#include "PrintBoard.h"
#include "tryagain.h"

#define size 8 /*size of array*/


int main() {
	int newgame = 1;/*variable for starting or restarting the game*/
	while (newgame == 1) {
		int player = 2;/*start with black*/
		int startgame = 1;/*variable to keep playing the game till it ends*/
		int whitepoint = 2;/*variable to show the white points*/
		int blackpoint = 2;/*variable to show the black points*/
		int i, j;/*variables for the loops*/
		int x, y;/*variables to show the place of the wanted cell*/
		char board[size][size];/*array for the board*/
		for (i = 0; i < size; i++) {
			for (j = 0; j < size; j++) {
				board[i][j] = '.';/*set all the cells dots at the beginning of the game*/
			}
		}
		board[3][3] = 'w';/*Due to the game structures set the heart of the board as it is supposed*/
		board[4][4] = 'w';
		board[3][4] = 'b';
		board[4][3] = 'b';
		printBoard(board, blackpoint, whitepoint);/*print the board at the beginning of the game*/
		while (startgame == 1) {/*while loop to keep playing till it ends*/
			int resultget = 0;/*variable for the returning integer from receiving the cell number from the players*/
			int LegalMoves = 0;/*variable for the returning integer from checking legal moves function*/
			int endgame = 0;/*variable for the returning integer from check end game function*/
			while ((resultget) == 0) {
				resultget = getinput(player);
			}
			x = (resultget / 10) - 1;/*setting the place of cell according to the array*/
			y = (resultget % 10) - 1;
			LegalMoves = checklegalAndChange(board[size][size], x, y, player);
			if (LegalMoves == 0) {
				printf("\nNot a legal move!try again:\n");/*if it is not a legal move the second while loop will run again*/
			}
			if (LegalMoves != 0) {
				blackpoint = checkpointb(board[size][size]);/*counting black cells*/
				whitepoint = checkpointw(board[size][size]);/*counting white cells*/
				endgame = checkendgame(board[size][size]);
				if (endgame == 1) {
					if (tryagain(blackpoint, whitepoint) == 1) {
						startgame = 0;/*in case of restarting it gets out of the second loop then runs the first loop and initializes startgame again and runs the seconds loop again*/
					}
					if (tryagain(blackpoint, whitepoint) == 0) {
						newgame = 0;/*if the player does not wanna play get out of the first main while loop*/
					}
				}
				printBoard(board[size][size], blackpoint, whitepoint);/*prints the board*/
				player++;/*next player*/
			}
		}
	}