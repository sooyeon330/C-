/*#include <stdio.h>

typedef struct Student{//구조체를 전역적으로 정의
	int no;
	char name[10];
	int kor, math, eng;
}Student;

int main(){
	Student s1;//struct student s1; 과 동일
	Student s2 = { 2, "JOHN", 100, 90, 80 };

	s1 = s2;  //구조체 s2의 내용을 s1로 복사
	s1.no = 1;
	s1.name[0] = 'S'; //name의 첫번째 글자를 'S'로 벼경

	printf("s1.no=%d\n", s1.no);
	printf("s1.name=%s\n", s1.name);
	printf("s1.kor=%d\n", s1.kor);
	printf("s1.math=%d\n", s1.math);
	printf("s1.eng=%d\n", s1.eng);
	puts("");
	printf("s2.no=%d\n", s2.no);
	printf("s2.name=%s\n", s2.name);
	printf("s2.kor=%d\n", s2.kor);
	printf("s2.math=%d\n", s2.math);
	printf("s2.eng=%d\n", s2.eng);

	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct date{
	int year, mon, day;
};
struct userScore{
	char userId[8];
	int score;
	int rank;
	struct date inputDate;		//입력(input)날짜
	struct date changeDate;	//변경(change)날짜
};

int main(){
	struct userScore s1 = { "myId", 100, 1, { 2016, 1, 31 }, { 2016, 2, 2 } };
	struct date d1 = { 2016, 3, 3 };

	strcpy(s1.userId, "yourId");

	s1.inputDate. year = 1999;
	s1.inputDate.mon = 12;
	s1.inputDate.day = 31;

	s1.changeDate = d1; //중첩된 구조체를 통째로 변경

	printf("userId=%s\n", s1.userId);
	printf("score=%d\n", s1.score);
	printf("rank=%d\n", s1.rank);
	printf("inputDate. year=%d\n", s1.inputDate.year);
	printf("inputDate.mon=%d\n", s1.inputDate.mon);
	printf("inputDate.day=%d\n", s1.inputDate.day);
	printf("changeDate.year=%d\n", s1.changeDate.year);
	printf("changeDate.mon=%d\n", s1.changeDate.mon);
	printf("changeDate.day=%d\n", s1.changeDate.day);

	return 0;
}*/

/*#include <stdio.h>

typedef struct student{
	int no;//4byte
	char name[10];//10byte
	int kor, math, eng;//12btye
} Student;

int main(){
	Student stuArr[] = {
		{ 1, "KIM",100,100,100 },
		{ 2, "LEE", 90	, 90, 90 },
		{ 3, "CHOI", 80, 80, 80 },
		{ 4, "PARK", 100, 100, 100 }
	};

	const int LEN = sizeof(stuArr) / sizeof(stuArr[0]);
	int total, i;
	float average;

	printf("sizeof(stuArr) = %d\n", sizeof(stuArr));
	printf("sizeof(stuArr[0]) = %d\n", sizeof(stuArr[0]));
	printf("sizeof(Student) = %d\n", sizeof(Student));
	printf("sizeof(struct student) = %d\n", sizeof(struct student));
	printf("LEN = %d\n", LEN);

	printf("\n번호 이름          국어 수학 영어    총점   평균\n");
	printf("======================================\n");

	for (i = 0; i < LEN; i++){
		total = stuArr[i].kor + stuArr[i].math + stuArr[i].eng;
		average = total / (float)3;
		printf("%4d  %-10s  %4d  %4d  %4d  %4d  %6.2f\n", stuArr[i].no, stuArr[i].name, stuArr[i].kor, stuArr[i].math, stuArr[i].eng, total, average);
	}

	return 0;
}*/

#include <stdio.h>
typedef struct student {
	int no;
	char name[10];
	int kor;
	int math;
	int eng;
}Student;

int main(){
	Student* ptr = 0x0;

	printf("sizeof(Student) =%d\n", sizeof(Student));
	printf("&(*ptr).no =%p, %2d\n", &(*ptr).no, &ptr->no);
	printf("&(*ptr).name =%p, %2d\n", &(*ptr).name, &ptr->name);
	printf("&(*ptr).kor =%p, %2d\n", &(*ptr).kor, &ptr->kor);
	printf("&(*ptr).math =%p, %2d\n", &(*ptr).math, &ptr->math);
	printf("&(*ptr).eng =%p, %2d\n", &(*ptr).eng, &ptr->eng);
	printf("ptr         =%p, %2d\n", ptr, ptr);
	printf("ptr+1       =%p, %2d\n", ptr+1, ptr+1);
	printf("ptr+2       =%p, %2d\n", ptr+2, ptr+2);
	printf("ptr+3       =%p, %2d\n", ptr+3, ptr+3);


	return 0;
}