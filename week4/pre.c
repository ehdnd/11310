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
//	printf("������: %.1lf�Դϴ�.\n", tax);
//
//	return 0;
//}


////Ȯ�ι���2
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
////Ȯ�ι���3
//#include <stdio.h>
//
//int main(void)
//{
//	int kor = 70;
//	int eng = 80;
//	int mat = 90;
//
//	int tot = kor + eng + mat;
//	printf("����: %d, ����: %d, ����: %d\n", kor, eng, mat);
//	printf("����: %d", tot);
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
//	printf("�Էµ� ��: %d\n", a);
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
//	printf("���̿� Ű�� �Է��ϼ���: ");
//	scanf("%d%lf", &age, &height);
//	printf("���̴� %d��, Ű�� %.1fcm�Դϴ�.\n", age, height);
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
//	printf("���� �Է�: ");
//	scanf("%c", &grade);
//	printf("�̸� �Է�: ");
//	scanf("%s", name);
//	printf("%s�� ������ %c�Դϴ�.\n", name, grade);
//
//	return 0;
//}

////Ȯ�ι���2
//#include <stdio.h>
//
//int main(void)
//{
//	char fruit[20];
//	int cnt;
//
//	printf("�����ϴ� ����: ");
//	scanf("%s", fruit);
//	printf("�� ��: ");
//	scanf("%d", &cnt);
//	printf("%s�� %d�� �帳�ϴ�.", fruit, cnt);
//
//	return 0;
//}

////Ȯ�ι���3
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//
//	printf("���� �Է�: ");
//	scanf("%c", &ch);
//	printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.", ch, ch);
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
//	printf("a�� ��: %d, b�� ��: %d\n", a, b);
//	printf("����: %d\n", sum);
//	printf("����: %d\n", sub);
//	printf("����: %d\n", mul);
//	printf("a�� ���� ����: %d\n", inv);
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
//	printf("�ʱ갪: a = %d, b =%d\n", a, b);
//	printf("������: (++a) * 3 = %d, (b++) * 3 = %d\n", pre, post);
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

////Ȯ�ι���1
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

////Ȯ�ι���2
//#include <stdio.h>
//
//int main(void)
//{
//	int a, b, tot;
//	double avg;
//
//	printf("�� ������ ����: ");
//	scanf("%d%d", &a, &b);
//	tot = a + b;
//	avg = tot / 2.0;
//
//	printf("���: %.1lf", avg);
//
//	return 0;
//}

////Ȯ�ι���3
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
//	printf("a / b �� ���: %.1lf\n", res);
//
//	a = (int)res;
//	printf("(int) %.1lf�� ���: %d\n", res, a);
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
//	printf("int�� ������ ũ��: %d\n", sizeof(a));
//	printf("double�� ������ ũ��: %d\n", sizeof(b));
//	printf("������ ����� ũ��: %d\n", sizeof(10));
//	printf("������ �ᱣ���� ũ��: %d\n", sizeof(1.5 + 3.4));
//	printf("char �ڷ����� ũ��: %d\n", sizeof(char));
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
//	printf("ū ��: %d\n", res);
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

////Ȯ�ι���1
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

////Ȯ�ι���2
//#include <stdio.h>
//
//int main(void)
//{
//	int seats = 70, audience = 65;
//	double rate;
//
//	rate = (double)audience / (double)seats * 100;
//	printf("�����: %.1lf%%\n", rate);
//
//	return 0;
//}

////Ȯ�ι���3
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
//	printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�.", hour, min, sec);
//
//	return 0;
//}

////������������
//#include <stdio.h>
//
//int main(void)
//{
//	int kg;
//	double cm, BMI, m;
//
//	printf("������(kg)�� Ű(cm)�Է�: ");
//	scanf("%d%lf", &kg, &cm);
//
//	m = cm / 100;
//	BMI = kg / (m * m);
//
//	printf("%s", ((BMI >= 20.0) && (BMI < 25.0)) ? "ǥ���Դϴ�" : "ü�߰����� �ʿ��մϴ�");
//	
//
//	return 0;
//}

////������������_����
//#include <stdio.h>
//
//int main(void)
//{
//	double weight, height, bmi;
//
//	printf("������(kg)�� Ű(cm)�Է�: ");
//	scanf("%lf%lf", &weight, &height);
//
//	height = height / 100.0;
//	bmi = weight / (height * height);
//
//	((bmi >= 20.0) && (bmi < 25.0)) ? printf("ǥ���Դϴ�\n") : printf("ü�߰����� �ʿ��մϴ�\n");
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

////#Ȯ�ι���2
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
//	printf("������� %c", size);
//
//	return 0;
//}

////Ȯ�ι���3
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