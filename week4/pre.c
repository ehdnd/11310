#define _CRT_SECURE_NO_WARNINGS

////#3-8
//
//#include <stdio.h>
//
//int main(void)
//{
//	int income = 0;
//	double tax;
//	const double tax_rate = 0.12;
//
//	income = 456;
//	tax = income * tax_rate;
//	printf("세금은: %.1lf입니다.\n", tax);
//
//	return 0;
//}


////확인문제2
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 0;
//
//	a = a + 1;
//	a = a + 2;
//	a = a + 3;
//	printf("a: %d", a);
//
//	return 0;
//}
//
////확인문제3
//#include <stdio.h>
//
//int main(void)
//{
//	int kor = 70;
//	int eng = 80;
//	int mat = 90;
//
//	int tot = kor + eng + mat;
//	printf("국어: %d, 영어: %d, 수학: %d\n", kor, eng, mat);
//	printf("총점: %d", tot);
//
//	return 0;
//}


////#3-9
//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//
//	scanf("%d", &a);
//	printf("입력된 값: %d\n", a);
//
//	return 0;
//}

////#3-10
//#include <stdio.h>
//
//int main(void)
//{
//	int age;
//	double height;
//
//	printf("나이와 키를 입력하세요: ");
//	scanf("%d%lf", &age, &height);
//	printf("나이는 %d살, 키는 %.1fcm입니다.\n", age, height);
//
//	return 0;
//}

////#3-11
//#include <stdio.h>
//
//int main(void)
//{
//	char grade;
//	char name[20];
//
//	printf("학점 입력: ");
//	scanf("%c", &grade);
//	printf("이름 입력: ");
//	scanf("%s", name);
//	printf("%s의 학점은 %c입니다.\n", name, grade);
//
//	return 0;
//}

////확인문제2
//#include <stdio.h>
//
//int main(void)
//{
//	char fruit[20];
//	int cnt;
//
//	printf("좋아하는 과일: ");
//	scanf("%s", fruit);
//	printf("몇 개: ");
//	scanf("%d", &cnt);
//	printf("%s를 %d개 드립니다.", fruit, cnt);
//
//	return 0;
//}

////확인문제3
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//
//	printf("문자 입력: ");
//	scanf("%c", &ch);
//	printf("%c문자의 아스키 코드 값은 %d입니다.", ch, ch);
//
//	return 0;
//}

////#4-1
//#include <stdio.h>
//
//int main(void)
//{
//	int a, b;
//	int sum, sub, mul, inv;
//
//	a = 10;
//	b = 20;
//	sum = a + b;
//	sub = a - b;
//	mul = a * b;
//	inv = -a;
//
//	printf("a의 값: %d, b의 값: %d\n", a, b);
//	printf("덧셈: %d\n", sum);
//	printf("뺄셈: %d\n", sub);
//	printf("곱셈: %d\n", mul);
//	printf("a의 음수 연산: %d\n", inv);
//
//	return 0;
//}

////#4-2
//#include <stdio.h>
//
//int main(void)
//{
//	double apple;
//	int banana;
//	int orange;
//
//	apple = 5.0 / 2.0;
//	banana = 5 / 2;
//	orange = 5 % 2;
//
//	printf("apple: %.1f\n", apple);
//	printf("banana: %d\n", banana);
//	printf("orange: %d\n", orange);
//
//	return 0;
//}

////#4-3
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 10;
//
//	++a;
//	--b;
//
//	printf("a: %d\n", a);
//	printf("b: %d\n", b);
//
//	return 0;
//}

////#4-4
//#include <stdio.h>
//
//int main(void) {
//	int a = 5, b = 5;
//	int pre, post;
//
//	pre = (++a) * 3;
//	post = (b++) * 3;
//
//	printf("초깃값: a = %d, b =%d\n", a, b);
//	printf("전위형: (++a) * 3 = %d, (b++) * 3 = %d\n", pre, post);
//
//	return 0;
//
//}

////#4-5
//#include <stdio.h>
//
//int main(void) {
//	int a = 10, b = 20, c = 10;
//	int res;
//
//	res = (a > b);
//	printf("a > b: %d\n", res);
//	
//	res = (a >= b);
//	printf("a >= b: %d\n", res);
//	
//	res = (a < b);
//	printf("a < b: %d\n", res);
//	
//	res = (a <= b);
//	printf("a <= b: %d\n", res);
//	
//	res = (a <= c);
//	printf("a <= c: %d\n", res);
//	
//	res = (a == b);
//	printf("a == b: %d\n", res);
//	
//	res = (a != c);
//	printf("a != b: %d\n", res);
//
//	return 0;
//	}

////#4-6
//#include <stdio.h>
//
//int main(void) {
//	int a = 30;
//	int res;
//
//	res = (a > 10) && (a < 20);
//	printf("(a > 10) && (a < 20): %d\n", res);
//
//	res = (a < 10) || (a > 20);
//	printf("(a < 10) && (a > 20): %d\n", res);
//	
//
//	res = !(a >= 30);
//	printf("!(a >= 30): %d\n", res);
//
//	return 0;
//}

////#4-7
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20, res;
//
//	a + b;
//	printf("%d + %d = %d\n", a, b, a + b);
//
//	res = a + b;
//	printf("%d + %d = %d", a, b, res);
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

//#5-4