#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int su[10];
	int i,j,sum1 = 0, sum2 = 0;

	for (i = 0; i < 10; i++){
		scanf("%d", &su[i]);
	}

	for (i = 0; i < 5; i++){
		sum1 += su[i];
	}
	

	for (j = 5; j < 10; j++){
		sum2 += su[j];
	}


	printf("%d %d", sum1, sum2);


	return 0;
}