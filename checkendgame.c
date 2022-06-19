#define size 8 /*size of array*/
#include "checkendgame.h"
int checkendgame(char board[size][size]) {
	int i, j;
	int counter = 0;
	for (i = 0; i<size; i++) {
		for (j = 0; j<size; j++) {
			if (board[i][j] != '.') {
				counter++;
			}
		}
	}
	if (counter == 64) {/*all cells were used*/
		return 1;
	}
	else {
		return 0;/*There were still empty cells*/
	}
}