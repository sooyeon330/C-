#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main(){
	int N,co5,co3;
	int a;

	scanf("%d", &N);

	co5 = N / 5;
	a = N % 5;
	co3 = a / 3;
	if (!(a % 3 == 0)) co3++;

	printf("%d", co5 + co3);

	return 0;
}