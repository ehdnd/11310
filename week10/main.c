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
//	printf("��ȯ��: %d\n", result);
//
//	return 0;
//}
//
//int get_num(void)
//{
//	int num;
//
//	printf("��� �Է�: ");
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
//	printf("�й�\t�̸�\t����\t����\n");
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

////Ȯ�ι���2
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
//	printf("1���� %d������ ���� %d�Դϴ�.\n", num, sum);
//}

////�߰�����8-12
//#include <stdio.h>
//
//void Exchange(float a);
//
//int main(void)
//{
//	float input;
//
//	printf("��ġ�� ��Ƽ���ͷ� ȯ��\n");
//	printf("��> ��ġ �Է�: ");
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
//	printf("[Exchange () �Լ� ����]]\n\n");
//	printf("��> ���� ȯ��: %.2f ��ġ �� %.2lf ��Ƽ����\n", a, swap);
//}

////�߰�����8-13
//#include <stdio.h>
//
//char Alpha();
//
//int main(void)
//{
//	char show;
//	printf("���ĺ�\n");
//
//	show = Alpha();
//	printf("���޹���: %c\n", show);
//	printf("�ƽ�Ű�ڵ�: %d\n", show);
//	return 0;
//}
//
//char Alpha() {
//	char ch;
//	printf("���ĺ��Է�: ");
//	scanf_s("%c", &ch, sizeof(ch));
//	return ch;

////�߰�����8-14
//#include <stdio.h>
//int Sum(int su);
//
//int main(void)
//{
//	int input, result;
//	printf("1���� �Է¹��� ������ ���� �հ� ����\n");
//	printf("---------------------------------\n");
//	printf("�����Լ� ����\n");
//	printf("1. Ű����� ������ �Է¹�\n");
//	printf("2. ����� ���� �Լ� ȣ��\n");
//	printf("3. �Է¹��� �������� ����� ���� �Լ��� ����\n");
//	printf("4.����� ���� �Լ����� ���޹��� ����� ���\n");
//	printf("---------------\n");
//	printf("����� ���� �Լ� ����\n");
//	printf("1. ���� �Լ��κ��� ������ ���޹���\n");
//	printf("2. for�� �����հ����\n");
//	printf("3.���� �հ踦 ���� �Լ��� ��ȯ\n");
//	printf("----------------------\n");
//	printf("����> ������ �������� ���ұ�� : ");
//
//	scanf_s("%d", &input);
//
//	result = Sum(input);
//	printf("���> 1���� %d���� �� = %d\n", input, result);
//	return 0;
//}
//
//int Sum(int su) {
//	int cnt, hap = 0;
//
//	printf("����> 1���� %d���� ������ �����ȯ\n", su);
//	
//	for (cnt = 1; cnt <= su; cnt++) {
//		hap += cnt;
//	}
//	return hap;
//}

////�߰�����8-17
//#include <stdio.h>
//
//void Pr_ch(char ch, int num);
//
//int main(void)
//{
//	char input;
//	int n;
//
//	printf("��> ���ڿ� Ƚ�� ������ �Է�: ");
//
//	scanf_s("%c %d", &input, sizeof(input), &n);
//	Pr_ch(input, n);
//	return 0;
//}
//
//void Pr_ch(char ch, int num) {
//	int cnt;
//
//	printf("��> ");
//
//	for (cnt = 0; cnt < num; cnt++) {
//		printf(" %c ", ch);
//	}
//	printf(": %dȸ ��¿Ϸ�\n", cnt);
//}

/////�߰�����8-18
//#include <stdio.h>
//
//int Call_val(int su);
//
//int main(void)
//{
//	int num = 100, after;
//
//	printf("��> �Լ� ȣ���ϱ� ���� ��: %d\n\n", num);
//
//	after = Call_val(num);
//
//	printf("��> �Լ� ȣ�� ���� ��: %d\n\n", after);
//
//	return 0;
//}
//
//int Call_val(int su) {
//	
//	printf("����> ���޹��� �� 100�� 5�� ���Ͽ� ��ȯ\n\n");
//
//	su += 5;
//	return su;
//}