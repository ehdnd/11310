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

///////////////////////////////////////////////////

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

//////////////////////////////////////////////

//#5-2������������ 

/////////////////////////////////////////////

////#6-2Ȯ�ι���3
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


////#6-3������������


////�� ���� ���� - �ƴѵ�
//#include <stdio.h>
//
//int main(void)
//{
//	int a, i;
//
//	printf("���� �Է�: ");
//	scanf("%d", &a);
//
//	for (i = 2; i < a; i++) {
//
//		if ((a % i) == 0)
//		{
//			a = 0;
//			break;
//		}
//	}
//	if (a != 0) printf("%5d", a);
// 
// return 0;
//}

///�� ���� ���� 2 - �̰ǰ�

//#include <stdio.h>
//
//int main(void)
//{
//	int a, i;
//
//	scanf("%d", &a);
//
//	for (i = 2; i < a; i++)
//	{
//		if ((a % i) == 0) break;
//	}
//
//	if (i == a)
//	{
//		printf("%5d", a);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int input_num, every_num, i;
//
//	printf("2 �̻��� ������ �Է��ϼ���: ");
//	scanf("%d", &input_num);
//
//	for (every_num = 2; every_num < input_num; every_num++)
//	{
//		for (i = 2; i < every_num; i++)
//		{
//			if ((every_num % i) == 0) break;		
//		}
//
//		if (i == every_num)
//		{
//			printf("%5d", every_num);
//		}
//	}
//	return 0;
//}


/////#6-2������������ - �ش�

//#include <stdio.h>
//
//int main(void) {
//    int num;
//    int i, j;
//    int pn;
//    int cnt = 0;
//
//    printf("2�̻��� ������ �Է��ϼ��� : ");
//    scanf("%d", &num);
//
//    for (i = 2; i <= num; i++) 
//    {
//        pn = 1;
//        for (j = 2; j < i; j++) 
//        {
//            if ((i % j) == 0) 
//            {
//                pn = 0;
//                break;
//            }
//        }
//        if (pn == 1) 
//        {
//            printf("%5d", i);
//            cnt++;
//            if ((cnt % 5) == 0) 
//            {
//                printf("\n");
//            }
//        }
//    }
//    return 0;
//}

/////////////////////////////////////////

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

///////////////////////////////////////

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

///////////////////////////////////

////9-1
//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//	double b;
//	char c;
//
//	printf("int�� ������ �ּ�: %u\n", &a);
//	printf("double�� ������ �ּ�: %u\n", &b);
//	printf("char�� ������ �ּ�: %u\n", &c);
//
//	return 0;
//}

////9-2
//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//	int* pa;
//
//	pa = &a;
//	*pa = 10;
//
//	printf("�����ͷ� a�� ���: %d\n", *pa);
//	printf("���������� a�� ���: %d\n", a);
//
//	return 0;
//}

////9-3
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 15, total;
//	double avg;
//	int* pa, * pb;
//	int* pt = &total;
//	double* pg = &avg;
//
//	pa = &a;
//	pb = &b;
//
//	*pt = *pa + *pb;
//	*pg = *pt / 2.0;
//
//	printf("�� ������ ��: %d, %d\n", *pa, *pb);
//	printf("�� ������ ��: %d\n", *pt);
//	printf("�� ������ ���: %.1lf\n", *pg);
//
//	return 0;
//}

////9-4
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20;
//	const int* pa = &a;
//
//	printf("���� a��: %d\n", *pa);
//	pa = &b;
//	printf("���� b��: %d\n", *pa);
//	pa = &a;
//	a = 20;
//	printf("���� a��: %d\n", *pa);
//
//	return 0;
//}

////9-5
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//
//	printf("char�� ������ �ּ� ũ��: %d\n", sizeof(&ch));
//	printf("nt�� ������ �ּ� ũ��: %d\n", sizeof(&in));
//	printf("double�� ������ �ּ� ũ��: %d\n", sizeof(&db));
//
//	printf("char * �������� ũ��: %d\n", sizeof(pc));
//	printf("int * �������� ũ��: %d\n", sizeof(pi));
//	printf("double * �������� ũ��: %d\n", sizeof(pd));
//
//	printf("char * �����Ͱ� ����Ű�� ������ ũ��: %d\n", sizeof(*pc));
//	printf("int * �����Ͱ� ����Ű�� ������ ũ��: %d\n", sizeof(*pi));
//	printf("double * �����Ͱ� ����Ű�� ������ ũ��: %d\n", sizeof(*pd));
//
//	return 0;
//}

////9-6
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	int* p = &a;
//	double* pd;
//
//	pd = p;
//	printf("%lf\n", *pd);
//
//	return 0;
//}

////9-7
//#include <stdio.h>
//
//void swap(int* pa, int* pb);
//
//int main(void)
//{
//	int a = 10, b = 20;
//
//	swap(&a, &b);
//	printf("a: %d, b: %d\n", a, b);
//
//	return 0;
//}
//
//void swap(int* pa, int* pb) {
//	int temp;
//
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}

////9-8
//#include <stdio.h>
//
//void swap(void);
//
//int main(void)
//{
//	int a = 10, b = 20;
//
//	swap();
//	printf("a: %d, b: %d\n", a, b);
//
//	return 0;
//}
//
//void swap() {
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}

////9-9
//#include <stdio.h>
//
//void swap(int x, int y);
//
//int main(void)
//{
//	int a = 10, b = 20;
//
//	swap(a, b);
//	printf("a: %d, b: %d\n", a, b);
//
//	return 0;
//}
//
//void swap(int x, int y) {
//	int temp;
//
//	temp = x;
//	x = y;
//	y = temp;
//}

////9-2������������_����
//#include <stdio.h>
//
//void swap(double* ap, double* bp);               // �� �Ǽ��� �ٲٴ� �Լ�
//void line_up(double* maxp, double* midp, double* minp);  // �Լ��� ����
//
//int main(void)
//{
//    double max, mid, min;
//
//    printf("�Ǽ��� �� �� �Է� : ");
//    scanf("%lf%lf%lf", &max, &mid, &min);
//
//    line_up(&max, &mid, &min);           // �� ������ ���� �����ϴ� �Լ� ȣ��
//    printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);
//
//    return 0;
//}
//
//void swap(double* ap, double* bp)
//{
//    double temp;
//
//    temp = *ap;
//    *ap = *bp;
//    *bp = temp;
//}
//
//void line_up(double* maxp, double* midp, double* minp)
//{
//    if (*maxp < *midp) swap(maxp, midp);
//    if (*maxp < *minp) swap(maxp, minp);
//    if (*midp < *minp) swap(midp, minp);
//}

