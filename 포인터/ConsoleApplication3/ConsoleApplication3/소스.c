/*#include <stdio.h>

void swap(int x, int y){
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}
int main(){
	int x = 5;
	int y = 3;

	printf("x=%d, y=%d\n", x, y);
	swap(x, y);
	printf("x=%d, y=%d\n", x, y);


	return 0;
}*/

/*#include <stdio.h>
	int sumArr(int *arr, int len); //�迭�� ��� ����� ���� ��ȯ
	void printArr(int *arr, int len);//�迭�� ��� ��Ҹ� ���

	int main(){
		int arr[] = { 1, 2, 3, 4, 5 };
		const int LEN = sizeof(arr) / sizeof(arr[0]);
		int sum = sumArr(arr, LEN);

		printArr(arr, LEN);
		printf("sum=%d\n", sum);
		
		return 0;
	}

	int sumArr(int arr[], int len){ //int sumArr(int* arr, int len){
		int sum = 0;
		sum += *arr++;//�迭�� ��� ����� ���� sum�� �����Ѵ�

		return sum;
}
	void printArr(int arr[], int len){
		int i;

		for (i = 0; i < len; i++)
			printf("arr[%d]=%d\n", i, arr[i]);
	}*/

/*#include <stdio.h>
void sort(const int* src, int* rtn, int len){
	int i, j, tmp;
	const int LEN = len;
	int* ptr = rtn;

	while (len--)//len�� 0�̵ɶ�����
		*ptr++ = *src++;//�迭 src�� ��� ��Ҹ� �迭 rtn���� ����

	//�迭 rtn����
	for (i = 0; i < (LEN - 1); i++)
		for (j = 0; j < (LEN - 1); j++)
			if (rtn[j] > rtn[j + 1]){
				tmp = rtn[j];
				rtn[j] = rtn[j + 1];
				rtn[j + 1] = tmp;
			}//if
	
}
void printArr(const int arr[], int len){
	printf("[");
	while (len--) printf("%d,", *arr++);
	printf("]\n");
}

int main(){
	int src[] = { 6, 7, 2, 9, 1, 3, 4 };
	int rtn[7]; //���İ���� ���� �迭

	sort(src, rtn, 7);//������ �迭�� ���İ���� ������ �迭�� �Ѱ��ش�.
	printArr(src, 7);//�����ϱ� �� �迭�� ���
	printArr(rtn, 7);//���ĵ� �迭�� ���

	return 0;
}*/

/*#include <stdio.h>

char* myStrchr(const char str[], char ch){
	for (; *str; str++)//*str�� �� ���ڰ� �ƴ� ���� �ݺ�
	if (*str == ch) return str;//*str�� ch�� ������, str�� ��ȯ

	return NULL;
}

int main(){
	char* str = "abcde";
	char* ptr = NULL;
	char ch;
	printf("str=%s, \t %p\n", str, str);

	ch = 'c';
	ptr = myStrchr(str, ch);//���ڿ� str���� ����ch �� ã�´�.

	if (ptr != NULL)
		printf("ch=%c, \t\t %p\n", *ptr, ptr);
	else
		printf("\"%s\"���� '%c'�� ã�� �� �����ϴ�.\n", str, ch);

	ch = 'z';
	if ((ptr = myStrchr(str, ch)))// ((ptr = myStrchr(str, ch)!=NULL))
		printf("ch=%c, \t\t %p\n", *ptr, ptr);
	else
		printf("\"%s\"���� '%c'�� ã�� �� �����ϴ�.\n", str, ch);
	
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* getUserInput(char* input){
	printf("�ܾ �ϳ� �Է��ϼ���.>");
		scanf("%s", input);

		return input;
}
int main(){
	char input[20];
	char* str = getUserInput(input);//�Ű������� ���� �迭�� ����
	printf("�Է¹��� �ܾ� :%s", str);

	return 0;
}*/

#include <stdio.h>
int myStrlen(char* str);
char* myStrcpy(char* dst, const char* src);
char* myStrcat(char* dst, const char* src);

int main(){
	char* src = "abc";
	char dst[8] = { 0 };

	printf("str=%s, myStrlen(src)=%d\n", src, myStrlen(src));
	printf("dst=%s, myStrlen(dst)=%d\n", src, myStrlen(dst));
	printf("dst=%s\n",myStrcpy(dst ,src));
	printf("dst=%s\n", src, myStrcat(dst,"123"));

	return 0;
	
}

int myStrlen(char* str){
	char* p;
	
	for (p = str; *p; p++);

	return p - str;
}

char* myStrcat(char* dst, const char* src){
	myStrcpy(dst + myStrlen(dst), src);
	return dst;
}

char* myStrcpy(char* dst, const char* src){
	char* p = dst;

	while (*dst = *src++);

	return p;
}

