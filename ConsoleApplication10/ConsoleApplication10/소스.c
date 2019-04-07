#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int a,A, B;

	scanf("%d", &a);
	scanf("%d", &B);
	A = a += 5;

	if (A > B) printf(">");
	else if (A < B) printf("<");
	else if (A == B) printf("=");

	return 0;
}