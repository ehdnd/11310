#define _CRT_SECURE_NO_WARNINGS

////#����
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2; //4����Ʈ ������ ���� ����
//	float result; //4����Ʈ �Ǽ��� ���� ����
//
//	printf("���� 2���� �Է��ϼ���.\n");
//	printf("ù ��° ���� num1 = ");
//	scanf_s("%d", &num1);
//	printf("�� ��° ���� num2 = ");
//	scanf_s("%d", &num2);
//
//	result = (float)num1 / num2; //ĳ��Ʈ�����ڷ� ������Ÿ�� ������ȯ
//	printf("������ ���� = (float)num1 / num2 = %d / %d = %f\n", num1, num2, result);
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

////#�߰����뿹��1
//#include <stdio.h>
//
//int main(void)
//{
//	int varsize = 8;
//
//	printf("������ ���� int varsize = 8 ����\n");
//	printf("1. ���� varsize ũ��: %d����Ʈ\n", sizeof(varsize));
//	printf("2. �ڷ��� char ũ��: %d����Ʈ\n", sizeof(char));
//	printf("3. �ڷ��� short ũ��: %d����Ʈ\n", sizeof(short));
//	printf("4. �ڷ��� int ũ��: %d����Ʈ\n", sizeof(int));
//	printf("5. �ڷ��� float ũ��: %d����Ʈ\n", sizeof(float));
//	printf("6. �ڷ��� double ũ��: %d����Ʈ\n", sizeof(double));
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

////#�߰�����2
//#include <stdio.h>
//#define PI 3.141592
//
//int main(void)
//{
//	float r, area = 0;
//
//	printf("��ȣ ��� PI: 3.141592\n");
//	printf("���� ���� = PI * ������ * ������\n");
//
//	printf("������ �Է� (cm): ");
//	scanf_s("%f", &r);
//	area = PI * r * r;
//
//	printf("������ %fcm�� ���� ���̴� %fcm�Դϴ�.\n", r, area);
//
//	return 0;
//}

////#����3
//#include <stdio.h>
//#define US 1129.50
//
//int main(void)
//{
//	const float FEES = 0.0175;
//	int chsh, fees_chsh;
//	float dollar = 0;
//
//	printf("�޷� ȯ�� US = 1129.50\n");
//	printf("�޷� ���� �������� FEES = 0.0175\n");
//
//	printf("ȯ���� �ݾ�(��ȭ): ");
//	scanf_s("%d", &chsh);
//	dollar = chsh / US;
//	fees_chsh = chsh * FEES;
//
//	printf("ȯ�� �� ��ȭ �ݾ�: $%.2f\n", dollar);
//	printf("ȯ�� ������� ��%d\n", fees_chsh);
//
//	return 0;
//}

////#����4
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
//	printf("���� ���� ���(����): %c\n", ch);
//	printf("���� ���� ���(������): %d\n", ch);
//	printf("int num1 = 3 + 7.8\n");
//	printf("���� ���� ���: %d\n", num1);
//	printf("float num2 = 5 / 3.0\n");
//	printf("������ ���� ���: %f\n", num2);
//
//	return 0;
//}

////����5
//#include <stdio.h>
//
//int main(void)
//{
//	int val, a;
//
//	a = 8;
//	val = ++a;
//	printf("a = 8 �϶� \n");
//	printf("1. val = ++a �̸� val = %d, a = %d\n", val, a);
//
//	a = 8;
//	val = a++;
//	printf("2. val = a++ �̸� val = %d, a = %d\n", val, a);
//
//	a = 8;
//	val = --a;
//	printf("3. val = --a �̸� val = %d, a = %d\n", val, a);
//
//	a = 8;
//	val = a--;
//	printf("4. val = a-- �̸� val = %d, a = %d\n", val, a);
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