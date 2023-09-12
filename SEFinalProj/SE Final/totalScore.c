#include <stdio.h>

void totalScore(int array[], int* score, int* gamecheck);

void main () {
int gamecheck = 1;
int array[4];
int score = 0;

array[0] = 2;
array[1] = 1;
array[2] = 4;
array[3] = 3;
totalScore(array, &score, &gamecheck);
printf("%d\n" , score);
}

void totalScore(int array[], int* score, int* gamecheck) {
	int checkInt;
	char userInput;
	
	for (int i = 0; i < 4; i++) {
		printf("Enter Letter: ");
		scanf(" %c", &userInput);
			if (userInput == 'w') {
				checkInt = 1;
			} else if (userInput == 'a') {
				checkInt = 2;
			} else if (userInput == 's') {
				checkInt = 4;
			} else if (userInput == 'd') {
				checkInt = 3;
			} else {
				printf("Invalid input!");
				i--;
				continue;
			}
			if (checkInt == array[i]) {
				++*score;
			} else {
				*gamecheck = 2;
				break;
			}
	}
}