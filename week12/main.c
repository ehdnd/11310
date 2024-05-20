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
//	printf("int형 변수의 주소: %u\n", &a);
//	printf("double형 변수의 주소: %u\n", &b);
//	printf("char형 변수의 주소: %u\n", &c);
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
//	printf("포인터로 a값 출력: %d\n", *pa);
//	printf("변수명으로 a값 출력: %d\n", a);
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
//	printf("두 정수의 값: %d, %d\n", *pa, *pb);
//	printf("두 정수의 합: %d\n", *pt);
//	printf("두 정수의 평균: %.1lf\n", *pg);
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
//	printf("변수 a값: %d\n", *pa);
//	pa = &b;
//	printf("변수 b값: %d\n", *pa);
//	pa = &a;
//	a = 20;
//	printf("변수 a값: %d\n", *pa);
//
//	return 0;
//}

////#추가예
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 30;
//	int* p = &a;
//
//	printf("1. 포인터 p의 주소값: %u\n", &p);
//	printf("2. 포인터가 가리키는 *p의 데이터값: %d\n", *p);
//
//	*p = 50;
//	printf("1. 포인터 p의 주소값: %u\n", &p);
//	printf("2. 포인터가 가리키는 *p의 데이터값: %d\n", *p);
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
//	printf("char형 변수의 주소 크기: %d\n", sizeof(&ch));
//	printf("nt형 변수의 주소 크기: %d\n", sizeof(&in));
//	printf("double형 변수의 주소 크기: %d\n", sizeof(&db));
//
//	printf("char * 포인터의 크기: %d\n", sizeof(pc));
//	printf("int * 포인터의 크기: %d\n", sizeof(pi));
//	printf("double * 포인터의 크기: %d\n", sizeof(pd));
//
//	printf("char * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pc));
//	printf("int * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pi));
//	printf("double * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pd));
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

////9-2도전실전예제_정답
//#include <stdio.h>
//
//void swap(double* ap, double* bp);               // 두 실수를 바꾸는 함수
//void line_up(double* maxp, double* midp, double* minp);  // 함수의 선언
//
//int main(void)
//{
//    double max, mid, min;
//
//    printf("실수값 세 개 입력 : ");
//    scanf("%lf%lf%lf", &max, &mid, &min);
//
//    line_up(&max, &mid, &min);           // 세 변수의 값을 정렬하는 함수 호출
//    printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);
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
