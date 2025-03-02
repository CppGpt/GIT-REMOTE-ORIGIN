#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

struct Employee {
	char name[20];
	int wage;
}; // 01 
struct fraction {
	int numerator;
	int denominator;
}; // 02
struct home_address {
	int st_num;
	char city[20];
	char street[20];
};
struct person {
	struct home_address address;
	char name[20];
	char phone[14];
};
struct student {
	char name[20];
	char student_id[8];
	double grade;
	char subject[20];
	char career[20];
};

int main() {

	//01 *
	/*
	struct Employee arry[] = { {"홍길동",2000000},{"임꺽정", 3000000},{"김영철",2500000} };

	for (int i = 0; i < 3; i++) {
		printf("직원 이름: %4s 월급여: %7d\n", arry[i].name, arry[i].wage);
	}
	*/

	//02 *
	/*
	struct fraction f1, f2;
	printf("a의 분수를 입력하세요. (분자 분모) >> ");
	scanf_s("%d %d", &f1.numerator, &f1.denominator);
	printf("a의 분수를 입력하세요. (분자 분모) >> ");
	scanf_s("%d %d", &f2.numerator, &f2.denominator);

	printf("a = %d/%d\nb = %d/%d", f1.numerator, f1.denominator, f2.numerator, f2.denominator);	
	*/

	//03 *
	/*
	struct fraction f1, f2, result;
	
	printf("a의 분수를 입력하세요. (분자 분모) >> ");
	scanf_s("%d %d", &f1.numerator, &f1.denominator);
	printf("a의 분수를 입력하세요. (분자 분모) >> ");
	scanf_s("%d %d", &f2.numerator, &f2.denominator);
	
	result.numerator = f1.numerator * f2.numerator;	
	result.denominator = f1.denominator * f2.denominator;	

	printf("a = %d/%d\nb = %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator);
	printf("c = a*b = %d/%d", result.numerator, result.denominator);
	*/
	
	//04 *
	/*
	typedef struct home_address address;
	address add1 = { 223, "서울시", "선릉로" };
	address add2 = { 567, "서울시", "경인로" }; // 생성자 사용

	printf("%4s %4s %d\n", add1.city, add1.street, add1.st_num);
	printf("%4s %4s %d\n", add2.city, add2.street, add2.st_num);
	*/

	//05 *
	/*
	typedef struct person person;
	person p1 = { { 123, "춘천시", "시청길"},"홍길동","011-1111-1111" };
	person p2 = { { 456, "서울시", "경인로" },"조명호","017-3245-3278"};
	person p3 = { { 789, "수원시", "영통로"}, "최윤호", "011-2222-2456" };

	printf("    주 소           이 름         전화번호\n\n");
	printf("%s %s %d %8s %16s\n", p1.address.city, p1.address.street, p1.address.st_num, p1.name, p1.phone);
	printf("%s %s %d %8s %16s\n", p2.address.city, p2.address.street, p2.address.st_num, p2.name, p2.phone);
	printf("%s %s %d %8s %16s\n", p3.address.city, p3.address.street, p3.address.st_num, p3.name, p3.phone);
	*/

	//06 **
	/*
	typedef student student;
	student s1, s2, s3, s4, s5;
	student* p = &s1;

	for (int i = 0; i < 5; i++) {
		scanf_s("%s %s %lf %s %s", (*p).name, sizeof((*p).name), (*p).student_id, sizeof((*p).student_id), &(*p).grade, (*p).subject, sizeof((*p).subject), (*p).career, sizeof((*p).career));
		if (i == 1) student* p = &s2;
		else if (i == 2) student* p = &s3;
		else if (i == 3) student* p = &s4;
		else if (i == 4) student* p = &s5;
	}

	student* q = &s1;
	printf("\n      이름       학번      학점      학과      진로\n\n");
	for (int i = 0; i < 5; i++) {
		printf("%10s %10s %5.1lf %10s %10s\n", (*q).name, (*q).student_id, (*q).grade, (*q).subject, (*q).career);
		if (i == 1) student* p = &s2;
		else if (i == 2) student* p = &s3;
		else if (i == 3) student* p = &s4;
		else if (i == 4) student* p = &s5;
	}
	*/
		// 최대 1,000,000자까지 받을 수 있는 배열선언 
		char* nex_token;
		char string[1000001];
		int count = 0;
		scanf_s("%[^\n]s", string, sizeof(string));

		char* ptoken = strtok_s(string, " ",&nex_token);
		while (ptoken!=NULL) {
			count++;
			printf("%s", ptoken);
			ptoken = strtok_s(NULL, " ", &nex_token);

		}
		printf("%d", count);

}