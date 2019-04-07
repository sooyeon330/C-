#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int N,i;
	double fac=1;

	scanf("%d", &N);

	for (i = 1; i <=N; i++)
		fac *= i;

	printf("%0.0f", fac);

	return 0;
}