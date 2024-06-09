#define _CRT_SECURE_NO_WARNINGS

// 6-1 while을 사용한 반복문
// a가 10보다 작은동안 두배씩 반복적으로 늘리세요
// 실행결과 a : 16
#include <stdio.h>

int main(void)
{
	int a = 1;

	while (a < 10) {
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}

// 6-2 for문을 사용한 반복문
// a 값을 두 배로 증가시키는 문장을 3번 반복
// 실행결과 a : 8
#include <stdio.h>

int main(void)
{
	int a = 1;
	int i;

	for (i = 0; i < 3; i++) {
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}


// 6-4 중첩 반복문을 사용한 별 출력
// 실행결과	*****
//			*****
//			*****
#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");											// 개 행 !!
	}

	return 0;
}

// 6-5 break를 사용한 반복문 종료
// 1부터 10까지 더하는 도중 총합이 30이 넘으면 중단
// 실행결과	누적한 값 : 36
//			마지막으로 더한 값 : 8
#include <stdio.h>

int main(void)
{
	int total = 0;
	int i;

	for (i = 1; i <= 10; i++) {
		total = i + total;
		if (total >= 30) break;
	}
	printf("누적한 값: %d\n", total);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
}


// 7-1 두개의 함수로 만든 프로그램
// 두 수를 더하는 함수
// 실행결과	result : 30
#include <stdio.h>

int sum(int a, int b);

int main(void)
{
	int x = 10, y = 20;
	int res;

	res = sum(x, y);

	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b) {
	int temp;
	temp = a + b;
	return temp;
}

// 7-2 매개변수가 없는 함수
// 키보드로 수를 입력하면 양수를 반환하는 함수
// 실행결과 양수 입력 : 10
//			반환값 : 10
#include <stdio.h>

int get_num(void);

int main(void)
{
	int res;

	res = get_num();
	printf("반환값 : %d\n", res);
	return 0;
}
int get_num(void) {
	int a;

	printf("양수 입력 : ");											// 양수를 입력받음
	scanf("%d", &a);

	return a;
}


// 7-3 반환값이 없는 함수
// 문자와 숫자를 인수로 받으면 문자를 숫자만큼 화면에 출력하는 함수 // 입력 받으면 이 아님.
// 실행결과	@@@@@
#include <stdio.h>

void print_char(char a, int b);

int main(void)
{
	print_char('@', 5);
	return 0;
}

void print_char(char a, int b) {
	int i;

	for (i = 0; i < b; i++) {
		printf("%c", a);
	}
	return;
}

// 7-4 반환값과 매개변수가 모두 없는 함수
// 일정한 문자열을 여러 번 출력하는 함수
// 실행결과 -------------------------
//			학번	이름	전공	학점
//			-------------------------
#include <stdio.h>

void print_line(void);

int main(void)
{
	print_line();
	printf("학번    이름    전공    학점\n");
	print_line();

	return 0;
}

void print_line(void) {
	int i;
	for (i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");												// 개행 !!
}

// 7-5 재귀호출 함수
// apple 을 출력하는 재귀 호출 함수
// 실행결과 apple
//			apple
//			...
#include <stdio.h>

void fruit(void);

int main(void)
{
	fruit();

	return 0;
}

void fruit(void) {
	printf("apple\n");
	fruit();
}


// 7-6 3번 실행되는 재귀호출 함수
// #7-5 에서 3번만 호출되고 종료되도록
// 실행결과	apple
//			apple
//			apple

#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count) {
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
}

// 7-7 3번 실행되는 재귀호출 함수 2
#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count) {
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
	printf("jam\n");
}

// 8-1 배열의 선언
// 배열을 하나 선언한 다음 5명의 나이를 저장하고 사용
// 실행결과 50
//			30
//			50
//			쓰레기값.
#include <stdio.h>

int main(void)
{
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);

	return 0;
}


// 8-2 배열과 반복문을 사용한 성적 처리 프로그램
// 배열 요소가 5개인 배열에 정수르 입력하자
// 실행결과	80 95 84 100
//			80	95	77	84	100
//			평균 : 87.2

#include <stdio.h>

int main(void)
{
	int i;
	int score[5];
	int total = 0;
	double avg;													// 평균 avg 는 double 형

	for (i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 5; i++) {
		total += score[i];
	}
	avg = total / 5.0;
	for (i = 0; i < 5; i++) {
		printf("%5d", &score[i]);
	}
	printf("\n");
	printf("평균 : %.1lf\n", avg);								// 평균 avg는 %.1lf으로 출력

	return 0;
}


