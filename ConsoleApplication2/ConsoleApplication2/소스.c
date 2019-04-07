#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main(){
	char str[50];
	int i;

	gets(str);

	for (i = strlen(str)-1; i >=0; i--)
		printf("%c",str[i]);


	return 0;
}