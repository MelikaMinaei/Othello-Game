#define size 8 /*size of array*/
#include"tryagain.h"
int tryagain(int blackpoint, int whitepoint) {
	int input = 0;
	if (blackpoint>whitepoint) {
		printf("\nBLACK has won!\n");
	}
	if (blackpoint<whitepoint) {
		printf("\nWHITE has won!\n");
	}
	if (blackpoint == whitepoint) {
		printf("\nDRAW!No one has won.\n");
	}
	printf("\nWanna play again?\n(If yes enter 1,If not enter 2\n");
	scanf("%d", &input);
	while ((getchar()) != '\n') {
		return 0;
		/*no jokes when it comes to putting a character instead of an integer!it gets outta the game*/
	}
	if (input != 2 && input != 1) {
		printf("\nSeems like you are not eager to read the instructions.Game over!\n");
		return 0;
	}
	if (input == 2) {
		printf("\nGame over!see you soon!\n");
		return 0;
	}
	if (input == 1) {
		printf("\nLet's restart the game!\n");
		return 1;
	}
}
