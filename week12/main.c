#define _CRT_SECURE_NO_WARNINGS

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

////#�߰���
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 30;
//	int* p = &a;
//
//	printf("1. ������ p�� �ּҰ�: %u\n", &p);
//	printf("2. �����Ͱ� ����Ű�� *p�� �����Ͱ�: %d\n", *p);
//
//	*p = 50;
//	printf("1. ������ p�� �ּҰ�: %u\n", &p);
//	printf("2. �����Ͱ� ����Ű�� *p�� �����Ͱ�: %d\n", *p);
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
