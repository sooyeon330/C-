/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>

int main(){
	char* filename = "C:\\work\\ch11\\opentest.txt";
	FILE* fp = fopen(filename, "r");//파일을 염//"r"읽기모드 read

	if (fp == NULL){
		printf("읽기모드로 파일 [%s] 열기에 실패했습니다.\n",filename);
		printf("errno = %d\n", errno);//발생한 에러코드 출력
	}
	else {
		printf("읽기모드로 파일 [%s] 열기에 성공했습니다.\n", filename);
	}

	fp = fopen(filename, "w");//write
	errno = 0; //에러코드를 초기화

	if (fp == NULL){
		printf("쓰기모드로 파일 [%s] 열기에 실패했습니다.\n", filename);
		printf("errno = %d\n", errno);
	}
	else{
		printf("쓰기모드로 파일 [%s] 열기에 성공했습니다.\n", filename);
	}
	printf("FOPEN_MAX=%d\n", FOPEN_MAX);

	fclose(fp);//파일닫음
	printf("파일 [%s]를 닫습니다.\n",filename);


	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char* fname1 = "c:\\work\\ch11\\aaa.txt";
	char* fname2 = "c:\\work\\ch11\\bbb.txt";

	FILE* in_f = fopen(fname1, "r");
	FILE* out_f = fopen(fname2, "w");
	int ch = 0;

	if (!in_f || !out_f){	// NULL
		printf("파일[%s]를 열 수 없습니다,\n",!in_f ? fname1: fname2);
		exit(1);
	} 
	printf("[%s]를 [%s]로 복사를 시작합니다.\n", fname1, fname2);

	while ((ch = fgetc(in_f)) != EOF)
		fputc(ch, out_f);
	if (ferror(in_f) || ferror(out_f))
		printf("파일 복사 중 에러가 발생했습니다.\n");
	else
		printf("파일 복사가 끝났습니다.\n");

	fclose(in_f);
	fclose(in_f);
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(){
	char* yoil[] = { "일", "월", "화", "수", "목", "금", "토" };

	time_t now = time(NULL);
	struct tm* lt = localtime(&now);//time_t를 struct tm으로 변환

		printf("now=%d\n", now);
		printf("%s", asctime(lt));
		printf("%4d년  %2d월  %2d일  %s요일\n", lt->tm_year + 1900,
										lt->tm_mon + 1, lt->tm_mday, yoil[lt->tm_wday]);

		printf("%2d시  %2d분 %2d초 \n", lt->tm_hour, lt->tm_min, lt->tm_sec);
		printf("올해의 %d번째 날\n", lt->tm_yday);


	return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int strCount(char* src, char* key);//src에 key가 몇번 나타나는지 세어서 반환

int main(){
	char* src = "aabbccaabbcc";
	char* key = "bc";

	printf("src=%s\n", src);
	printf("key=%s\n", key); 
	printf("cnt=%d\n", strCount(src,key));

	return 0;

}
int strCount(char* src, char* key){
	int cnt = 0;
	int len = 0;

	if (src == NULL || key == NULL) return 0;

	len = strlen(key);
	while (src = strstr(src, key)){
		cnt++;
		src += len;
	}
	return cnt;
	}*/


#include <stdio.h>

#define max(x,y)   ((x) > (y) ? (x) : (y))
#define min(x,y)   ((x) < (y) ? (x) : (y))
#define square(x) ((x)*(x))
#define swap(x,y)  do{int tmp = x; x=y; y=tmp;} while (0) //매크로 함수

int square2(int x){ return x + x; }//일반함수

int main(){
	int x = 2;
	int y = 5;

	printf("x=%d, y=%d\n", x, y);

	swap(x, y);
	printf("x=%d, y=%d\n", x, y);

	printf("max(x,y) = %d\n", max(x, y));
	printf("max(x, y+5)=%d\n", max(x, y + 5));
	printf("max(x, min(y,10))=%d\n", max(x, min(y, 10)));
	printf("\n");

	x = y;
	printf("x=%d, y=%d\n", x, y);

	printf("square(1.1) =%f\n", square(1.1));
	printf("square(x) =%d\n", square(x));
	printf("square (x+1)=%d\n", square(x + 1)); 
	printf("square(++x) =%d\n", square(++x));
	printf("square2(++y) =%d\n", square2(++y));

	return 0;


}
