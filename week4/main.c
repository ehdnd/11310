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

////���� 4-8
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;
//	float result;
//
//	printf("���� 2���� �Է��ϼ���: \n");
//	printf("ù ��° ���� num1 = ");
//	scanf_s("%d", &num1);
//	printf("�� ��° ���� num2 = ");
//	scanf_s("%d", &num2);
//
//	result = (double)num1 / (double)num2;
//	printf("������ ���� = num1 / num2 = %d / %d = %f\n", num1, num2, result);
//
//	return 0;
//}

////���� 4-7
//#include <stdio.h>
//
//int main(void)
//{
//	float base, height;
//	double result;
//
//	printf("�غ��� ���̿� �Ҽ� ��° �ڸ����� ������ �Է�: \n");
//	printf("�غ� �Է�(cm): ");
//	scanf_s("%f", &base);
//	printf("���� �Է�(cm): ");
//	scanf_s("%f", &height);
//
//	result = (base * height) / 2;
//
//	printf("�ﰢ�� ����(�Ҽ� 6° �ڸ�����) ���: %f\n", result);
//	printf("�ﰢ�� ����(�Ҽ� 15° �ڸ�����) ���: %.15f\n", result);
//	printf("�ﰢ�� ����(�Ҽ� 16° �ڸ�����) ���: %.16f\n", result);
//	printf("�ﰢ�� ����(�Ҽ� 17° �ڸ�����) ���: %.17f\n", result);
//	printf("�ﰢ�� ����(�Ҽ� 18° �ڸ�����) ���: %.18f\n", result);
//	
//
//	return 0;
//}

////���� 4-12
//#include <stdio.h>
//
//int main(void)
//{
//	char alphabet, add;
//	alphabet = 'A';
//	add = alphabet + 5;
//
//	printf("���ĺ� �빮�ڸ� ������ ������ ����: alphabet = \'A\'\n");
//	printf("ó�� ������ ���ĺ� ���: %c\n", alphabet);
//	printf("ó�� ���ĺ��� 5�� ���� ���ĺ�: %c\n", add);
//	printf("����� ���ĺ��� �ƽ�Ű�ڵ尪: %d\n", add);
//
//	return 0;
//}

////���� 4-12 Ȱ��
//#include <stdio.h>
//
//int main(void)
//{
//	char alphabet, add;
//
//	printf("���ĺ� �ϳ� �Է�: ");
//	scanf_s("%c", &alphabet);
//
//	add = alphabet + 5;
//
//	printf("���ĺ� �빮�ڸ� ������ ������ ����: alphabet = %c\n", alphabet);
//	printf("ó�� ������ ���ĺ� ���: %c\n", alphabet);
//	printf("ó�� ���ĺ��� 5�� ���� ���ĺ�: %c\n", add);
//	printf("����� ���ĺ��� �ƽ�Ű�ڵ尪: %d\n", add);
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
