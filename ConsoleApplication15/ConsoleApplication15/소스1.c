#include <stdio.h>
int factorial(int n){
	if (n == 1) return 1;//n�� ���� 1�̸�, 1�� ��ȯ�Ѵ�. 

	return n* factorial(n - 1);//����Լ�
}

int main(){
	int result = factorial(5);

	printf("5! = %d", result);

	return 0;
}
