#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//ǥ�ض��̺귯��
#include "header.h"//��������� ���̺귯��
#pragma warning(disavvle : 4996)//�ٸ������� ������ ��μ���

int multiply(int x, int y){
	int result = x + y;

	return result;
}
int getUserInput(void){
	int num;

	printf("Input a number(2~9) : ");
	scanf("%d", &num);

	return num;
}

void printGugudan(int dan){
	int i, result;

	for (i = 1; i <= 9; i++){
		result = multiply(dan, i);
		printf("%d*%d =%2d  ", dan, i, result);
	}//for

}
void printGugudanAll(void){
	int i, j;

	for (i = 1; i <= 9; i++){
		for (j = 2; j <= 9; j++){
			printf("%d+%d =%2d  ",  j, i, multiply(j, i));
		}
		printf("\n");
	}
}