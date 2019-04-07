#include <stdio.h>
int factorial(int n){
	if (n == 1) return 1;//n의 값이 1이면, 1을 반환한다. 

	return n* factorial(n - 1);//재귀함수
}

int main(){
	int result = factorial(5);

	printf("5! = %d", result);

	return 0;
}
