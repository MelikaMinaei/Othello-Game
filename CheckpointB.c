#define size 8 /*size of array*/
#include "CheckpointB.h"
int checkpointb(char board[size][size]) {
	int i, j;/*black cells counter*/
	int bp = 0;
	for (i = 0; i<size; i++) {
		for (j = 0; j<size; j++) {
			if (board[i][j] == 'b') {
				bp++;
			}
		}
	}
	return bp;
}