#define _CRT_SECURE_NO_WARNINGS

////도전실전예제
//#include <stdio.h>
//
//int main(void)
//{
//	int kg;
//	double cm, BMI, m;
//
//	printf("몸무게(kg)와 키(cm)입력: ");
//	scanf("%d%lf", &kg, &cm);
//
//	m = cm / 100;
//	BMI = kg / (m * m);
//
//	printf("%s", ((BMI >= 20.0) && (BMI < 25.0)) ? "표준입니다" : "체중관리가 필요합니다");
//	
//
//	return 0;
//}

////도전실전예제_정답
//#include <stdio.h>
//
//int main(void)
//{
//	double weight, height, bmi;
//
//	printf("몸무게(kg)와 키(cm)입력: ");
//	scanf("%lf%lf", &weight, &height);
//
//	height = height / 100.0;
//	bmi = weight / (height * height);
//
//	((bmi >= 20.0) && (bmi < 25.0)) ? printf("표준입니다\n") : printf("체중관리가 필요합니다\n");
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

//#5-2도전실전예제 

/////////////////////////////////////////////

////#6-2확인문제3
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


////#6-3도전실전예제


////한 정수 판정 - 아닌듯
//#include <stdio.h>
//
//int main(void)
//{
//	int a, i;
//
//	printf("정수 입력: ");
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

///한 정수 판정 2 - 이건가

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
//	printf("2 이상의 정수를 입력하세요: ");
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


/////#6-2도전실전예제 - 해답

//#include <stdio.h>
//
//int main(void) {
//    int num;
//    int i, j;
//    int pn;
//    int cnt = 0;
//
//    printf("2이상의 정수를 입력하세요 : ");
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

////확인문제3
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

////도전문제
//#include <stdio.h>
//
//int rec_func(int n);
//
//int main(void)
//{
//	int a, sum;
//
//	printf("정수 입력: ");
//	scanf("%d", &a);
//	sum = rec_func(a);
//	printf("합: %d", sum);
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

