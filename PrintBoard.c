#define size 8 /*size of array*/
#include "PrintBoard.h"
void printBoard(char board[size][size], int blackpoint, int whitepoint) {
	printf("\n");
	int i, i2, j;
	int k;
	printf("   ");
	for (i = 1; i <= size; i++) {
		printf("%d ", i);/*1 to 8*/
	}
	printf("[b=%d w=%d]", blackpoint, whitepoint);/*points*/
	printf("  ");
	for (i = 0; i <= size; i++) {
		printf("  ");
	}
	printf(" \n");
	for (i = 0; i < size; i++) {
		i2 = (i + 1) * 10;/*10 to 80*/
		printf("%d ", i2);
		for (k = 0; k<size; k++) {
			printf("%c ", board[i][k]);
		}
		printf("\n");
	}
}
