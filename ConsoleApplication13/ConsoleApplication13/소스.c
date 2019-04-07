/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int N,C,i,j,count=0;
	int Q[2][10]  ;

	scanf("%d", &N);

	for (i = 0; i < 2; i++){
		for (j = 0; j < N; j++){
			scanf("%d", &Q[i][j]);
		}
	}

	for (j = 0; j < N; j++){
		if (Q[0][j] == Q[1][j]) count++;
	}

	printf("%d", count);

	return 0;

	//품
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main(){
	char str1[100], str2[100];
	char tmp="";
	int i;

	gets(str1);

	for (i = 0; i < strlen(str1); i++){
		for (int j = 1; j<strlen(str1) - i; j++){
			if (str1[i]>str1[j]){
				tmp = str1[i];
				str1[i] = str1[j];
				str1[j] = tmp;
			}
		}
	}
	puts(str1);


	return 0;
}

