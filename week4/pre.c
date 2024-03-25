#define _CRT_SECURE_NO_WARNINGS

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

////확인문제2
//#include <stdio.h>
//
//int main(void)
//{
//	int seats = 70, audience = 65;
//	double rate;
//
//	rate = (double)audience / (double)seats * 100;
//	printf("입장률: %.1lf%%\n", rate);
//
//	return 0;
//}

////확인문제3
//#include <stdio.h>
//
//int main(void)
//{
//	int hour, min, sec;
//	double time = 3.76;
//
//	hour = (int)time;
//	time -= hour;
//	time *= 60.0;
//	min = (int)time;
//	time -= min;
//	time *= 60.0;
//	sec = (int)time;
//
//	printf("3.76시간은 %d시간 %d분 %d초입니다.", hour, min, sec);
//
//	return 0;
//}

////도전실전예제
//#include <stdio.h>
//
//int main(void)
//{
//	int kg;
//	double cm, BMI, m;
//
//	printf("몸무게(kg)와 키(cm)입력: ");
//	scanf("%d%lf", &kg, &cm);
//
//	m = cm / 100;
//	BMI = kg / (m * m);
//
//	printf("%s", ((BMI >= 20.0) && (BMI < 25.0)) ? "표준입니다" : "체중관리가 필요합니다");
//	
//
//	return 0;
//}

////도전실전예제_정답
//#include <stdio.h>
//
//int main(void)
//{
//	double weight, height, bmi;
//
//	printf("몸무게(kg)와 키(cm)입력: ");
//	scanf("%lf%lf", &weight, &height);
//
//	height = height / 100.0;
//	bmi = weight / (height * height);
//
//	((bmi >= 20.0) && (bmi < 25.0)) ? printf("표준입니다\n") : printf("체중관리가 필요합니다\n");
//
//
//	return 0;
//}

////#5-1
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 20;
//	int b = 0;
//
//	if (a > 10)
//	{
//		b = a;
//	}
//
//	printf("a: %d, b: %d\n", a, b);
//
//	return 0;
//}

////#5-2
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//
//	if (a >= 0)
//	{
//		a = 1;
//	}
//	else
//	{
//		a = -1;
//	}
//
//	printf("a: %d\n", a);
//
//	return 0;
//}

////#5-3
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0;
//
//	if (a > 0)
//	{
//		b = 1;
//	}
//	else if (a == 0)
//	{
//		b = 2;
//	}
//	else
//	{
//		b = 3;
//	}
//
//	printf("b: %d\n", b);
//
//	return 0;
//}

////#확인문제2
//#include <stdio.h>
//
//int main(void)
//{
//	int chest = 95;
//	char size;
//	if (chest <= 90)
//	{
//		size = 'S';
//	}
//	else if (chest <= 100)
//	{
//		size = 'M';
//	}
//	else 
//	{
//		size = 'L';
//	}
//
//	printf("사이즈는 %c", size);
//
//	return 0;
//}

////확인문제3
//#include <stdio.h>
//
//int main(void)
//{
//	double height = 179.5;
//	double weight = 75.0;
//	if ((height >= 187.5) && (weight < 80.0))
//	{
//		printf("ok\n");
//	}
//	else
//	{
//		printf("cancel\n");
//	}
//
//	return 0;
//}

////#5-4
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 20, b = 10;
//
//	if (a > 10)
//	{
//		if (b >= 0)
//		{
//			b = 1;
//		}
//		else
//		{
//			b = -1;
//		}
//	}
//
//	printf("a: %d, b: %d\n", a, b);
//
//	return 0;
//}

////#5-5
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20;
//
//	if (a < 0)
//	{
//		if (b > 0)
//		{
//			printf("ok");
//		}
//	}
//	else
//	{
//		printf("ok");
//	}
//
//	return 0;
//}

////#5-6
//#include <stdio.h>
//
//int main(void)
//{
//	int rank = 2, m = 0;
//
//	switch (rank)
//	{
//	case 1:
//		m = 300;
//		break;
//	case 2:
//		m = 200;
//		break;
//	case 3:
//		m = 100;
//		break;
//	default:
//		m = 10;
//		break;
//	}
//
//	printf("m: %d\n", m);
//
//	return 0;
//}

////확인문제2
//#include <stdio.h>
//
//int main(void)
//{
//	int n;
//	printf("정수 입력: ");
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("거짓");
//		break;
//
//	default:
//		printf("참");
//		break;
//	}
//
//	return 0;
//}

////확인문제3
//#include <stdio.h>
//
//int main(void)
//{
//	int age = 25, chest = 95;
//	char size;
//
//	if (age < 20)
//	{
//		if (chest < 85) size = 'S';
//		else if (chest < 95) size = 'M';
//		else size = 'L';
//	}
//	else
//	{
//		if (chest < 90) size = 'S';
//		else if (chest < 100) size = 'M';
//		else size = 'L';
//	}
//
//	printf("사이즈는 %c입니다. \n", size);
//
//	return 0;
//}

//도전실전예제 
////////////////////////////

////#6-1
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 1;
//
//		while (a < 10)
//		{
//			a = a * 2;
//		}
//
//		printf("a: %d\n", a);
//
//	return 0;
//}

////#6-2
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 1;
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		a = a * 2;
//	}
//	printf("a: %d\n", a);
//
//	return 0;
//}

////#6-3
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 1;
//
//	do
//	{
//		a = a * 2;
//	} while (a < 10);
//	printf("a: %d\n", a);
//
//	return 0;
//}

////확인문제1
//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//	
//	do
//	{
//		scanf("%d", &a);
//	} while (a < 0);
//
//	return 0;
//}

////확인문제2
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("Be happy!\n");
//	}
//
//	return 0;
//}

////확인문제3
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("$");
//	}
//
//	return 0;
//}

////#6-4
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

