#define _CRT_SECURE_NO_WARNINGS

////#예제
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2; //4바이트 정수형 변수 선언
//	float result; //4바이트 실수형 변수 선언
//
//	printf("정수 2개를 입력하세요.\n");
//	printf("첫 번째 정수 num1 = ");
//	scanf_s("%d", &num1);
//	printf("두 번째 정수 num2 = ");
//	scanf_s("%d", &num2);
//
//	result = (float)num1 / num2; //캐스트연산자로 데이터타입 강제변환
//	printf("나눗셈 연산 = (float)num1 / num2 = %d / %d = %f\n", num1, num2, result);
//
//	return 0;
//}

////확인문제1
//#include <stdio.h>
//
//int main(void)
//{
//	double a = 4.0, b = 1.2;
//
//	printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
//	printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
//	printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
//	printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
//
//	return 0;
//}

////확인문제2
//#include <stdio.h>
//
//int main(void)
//{
//	int a, b, tot;
//	double avg;
//
//	printf("두 과목의 점수: ");
//	scanf("%d%d", &a, &b);
//	tot = a + b;
//	avg = tot / 2.0;
//
//	printf("평균: %.1lf", avg);
//
//	return 0;
//}

////확인문제3
//#include <stdio.h>
//
//int main(void)
//{
//	int kor = 3, eng = 5, mat = 4;
//	int credits, res;
//	double kscore = 3.8, escore = 4.4, mscore = 3.9;
//	double grade;
//
//	credits = kor + eng + mat;
//	grade = (kscore + escore + mscore) / 3;
//
//	res = (credits >= 10) && (grade >= 4.0);
//	printf("%d", res);
//
//	return 0;
//}

////#4-8
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 20, b = 3;
//	double res;
//	
//	res = ((double)a) / ((double)b);
//	printf("a = %d, b = %d\n",a, b);
//	printf("a / b 의 결과: %.1lf\n", res);
//
//	a = (int)res;
//	printf("(int) %.1lf의 결과: %d\n", res, a);
//
//	return 0;
//}

////#4-9
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	double b = 3.4;
//
//	printf("int형 변수의 크기: %d\n", sizeof(a));
//	printf("double형 변수의 크기: %d\n", sizeof(b));
//	printf("정수형 상수의 크기: %d\n", sizeof(10));
//	printf("수식의 결괏값의 크기: %d\n", sizeof(1.5 + 3.4));
//	printf("char 자료형의 크기: %d\n", sizeof(char));
//
//	return 0;
//}

////#추가응용예제1
//#include <stdio.h>
//
//int main(void)
//{
//	int varsize = 8;
//
//	printf("정수형 변수 int varsize = 8 선언\n");
//	printf("1. 변수 varsize 크기: %d바이트\n", sizeof(varsize));
//	printf("2. 자료형 char 크기: %d바이트\n", sizeof(char));
//	printf("3. 자료형 short 크기: %d바이트\n", sizeof(short));
//	printf("4. 자료형 int 크기: %d바이트\n", sizeof(int));
//	printf("5. 자료형 float 크기: %d바이트\n", sizeof(float));
//	printf("6. 자료형 double 크기: %d바이트\n", sizeof(double));
//
//	return 0;
//}

////#4-10
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20;
//	int res = 2;
//
//	a += 20;
//	res *= b + 10;
//
//	printf("a = %d, b = %d\n", a, b);
//	printf("res = %d\n", res);
//
//	return 0;
//}

////#4-11
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20;
//	int res;
//
//	res = (++a, ++b);
//
//	printf("a: %d, b: %d\n", a, b);
//	printf("res: %d\n", res);
//
//	return 0;
//}

////#4-12
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20, res;
//
//	res = (a > b) ? a : b;
//	printf("큰 값: %d\n", res);
//
//	return 0;
//}

////#4-13
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	int b = 12;
//
//	printf("a & b: %d\n", a & b);
//	printf("a ^ b: %d\n", a ^ b);
//	printf("a | b: %d\n", a | b);
//	printf("~a: %d\n", ~a);
//	printf("a << 1: %d\n", a << 1);
//	printf("a >> 2: %d\n", a >> 2);
//
//
//	return 0;
//}

////#4-14
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 5;
//	int res;
//
//	res = a / b * 2;
//	printf("res = %d\n", res);
//
//	res = ++a * 3;
//	printf("res = %d\n", res);
//
//	res = a > b && a != 5;
//	printf("res = %d\n", res);
//
//	res = a % 3 == 0;
//	printf("res = %d\n", res);
//
//	return 0;
//}

////#추가예제2
//#include <stdio.h>
//#define PI 3.141592
//
//int main(void)
//{
//	float r, area = 0;
//
//	printf("기호 상수 PI: 3.141592\n");
//	printf("원의 벏이 = PI * 반지름 * 반지름\n");
//
//	printf("반지름 입력 (cm): ");
//	scanf_s("%f", &r);
//	area = PI * r * r;
//
//	printf("반지름 %fcm인 원의 넓이는 %fcm입니다.\n", r, area);
//
//	return 0;
//}

////#예제3
//#include <stdio.h>
//#define US 1129.50
//
//int main(void)
//{
//	const float FEES = 0.0175;
//	int chsh, fees_chsh;
//	float dollar = 0;
//
//	printf("달러 환율 US = 1129.50\n");
//	printf("달러 구매 수수료율 FEES = 0.0175\n");
//
//	printf("환전할 금액(한화): ");
//	scanf_s("%d", &chsh);
//	dollar = chsh / US;
//	fees_chsh = chsh * FEES;
//
//	printf("환전 후 미화 금액: $%.2f\n", dollar);
//	printf("환전 수수료ㅣ ￦%d\n", fees_chsh);
//
//	return 0;
//}

////#예제4
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//	int num1;
//	float num2;
//	ch = 'A' + 5;
//	num1 = 3 + 7.8;
//	num2 = 5 / 3.0;
//
//	printf("char ch = \'A\' + 5\n");
//	printf("덧셈 연산 결과(문자): %c\n", ch);
//	printf("덧셈 연산 결과(정수형): %d\n", ch);
//	printf("int num1 = 3 + 7.8\n");
//	printf("덧셈 연산 결과: %d\n", num1);
//	printf("float num2 = 5 / 3.0\n");
//	printf("나눗셈 연산 결과: %f\n", num2);
//
//	return 0;
//}

////예제5
//#include <stdio.h>
//
//int main(void)
//{
//	int val, a;
//
//	a = 8;
//	val = ++a;
//	printf("a = 8 일때 \n");
//	printf("1. val = ++a 이면 val = %d, a = %d\n", val, a);
//
//	a = 8;
//	val = a++;
//	printf("2. val = a++ 이면 val = %d, a = %d\n", val, a);
//
//	a = 8;
//	val = --a;
//	printf("3. val = --a 이면 val = %d, a = %d\n", val, a);
//
//	a = 8;
//	val = a--;
//	printf("4. val = a-- 이면 val = %d, a = %d\n", val, a);
//
//	return 0;
//}

////확인문제1
//#include <stdio.h>
//
//int main(void)
//{
//	int res;
//
//	res = sizeof(short) > sizeof(long);
//
//	printf("%s\n", (res == 1) ? "short" : "long");
//
//	return 0;
//}