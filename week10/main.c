#define _CRT_SECURE_NO_WARNINGS

////#7-1
//#include <stdio.h>
//
//int sum(int x, int y);
//
//
//int main(void)
//{
//	int a = 10, b = 20;
//	int result;
//
//	result = sum(a, b);;
//	printf("result: %d\n", result);
//
//	return 0;
//}
//
//int sum(int x, int y)
//{
//	int temp;
//
//	temp = x + y;
//
//	return temp;
//}

////#7-2
//#include <stdio.h>
//
//int get_num(void);
//
//int main(void)
//{
//	int result;
//
//	result = get_num();
//	printf("반환값: %d\n", result);
//
//	return 0;
//}
//
//int get_num(void)
//{
//	int num;
//
//	printf("양수 입력: ");
//	scanf("%d", &num);
//
//	return num;
//}

////#7-3
//#include <stdio.h>
//
//void print_char(char ch, int count);
//
//int main(void)
//{
//	print_char('@', 5);
//
//	return 0;
//}
//
//void print_char(char ch, int count)
//{
//	int i;
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", ch);
//	}
//
//	return;
//}

////#7-4
//#include <stdio.h>
//
//void print_line(void);
//
//int main(void)
//{
//	print_line();
//	printf("학번\t이름\t전공\t학점\n");
//	print_line();
//
//	return 0;
//}
//
//void print_line(void)
//{
//	int i;
//
//	for (i = 0; i < 50; i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//}

////#7-5
//#include <stdio.h>
//
//void fruit(void);
//
//int main(void)
//{
//	fruit();
//
//	return 0;
//}
//
//void fruit(void)
//{
//	printf("apple\n");
//	fruit();
//}

////#7-6
//#include <stdio.h>
//
//void fruit(int count);
//
//int main(void)
//{
//	fruit(1);
//
//	return 0;
//}
//
//void fruit(count)
//{
//	printf("apple\n");
//	if (count == 3) return;
//	fruit(count + 1);
//	printf("jam\n");
//}

////확인문제2
//#include <stdio.h>
//
//int sum(int num);
//
//int main(void)
//{
//	sum(10);
//	sum(100);
//
//	return 0;
//}
//
//int sum(int num)
//{
//	int i;
//	int sum = 0;
//
//	for (i = 1; i <= num; i++)
//	{
//		sum += i;
//	}
//	printf("1부터 %d까지의 합은 %d입니다.\n", num, sum);
//}

////추가예제8-12
//#include <stdio.h>
//
//void Exchange(float a);
//
//int main(void)
//{
//	float input;
//
//	printf("인치를 센티미터로 환산\n");
//	printf("문> 인치 입력: ");
//	scanf_s("%f", &input);
//
//	printf("\n");
//	Exchange(input);
//	printf("\n");
//
//	return 0;
//}
//
//void Exchange(float a)
//{
//	float swap;
//	swap = a * 2.5399;
//	printf("[Exchange () 함수 영역]]\n\n");
//	printf("답> 단위 환산: %.2f 인치 는 %.2lf 센티미터\n", a, swap);
//}

////추가예제8-13
//#include <stdio.h>
//
//char Alpha();
//
//int main(void)
//{
//	char show;
//	printf("알파벳\n");
//
//	show = Alpha();
//	printf("전달받은: %c\n", show);
//	printf("아스키코드: %d\n", show);
//	return 0;
//}
//
//char Alpha() {
//	char ch;
//	printf("알파벳입력: ");
//	scanf_s("%c", &ch, sizeof(ch));
//	return ch;

////추가예제8-14
//#include <stdio.h>
//int Sum(int su);
//
//int main(void)
//{
//	int input, result;
//	printf("1부터 입력받은 수까지 누적 합계 산출\n");
//	printf("---------------------------------\n");
//	printf("메인함수 역할\n");
//	printf("1. 키보드로 정수값 입력받\n");
//	printf("2. 사용자 정의 함수 호출\n");
//	printf("3. 입력받은 정수값을 사용자 정의 함수에 전달\n");
//	printf("4.사용자 정의 함수에서 전달받은 결과값 출력\n");
//	printf("---------------\n");
//	printf("사용자 정의 함수 역할\n");
//	printf("1. 메인 함수로부터 정수값 전달받음\n");
//	printf("2. for문 누적합계산출\n");
//	printf("3.누적 합계를 메인 함수에 반환\n");
//	printf("----------------------\n");
//	printf("질문> 어디까지 누적합을 구할까요 : ");
//
//	scanf_s("%d", &input);
//
//	result = Sum(input);
//	printf("결과> 1부터 %d까지 합 = %d\n", input, result);
//	return 0;
//}
//
//int Sum(int su) {
//	int cnt, hap = 0;
//
//	printf("수행> 1부터 %d까지 누적합 산출반환\n", su);
//	
//	for (cnt = 1; cnt <= su; cnt++) {
//		hap += cnt;
//	}
//	return hap;
//}

////추가예제8-17
//#include <stdio.h>
//
//void Pr_ch(char ch, int num);
//
//int main(void)
//{
//	char input;
//	int n;
//
//	printf("문> 문자와 횟수 정수를 입력: ");
//
//	scanf_s("%c %d", &input, sizeof(input), &n);
//	Pr_ch(input, n);
//	return 0;
//}
//
//void Pr_ch(char ch, int num) {
//	int cnt;
//
//	printf("답> ");
//
//	for (cnt = 0; cnt < num; cnt++) {
//		printf(" %c ", ch);
//	}
//	printf(": %d회 출력완료\n", cnt);
//}

/////추가예제8-18
//#include <stdio.h>
//
//int Call_val(int su);
//
//int main(void)
//{
//	int num = 100, after;
//
//	printf("전> 함수 호출하기 전의 값: %d\n\n", num);
//
//	after = Call_val(num);
//
//	printf("후> 함수 호출 후의 값: %d\n\n", after);
//
//	return 0;
//}
//
//int Call_val(int su) {
//	
//	printf("수행> 전달받은 값 100에 5를 더하여 반환\n\n");
//
//	su += 5;
//	return su;
//}