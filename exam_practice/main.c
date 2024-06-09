#define _CRT_SECURE_NO_WARNINGS

// 6-1 while�� ����� �ݺ���
// a�� 10���� �������� �ι辿 �ݺ������� �ø�����
// ������ a : 16
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

// 6-2 for���� ����� �ݺ���
// a ���� �� ��� ������Ű�� ������ 3�� �ݺ�
// ������ a : 8
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


// 6-4 ��ø �ݺ����� ����� �� ���
// ������	*****
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
		printf("\n");											// �� �� !!
	}

	return 0;
}

// 6-5 break�� ����� �ݺ��� ����
// 1���� 10���� ���ϴ� ���� ������ 30�� ������ �ߴ�
// ������	������ �� : 36
//			���������� ���� �� : 8
#include <stdio.h>

int main(void)
{
	int total = 0;
	int i;

	for (i = 1; i <= 10; i++) {
		total = i + total;
		if (total >= 30) break;
	}
	printf("������ ��: %d\n", total);
	printf("���������� ���� �� : %d\n", i);

	return 0;
}


// 7-1 �ΰ��� �Լ��� ���� ���α׷�
// �� ���� ���ϴ� �Լ�
// ������	result : 30
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

// 7-2 �Ű������� ���� �Լ�
// Ű����� ���� �Է��ϸ� ����� ��ȯ�ϴ� �Լ�
// ������ ��� �Է� : 10
//			��ȯ�� : 10
#include <stdio.h>

int get_num(void);

int main(void)
{
	int res;

	res = get_num();
	printf("��ȯ�� : %d\n", res);
	return 0;
}
int get_num(void) {
	int a;

	printf("��� �Է� : ");											// ����� �Է¹���
	scanf("%d", &a);

	return a;
}


// 7-3 ��ȯ���� ���� �Լ�
// ���ڿ� ���ڸ� �μ��� ������ ���ڸ� ���ڸ�ŭ ȭ�鿡 ����ϴ� �Լ� // �Է� ������ �� �ƴ�.
// ������	@@@@@
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

// 7-4 ��ȯ���� �Ű������� ��� ���� �Լ�
// ������ ���ڿ��� ���� �� ����ϴ� �Լ�
// ������ -------------------------
//			�й�	�̸�	����	����
//			-------------------------
#include <stdio.h>

void print_line(void);

int main(void)
{
	print_line();
	printf("�й�    �̸�    ����    ����\n");
	print_line();

	return 0;
}

void print_line(void) {
	int i;
	for (i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");												// ���� !!
}

// 7-5 ���ȣ�� �Լ�
// apple �� ����ϴ� ��� ȣ�� �Լ�
// ������ apple
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


// 7-6 3�� ����Ǵ� ���ȣ�� �Լ�
// #7-5 ���� 3���� ȣ��ǰ� ����ǵ���
// ������	apple
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

// 7-7 3�� ����Ǵ� ���ȣ�� �Լ� 2
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

// 8-1 �迭�� ����
// �迭�� �ϳ� ������ ���� 5���� ���̸� �����ϰ� ���
// ������ 50
//			30
//			50
//			�����Ⱚ.
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


// 8-2 �迭�� �ݺ����� ����� ���� ó�� ���α׷�
// �迭 ��Ұ� 5���� �迭�� ������ �Է�����
// ������	80 95 84 100
//			80	95	77	84	100
//			��� : 87.2

#include <stdio.h>

int main(void)
{
	int i;
	int score[5];
	int total = 0;
	double avg;													// ��� avg �� double ��

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
	printf("��� : %.1lf\n", avg);								// ��� avg�� %.1lf���� ���

	return 0;
}


// 8-3 sizeof �����ڸ� ����� �迭
// #8-2�� sizeof �����ڸ� ����Ͽ� �����ϼ��� (count)

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
	printf("��� : %.1lf\n", avg);

	return 0;
}


// 8-4 ���ڿ��� �����ϴ� char�� �迭 (�ι���)
#include <stdio.h>

int main(void)
{
	char str[80] = "applejam";
	
	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
}


// 8-5 ���ڿ��� �����ϴ� strcpy �Լ�
// char �� �迭 �ʱ�ȭ ���� ���ο� ���ڿ� ����
// ������ tiger, tiger
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


// 8-6 ��ĭ�� ������ ���ڿ� �Է�
#include <stdio.h>

int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	return 0;
}

// 9-1 ������ �޸� �ּ� Ȯ��
// �ּ� ������ &�� ������ ������ ������ �Ҵ�� �޸��� ���¸� Ȯ���غ��ڽ��ϴ�
#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	printf("int �ּ�: %u\n", &a);
	printf("double �ּ�: %u\n", &b);
	printf("char �ּ�: %u\n", &c);

	return 0;
}


// 9-2 �������� ����� Ȱ��
#include <stdio.h>

int main(void)
{
	int a;
	int* pa;

	pa = &pa;
	*pa = 10;

	printf("������ %d\n", *pa);
	printf("������ %d\n", a);

	return 0;
}


// 9-3 �����͸� ����� �� ������ �հ� ��� ���
// ������ �� ������ �� : 10, 15
//			�� ������ �� : 25
//			�� ������ ��� : 12.5
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

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;
}


// 9-5 �ּҿ� �������� ũ��
// �ּҿ� �������� ũ��� sizeof �����ڷ� Ȯ���� �� �ֽ��ϴ�
#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* in = &in;
	double* db = &db;

	printf("char ���� �ּ� ũ�� : %d\n", sizeof(&ch));
	printf("int ���� �ּ� ũ�� : %d\n", sizeof(&in));
	printf("double ���� �ּ� ũ�� : %d\n", sizeof(&db));

	// ����

	return 0;
}


// 9-7 �����͸� ����� �� ������ �� ��ȯ
// �� ������ ���� �ٲٴ� �Լ� swap �Լ�
// ������ a:20, b:10
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

// 9-9 ������ ���� �μ��� �ִ� ���
// main �Լ����� a, b�� ���� swap �Լ��� �μ��� �ִ¹�� -> �Ұ����ε�?


// 10-1 �迭�� ���� ������ �����Ͽ� �迭 ��� ���
// �迭���� �ּҷ� Ȱ���ϴ� ��
#include <stdio.h>

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0);

	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}

	return 0;
}


// 10-2 �迭��ó�� ���Ǵ� ������
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


// 10-4 �������� ������ ���� ����
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

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}


// 10-5 �迭�� ó���ϴ� �Լ�
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


// 10-6 ũ�Ⱑ �ٸ� �迭�� ����ϴ� �Լ�
// �迭 ����� ������ �޶� ���ϴ� �迭�� ����� �� �ִ� �Լ�
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


// 10-7 �迭�� ���� �Է��ϴ� �Լ�
// �Ǽ� �迭�� ���� �Է��ϴ� �Լ��� �ִ��� ã�� �Լ�
// ������	5���� �Ǽ��� �Է� : 3.4 0.5 1.7 5.2 2.0 
//			�迭�� �ִ� : 5.2

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
	printf("�迭�� �ִ� : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size) {
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
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