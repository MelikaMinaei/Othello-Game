#define size 8 /*size of array*/
#include "checkLegal.h"
int checklegalAndChange(char board[size][size], int x, int y, int player) {/*searching for the closest same color in each 8 possible directions.If it was founded but it was the next cell pass,if not change the colors between into the player's color*/
	int counterOfLegalMoves = 0;
	char same;
	if (player % 2 == 0) {
		same = 'b';
	}
	else {
		same = 'w';
	}
	int i = x;
	int j = y;
	for (i = x + 1; i<size; i++) { /*down*/
		if (board[i][j] == same) {
			if (board[i - 1][j] == same) {
				break;
			}
			else {
				counterOfLegalMoves++;
				board[x][y] = same;
				for (i; i>x; i--) {
					board[i][j] == same;
				}
			}
		}
	}
	for (j = y + 1; j<size; j++) {/*down*/
		if (board[i][j] == same) {
			if (board[i][j - 1] == same) {
				break;
			}
			else {
				counterOfLegalMoves++;
				board[x][y] = same;
				for (j; j>y; j--) {
					board[i][j] == same;
				}
			}
		}
	}
	for (i = x - 1; i >= 0; i--) {/*left*/
		if (board[i][j] == same) {
			if (board[i + 1][j] == same) {
				break;
			}
			else {
				counterOfLegalMoves++;
				board[x][y] = same;
				for (i; i<x; i++) {
					board[i][j] == same;
				}
			}
		}
	}
	for (j = y - 1; j >= 0; j--) {/*up*/
		if (board[i][j] == same) {
			if (board[i][j + 1] == same) {
				break;
			}
			else {
				counterOfLegalMoves++;
				board[x][y] = same;
				for (j; j<y; j++) {
					board[i][j] == same;
				}
			}
		}
	}
	for (i = x + 1; i<size; i++) {/*down right*/
		for (j = y + 1; j<size; j++) {
			if (board[i][j] == same) {
				if (board[i - 1][j - 1] == same) {
					break;
				}
				else {
					counterOfLegalMoves++;
					board[x][y] = same;
					for (i; i>x; i--) {
						for (j; j>y; j--) {
							board[i][j] == same;
						}
					}
				}
			}
		}
	}


	for (i = x + 1; i<size; i++) {/*up right*/
		for (j = y - 1; j >= 0; j--) {
			if (board[i][j] == same) {
				if (board[i - 1][j + 1] == same) {
					break;
				}
				else {
					counterOfLegalMoves++;
					board[x][y] = same;
					for (i; i>x; i--) {
						for (j; j<y; j++) {
							board[i][j] == same;
						}
					}
				}
			}
		}
	}


	for (i = x - 1; i >= 0; i--) {/*down left*/
		for (j = y + 1; j<size; j++) {
			if (board[i][j] == same) {
				if (board[i + 1][j - 1] == same) {
					break;
				}
				else {
					counterOfLegalMoves++;
					board[x][y] = same;
					for (i; i<x; i++) {
						for (j; j>y; j--) {
							board[i][j] == same;
						}
					}
				}
			}
		}
	}
	for (i = x - 1; i >= 0; i--) {/*up left*/
		for (j = y - 1; j >= 0; j--) {
			if (board[i][j] == same) {
				if (board[i + 1][j + 1] == same) {
					break;
				}
				else {
					counterOfLegalMoves++;
					board[x][y] = same;
					for (i; i<x; i++) {
						for (j; j<y; j++) {
							board[i][j] == same;
						}
					}
				}
			}
		}
	}
	return counterOfLegalMoves;
}