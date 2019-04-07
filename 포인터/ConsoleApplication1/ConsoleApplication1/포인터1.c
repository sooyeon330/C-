/*/*#include <stdio.h>
int main(){
	int i = 5;
	int* p = &i;

	printf("i = %d\n", i);//변수 i 에 저장된 값을 출력
	printf("&i= %p\n", &i);//변수 i의 주소를 출력
		printf("p= %p\n", p); // 포인터p에 저장된값9주소) 를 출ㄺ
		printf("&p = %p\n", &p);// 포인터 p의 주소를 출력


	return 0;
}*/
/*#include <stdio.h>
int main(){
	int i = 200;
	int* ptr = &i;

	*ptr = *ptr + 1; // i=i+1;과 같음

	printf("i   =%d\n",i);
	printf("*ptr  = %d\n", *ptr);
	printf("&i   =%p\n", &i);
	printf("ptr = %p\n", ptr);

	return 0;
}*/
/*#include <stdio.h>
int main(){

	int i = 200;
	int* ptr = &i;

	printf/*
	i
		&i
		*&i

		ptr
		*ptr
		&*ptr
		
	return 0;
}*/
/*#include <stdio.h>
#include <string.h>
int main(){
	char ch;
	int i;
	float f;
	double d;
	long long e;
	 
	char* pch = &ch;
	int* pi = &i;
	float* pf = &f;
	double* pd = &d;
	long long* pe = &e;

	printf("sizeof(pch) = %d\n", sizeof(pch));
	printf("sizeof(pi) = %d\n", sizeof(pi));
	printf("sizeof(pf) = %d\n", sizeof(pf));
	printf("sizeof(pd) = %d\n", sizeof(pd));
	printf("sizeof(pe) = %d\n", sizeof(pe));
	puts(" ");
	printf("sizeof(*pch) = %d\n", sizeof(*pch));
	printf("sizeof(*pi) = %d\n", sizeof(*pi));
	printf("sizeof(*pf) = %d\n", sizeof(*pf));
	printf("sizeof(*pd) = %d\n", sizeof(*pd));
	printf("sizeof(*pe) = %d\n", sizeof(*pe));

	return 0;
}*/
/*#include <stdio.h>
int main(){
	int i = 0x1B2B3B4B;
	int *pi = &i;
	char *pc = (char*)pi;
	short *ps = (short*)ps;

	printf("&i= %p\n",&i);
		pi
		pc
		ps

		%X *pi //포인터 pi가 가리키는 값(i)를 16진수(%X)로 출력
		%X *pc
		%X*ps
	%X	*(int*)pc
	return 0;
}
*/
/*#include <stdio.h>
int main(){
	int i = 0x1B2B3B4B;
	int *pi = &i;
	unsigned addr = (unsigned)pi;

	printf("i   =%X\n", i);

	printf("&i  =%p\n", &i);
	printf("pi   =%p\n", pi);
	printf("*pi   =%p\n", *pi);

	printf("addr       =%08X,  *(char*)addr          =%X\n", addr, *(char*)addr);
	printf("addr +1  =%08X,  *(char*)(addr+1)  =%X\n", addr+1, *(char*)(addr+1));
	printf("addr +2  =%08X,  *(char*)(addr+2)  =%X\n", addr+2, *(char*)(addr+2));
	printf("addr +3  =%08X,  *(char*)(addr+3)  =%X\n", addr+3, *(char*)(addr+3));


	return 0;
}*/
/*#include <stdio.h>
int main(){
	int i = 100;
	int* pi = &i;				//변수 i를 가리키는 포인터
	int** ppi = &pi;			// 포인터pi를 가리키는 포인터(포인터의 포인터)
	int* pi2 = (int*)&pi;	  //pi의 값을 pi2에 저장한다.

	pirntf("i = %d\n", i);
	pirntf("&i = %p\n", &i);
	pirntf("pi = %p\n", i);
	pirntf("&pi = %d\n", &pi);
	pirntf("ppi = %p\n", ppi);
	pirntf("*ppi = %p\n", *ppi);
	pirntf("**ppi = %p\n",**ppi);
	pirntf("pi2 = %p\n", pi2);
	pirntf("*pi2 = %p\n", *pi2);
	pirntf("**(int**)pi2 = %d\n", **(int**)pi2);
	printf("sizeof(pi)=%d\n", sizeof(pi));
	printf("sizeof(ppi)=%d\n", sizeof(ppi));

	return 0;
}*/


