#define size 8 /*size of array*/
#include "CheckpointW.h"
int checkpointw(char board[size][size]) {
	int i, j;
	int wp = 0;/*white cells counter*/
	for (i = 0; i<size; i++) {
		for (j = 0; j<size; j++) {
			if (board[i][j] == 'b') {
				wp++;
			}
		}
	}
	return wp;
}