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

////예제 4-8
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;
//	float result;
//
//	printf("정수 2개를 입력하세요: \n");
//	printf("첫 번째 정수 num1 = ");
//	scanf_s("%d", &num1);
//	printf("두 번째 정수 num2 = ");
//	scanf_s("%d", &num2);
//
//	result = (double)num1 / (double)num2;
//	printf("나눗셈 연산 = num1 / num2 = %d / %d = %f\n", num1, num2, result);
//
//	return 0;
//}

////예제 4-7
//#include <stdio.h>
//
//int main(void)
//{
//	float base, height;
//	double result;
//
//	printf("밑변과 높이에 소수 둘째 자리가지 데이터 입력: \n");
//	printf("밑변 입력(cm): ");
//	scanf_s("%f", &base);
//	printf("높이 입력(cm): ");
//	scanf_s("%f", &height);
//
//	result = (base * height) / 2;
//
//	printf("삼각형 넓이(소수 6째 자리까지) 출력: %f\n", result);
//	printf("삼각형 넓이(소수 15째 자리까지) 출력: %.15f\n", result);
//	printf("삼각형 넓이(소수 16째 자리까지) 출력: %.16f\n", result);
//	printf("삼각형 넓이(소수 17째 자리까지) 출력: %.17f\n", result);
//	printf("삼각형 넓이(소수 18째 자리까지) 출력: %.18f\n", result);
//	
//
//	return 0;
//}

////예제 4-12
//#include <stdio.h>
//
//int main(void)
//{
//	char alphabet, add;
//	alphabet = 'A';
//	add = alphabet + 5;
//
//	printf("알파벳 대문자를 문자형 변수에 대입: alphabet = \'A\'\n");
//	printf("처음 대입한 알파벳 출력: %c\n", alphabet);
//	printf("처음 알파벳에 5를 더한 알파벳: %c\n", add);
//	printf("변경된 알파벳의 아스키코드값: %d\n", add);
//
//	return 0;
//}

////에제 4-12 활용
//#include <stdio.h>
//
//int main(void)
//{
//	char alphabet, add;
//
//	printf("알파벳 하나 입력: ");
//	scanf_s("%c", &alphabet);
//
//	add = alphabet + 5;
//
//	printf("알파벳 대문자를 문자형 변수에 대입: alphabet = %c\n", alphabet);
//	printf("처음 대입한 알파벳 출력: %c\n", alphabet);
//	printf("처음 알파벳에 5를 더한 알파벳: %c\n", add);
//	printf("변경된 알파벳의 아스키코드값: %d\n", add);
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