// 8-3 sizeof 연산자를 사용한 배열
// #8-2를 sizeof 연산자를 사용하여 수정하세요 (count)

#include <stdio.h>

int main(void)
{
	int i;
	int score[5];
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++) {
		scanf("%d", &score[i]);
	}
	for (i = 0; i < count; i++) {
		total += score[i];
	}
	avg = total / 5.0;
	for (i = 0; i < count; i++) {
		printf("%5d", &score[i]);
	}
	printf("\n");
	printf("평균 : %.1lf\n", avg);

	return 0;
}


// 8-4 문자열을 저장하는 char형 배열 (널문자)
#include <stdio.h>

int main(void)
{
	char str[80] = "applejam";
	
	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	return 0;
}


// 8-5 문자열을 대입하는 strcpy 함수
// char 형 배열 초기화 이후 새로운 문자열 저장
// 실행결과 tiger, tiger
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = 'cat';
	char str2[80];

	strcpy(str1, "tigger");
	strcpy(str2, str1);
	printf("%s %s\n", str1, str2);

	return 0;
}


// 8-6 빈칸을 포함한 문자열 입력
#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	puts("입력된 문자열 : ");
	puts(str);

	return 0;
}

// 9-1 변수의 메모리 주소 확인
// 주소 연산자 &의 사용법을 익히고 변수가 할당된 메모리의 상태를 확인해보겠습니다
#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	printf("int 주소: %u\n", &a);
	printf("double 주소: %u\n", &b);
	printf("char 주소: %u\n", &c);

	return 0;
}


// 9-2 포인터의 선언과 활용
#include <stdio.h>

int main(void)
{
	int a;
	int* pa;

	pa = &pa;
	*pa = 10;

	printf("포인터 %d\n", *pa);
	printf("변수명 %d\n", a);

	return 0;
}


// 9-3 포인터를 사용한 두 정수의 합과 평균 계산
// 실행결과 두 정수의 값 : 10, 15
//			두 정수의 합 : 25
//			두 정수의 평균 : 12.5
#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;
}


// 9-5 주소와 포인터의 크기
// 주소와 포인터의 크기는 sizeof 연산자로 확인할 수 있습니다
#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* in = &in;
	double* db = &db;

	printf("char 변수 주소 크기 : %d\n", sizeof(&ch));
	printf("int 변수 주소 크기 : %d\n", sizeof(&in));
	printf("double 변수 주소 크기 : %d\n", sizeof(&db));

	// 생략

	return 0;
}


// 9-7 포인터를 사용한 두 변수의 값 교환
// 두 변수의 값을 바꾸는 함수 swap 함수
// 실행결과 a:20, b:10
#include <stdio.h>

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;
	swap(&a, &b);

	printf("a: %d, b: %d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb) {
	int temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

// 9-9 변수의 값을 인수로 주는 경우
// main 함수에서 a, b의 값을 swap 함수의 인수로 주는방법 -> 불가능인데?


// 10-1 배열명에 정수 연산을 수행하여 배열 요소 사용
// 배열명을 주소로 활용하는 예
#include <stdio.h>

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0);

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}

	return 0;
}


// 10-2 배열명처럼 사용되는 포인터
#include <stdio.h>

int main(void)
{
	int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++) {
		printf("%5d", pa[i]);
	}

	return 0;
}


// 10-4 포인터의 뺄셈과 관계 연산
#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}


// 10-5 배열의 처리하는 함수
#include <stdio.h>

void print_ary(int* pa);

int main(void)
{
	int ary[5] = { 10, 20 ,30 ,40 ,50 };
	print_ary(ary);

	return 0;
}

void print_ary(int* pa) {
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d ", pa[i]);
	}
}


// 10-6 크기가 다른 배열을 출력하는 함수
// 배열 요소의 개수가 달라도 원하는 배열을 출력할 수 있는 함수
#include <stdio.h>

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10,20,30,40,50 };
	int ary2[7] = { 10,20,30,40,50,60,70 };

	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, 7);

	return 0;
}

void print_ary(int* pa, int size) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%d ", pa[i]);
	}
}


// 10-7 배열에 값을 입력하는 함수
// 실수 배열에 값을 입력하는 함수와 최댓값을 찾는 함수
// 실행결과	5개의 실수값 입력 : 3.4 0.5 1.7 5.2 2.0 
//			배열의 최댓값 : 5.2

#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size) {
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++) {
		scanf("%lf", pa + i);
	}
}

double find_max(double* pa, int size) {
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++) {
		if (pa[i] > max) max = pa[i];
	}

	return max;
}