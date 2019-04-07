/*
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define LEN 10
int main(){
int code[] = { -4, -1, 3, 6, 11 };
int lotto[6];
int arr[LEN];
int i, tmp;
const int CODE_LEN = sizeof(code) / sizeof(code[0]);

srand((unsigned)time(NULL));

for (i = 0; i < 6; i++){
lotto[i] = (rand() % 45) + 1;
for (int j = 0; j < i; j++){
if (lotto[i] == lotto[j]){ i--; }
}
printf("%d ", lotto[i]);
}

return 0;
}*/

/*#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define LEN 10

int main(){
int code[] = { -4, -1, 3, 6, 11 };
int lotto[6];
int arr[LEN];
int i, tmp;
const int CODE_LEN = sizeof(code) / sizeof(code[0]);

srand((unsigned)time(NULL));

for (i = 0; i < LEN; i++){
tmp = rand() % CODE_LEN;
arr[i] = code[tmp];
}

for (i = 0; i < LEN; i++)
printf("arr[%d]=%d\n", i, arr[i]);

return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main(){

char str[] = "Hello";
char chArr[] = { "H", "e", "l", "l", "o", "\0" };
int i;
int LEN = sizeof(str) / sizeof(str[0]);

printf("str=%s\n", str);
printf("chArr=%s\n", chArr);

for (i = 0; str[i] != '\0'; i++);

printf("LEN=%d\n", LEN);
printf("i=%d\n", i);
printf("strlen(str)=%d\n", strlen(str));

return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#define LEN 51
int main(){
char str[LEN];
char result[LEN];
int i;
int pos = 0;
printf("%d자 이하의 내용을 입력하세요 : ", LEN - 1);
scanf("%s", str);
for (i = 0; str[i]; i++){
if (('0' <= str[i] && str[i] <= '9') || str[i] == ","){
result[pos++] = str[i];
}
}

result[pos] = '\0';
printf("str=%s\n", str);
printf("reslut = %s\n", result);


return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 5
int main(){
	int bingo[SIZE][SIZE];
	int i, j, x, y, tmp, num;

	for (i = 0; i < SIZE*SIZE; i++){
		bingo[i / SIZE][i%SIZE] = i + 1;
	}
	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE*SIZE + 2; i++){
		x = rand() % SIZE;
		y = rand() % SIZE;

		tmp = bingo[0][0];
		bingo[0][0] = bingo[x][y];
		bingo[x][y] = tmp;
	}
	do{
		for (i = 0; i < SIZE; i++){
			for (j = 0; j < SIZE; j++){
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
		}while (num != 0);

		return 0;
	}
/*
#include <string.h>
#include <stdio.h>
int main(){
	int m1[2][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};
	int m2[3][2] = {
		{ 1, 2 },
		{ 3, 4 }, 
		{ 5, 6 }
	};
	int m3[sizeof(m1) / sizeof(m1[0])][sizeof(m2[0]) / sizeof(m2[0][0])] = { 0 };

	const int ROW = sizeof(m1) / sizeof(m1[0]);
	const int COL = sizeof(m2[0]) / sizeof(m2[0][0]);
	const int M2_ROW = sizeof(m2) / sizeof(m2[0]);
	int i, j, k;

	for (i = 0; i < ROW; i++){
		for (j = 0; j < COL; j++){
			for (k = 0; k < M2_ROW; k++){
				m3[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	for (i = 0; i < ROW; i++){
		for (j = 0; j < COL; j++){
			printf("%3d ", m3[i][j]);
			puts(" ");
		}
	}


	return 0;
}*/