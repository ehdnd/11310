#define _CRT_SECURE_NO_WARNINGS

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

////Ȯ�ι���2
//#include <stdio.h>
//
//int main(void)
//{
//	int n;
//	printf("���� �Է�: ");
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("����");
//		break;
//
//	default:
//		printf("��");
//		break;
//	}
//
//	return 0;
//}

////Ȯ�ι���3
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
//	printf("������� %c�Դϴ�. \n", size);
//
//	return 0;
//}

//������������ 
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

////Ȯ�ι���1
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

////Ȯ�ι���2
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

////Ȯ�ι���3
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

////#6-5
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int sum = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		sum += i;
//		if (sum > 30) break;
//	}
//	printf("������ ��: %d\n", sum);
//	printf("���������� ���� ��: %d\n", i);
//
//	return 0;
//}

////Ȯ�ι���3
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if ((i == j) || (i + j == 4))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//������������


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

////Ȯ�ι���3
//#include <stdio.h>
//
//double centi_to_meter(int centi);
//
//int main(void)
//{
//	double res;
//
//	res = centi_to_meter(187);
//	printf("%.2lfm\n", res);
//
//	return 0;
//}
//
//double centi_to_meter(int centi)
//{
//	double meter;
//
//	meter = centi / 100.0;
//
//	return meter;
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

////Ȯ�ι���3
//#include <stdio.h>
//
//int func(int n);
//int poly(int n);
//
//int main(void)
//{
//	printf("%d\n", func(-3));
//
//	return 0;
//}
//
//int func(int n)
//{
//	int res;
//	res = poly(n);
//	if (res >= 0) return res;
//	else return -res;
//}
//
//int poly(int n)
//{
//	return((2 * n * n) + (3 * n));
//}

////��������
//#include <stdio.h>
//
//int rec_func(int n);
//
//int main(void)
//{
//	int a, sum;
//
//	printf("���� �Է�: ");
//	scanf("%d", &a);
//	sum = rec_func(a);
//	printf("��: %d", sum);
//
//	return 0;
//}
//
//int rec_func(int a)
//{
//
//}