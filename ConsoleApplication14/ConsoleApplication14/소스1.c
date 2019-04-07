#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 5
void bingo(void);
int main(){
	
	bingo();

	return 0;
}

void bingo(void){
	int bingo[SIZE][SIZE];
	int i, j, x, y, tmp, num;

	for (i = 0; i < SIZE*SIZE; i++){
		bingo[i / SIZE][i%SIZE] = i + 1;
	}
	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE*SIZE * 2; i++){
		x = rand() % SIZE;
		y = rand() % SIZE;

		tmp = bingo[0][0];
		bingo[0][0] = bingo[x][y];
		bingo[x][y] = tmp;
	}
	do{
		for (i = 0; i < SIZE; i++){
			for (j = 0; j < SIZE; j++)
				printf("%2d ", bingo[i][j]);
			puts(" ");
		}
		puts(" ");

		printf("1~%d의 숫자를 입려하세요 (종료:0) :  ", SIZE*SIZE);
		scanf("%d", &num);

		for (i = 0; i < SIZE*SIZE; i++){
			if (bingo[i / SIZE][i%SIZE] == num){
				bingo[i / SIZE][i%SIZE] = 0;
				break;
			}
		}
	} while (num != 0);
}


