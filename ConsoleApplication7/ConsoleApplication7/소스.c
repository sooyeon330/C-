#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int a, b,sum;
	char c;
	

	scanf("%d", &a);scanf("%d", &b);
	fflush(stdin);
	scanf("%c",&c);

	if (c == '+')  sum = a + b;
	else if (c == '-')  sum = a - b;
	else if (c == '*')  sum = a * b;
	else if (c == '/')  sum = a / b;

	printf("%d", sum);


	return 0;
}