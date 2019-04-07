#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int N, i,j;

	scanf("%d", &N);

	for (i = N; i > 0; i--){
		for (j = i; j <= N; j++){
			printf("*");
		}
		printf("\n");
	}



	return 0;
}