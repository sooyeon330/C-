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

	// �������� ���� 1�� ������Ű��� ���
	for (i = 0; i < LEN; i++)
		printf("ptr++=%p, &arr[%d]= %p\n", ptr++, i, &arr[i]);
	puts("");

	ptr = &arr[0];//�������� ptr�� ���� �ٲ�����ɤ� �ٽ� �ʱ�ȭ

	for (i = 0; i < LEN; i++)
		printf("*ptr++=%d, arr[%d]\n", *ptr++, i, arr[i]);


	return 0;
}*/

/*#include <stdio.h>
int main(){
	int arr[4] = { 0, 1, 2, 3 };
	int* ptr = arr;//�迭�� �̸��� �ּҴ�(¯�߿�!) -> scanf("%d", (&)arr[i])�� ����!!

	printf("arr=%p\n", arr);
	printf("ptr=%p\n", ptr);
	printf("arr=ptr? %d\n", arr==ptr);
	printf("arr!=ptr? %d\n", arr!=ptr);

	printf("arr+1 < ptr? %d\n", arr + 1 < ptr);
	printf("sizeof(arr) = %d\n", sizeof(arr));
	printf("sizeof(arr+1) = %d\n", sizeof(arr + 1));
	printf("sizeof(ptr) = %d\n", sizeof(ptr));
	printf("sizeof(arr-ptr) = %d\n", sizeof(arr - ptr));// �ּҰ�- �ּҰ� = ����
	


	return 0;
}*/

//�迭�� �����ʹ� �ڵ�����ȯ�ȴ�
//*��[]�� ���Ÿ���� ����
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

	strcpy(chArr, "ABC");//���� �迭 chArr�� ���ڿ� ����� ������ ����
	//strcpy(ps, "ABC"); //����. ���ڿ� �� ���� ������ ������ �� ����.
	//chArr = "ABC"; //����. ���(�迭�̸� chArr)�� ������ �� ����.
	ps = "ABC"; // ���ڿ� ����� �ּҸ� ps�� ����
	chArr[1] = 'Z';//���ڹ迭 chArr�� �ι�° ��Ҹ� ����
//	ps[1] = 'Z';  //����, ���ڿ� ����� ������ ������ �� ����

	printf("chArr=%s, ps=%s\n", chArr, ps);


	return 0;
}*/