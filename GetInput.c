#define size 8 /*size of array*/
#include "GetInput.h"
int getinput(int player) {
	int i;
	int x, y;
	if (player % 2 == 0) {
		printf("BLACK player's turn:\n");
	}
	if (player % 2 != 0) {
		printf("WHITE player's turn:\n");
	}
	scanf("%d", &i);

	x = (i / 10) - 1;/*sets it according to the array*/
	y = (i % 10) - 1;
	if (x>7 || x<0 || y<0 || y>7) {/*The chosen cell should be in range*/
		printf("\nNot in range try again:\n");
		return 0;
	}
	while ((getchar()) != '\n') {/*Does not become a loop*/
		return 0;
		/*no jokes when it comes to putting a character instead of an integer!it gets outta the game*/
	}

	return i;
}
