/*#include <stdio.h>
int main(){
	char* pc = (char*)0x100;
	short* ps = (short*)0x100;
	int*    pi = (int*)0x100;
	
	printf("sizeof(char)  =%d\n", sizeof(char));
	printf("sizeof(short)  =%d\n", sizeof(short));
	printf("sizeof(int)  =%d\n", sizeof(int));
	printf("pc++=0x%x\tps++=0x%x\tpi++0x%x\n", pc++, ps++, pi++);
	printf("pc++=0x%x\tps++=0x%x\tpi++0x%x\n", pc++, ps++, pi++);
	printf("pc++=0x%x\tps++=0x%x\tpi++0x%x\n", pc++, ps++, pi++);
	printf("pc++=0x%x\tps++=0x%x\tpi++0x%x\n", pc++, ps++, pi++);
	printf("pc++=0x%x\tps++=0x%x\tpi++0x%x\n", pc++, ps++, pi++);


	return 0;
}*/

/*#include <stdio.h>
int main(){
	int arr[4];
	int* ptr = (int*)0x100;
	intptr_t diff;

	printf("ptr-3 =%p\n", ptr - 3);
	printf("ptr-2 =%p\n", ptr - 2);
	printf("ptr-1 =%p\n", ptr - 1);
	printf("ptr+0 =%p\n", ptr);
	printf("ptr+1 =%p\n", ptr +1);
	printf("ptr+2 =%p\n", ptr +2);
	printf("ptr+3 =%p\n", ptr +3);
	printf("(char*)ptr+3=%p\n", (char*)ptr + 3);
	printf("(unsigned)ptr+3=%x\n", (unsigned)ptr + 3);

	diff = &arr[0] - &arr[2];
	printf("arr[0] - &arr[2] =%d\n", diff);

	diff = (char*)&arr[0] - (char*)&arr[2];
	printf("(char*)&arr[0]-(char*)&arr[2]=%d\n", diff);


	return 0;
}*/

/*#include <stdio.h>
int main(){
	int arr[] = { 0, 1, 2, 3, 4 };
	int *ptr = &arr[0];
	const int LEN = sizeof(arr) / sizeof(arr[0]);
	int i;

	// 포인터의 값을 1씩 증가시키며넛 출력
	for (i = 0; i < LEN; i++)
		printf("ptr++=%p, &arr[%d]= %p\n", ptr++, i, &arr[i]);
	puts("");

	ptr = &arr[0];//포인터의 ptr의 값이 바뀌없으믈ㅗ 다시 초기화

	for (i = 0; i < LEN; i++)
		printf("*ptr++=%d, arr[%d]\n", *ptr++, i, arr[i]);


	return 0;
}*/

/*#include <stdio.h>
int main(){
	int arr[4] = { 0, 1, 2, 3 };
	int* ptr = arr;//배열의 이름은 주소다(짱중요!) -> scanf("%d", (&)arr[i])이 가능!!

	printf("arr=%p\n", arr);
	printf("ptr=%p\n", ptr);
	printf("arr=ptr? %d\n", arr==ptr);
	printf("arr!=ptr? %d\n", arr!=ptr);

	printf("arr+1 < ptr? %d\n", arr + 1 < ptr);
	printf("sizeof(arr) = %d\n", sizeof(arr));
	printf("sizeof(arr+1) = %d\n", sizeof(arr + 1));
	printf("sizeof(ptr) = %d\n", sizeof(ptr));
	printf("sizeof(arr-ptr) = %d\n", sizeof(arr - ptr));// 주소값- 주소값 = 정수
	


	return 0;
}*/

//배열과 포인터는 자동형변환된다
//*와[]의 결과타입이 같다
//

/*#include <stdio.h>
int main(){
	char str[] = "abcde";
	char *p = str;
	int i;

	printf("str=%s\n", str);
	printf("p = %s\n", p);

	for (i = 0; i < sizeof(str); i++){
		printf("p[%d]=%c, str[%d]=%c, &str[%d]=%p\n", i, p[i], i, str[i], i,&str[i]);
	}

	while (*p){//while(*p!='\0')
		printf("p=%p, *p %c\n", p, *p);
		p++;
	}

	for (p = str; *p; p++);

	printf("p  =%p\n", p);
	printf("str=%p\n", str);
	printf("strlen=%d\n", p - str);

	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(){
	char chArr[] = "abc";
	char *ps = "abc";
	int i;

	printf("chArr=%s, ps=%s\n", chArr, ps);

	for (i = 0; i < sizeof(chArr); i++)
		printf("chArr[%d] = %c, ps[%d]=%c\n", i, chArr[i], i, ps[i]);

	strcpy(chArr, "ABC");//문자 배열 chArr에 문자열 상수의 내용을 복사
	//strcpy(ps, "ABC"); //에러. 문자열 상 수의 내용을 변경할 수 없음.
	//chArr = "ABC"; //에러. 상수(배열이름 chArr)을 변경할 수 없음.
	ps = "ABC"; // 문자열 상수의 주소를 ps에 저장
	chArr[1] = 'Z';//문자배열 chArr의 두번째 요소를 변경
//	ps[1] = 'Z';  //에러, 문자열 상수의 내용을 변경할 수 없음

	printf("chArr=%s, ps=%s\n", chArr, ps);


	return 0;
}*/