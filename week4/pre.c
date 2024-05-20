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

////#10-1
//#include <stdio.h>
//
//int main(void)
//{
//	int ary[3];
//	int i;
//
//	*(ary + 0) = 10;
//	*(ary + 1) = *(ary + 0) + 10;
//
//	printf("세 번째 배열 요소에 키보드 입력: ");
//	scanf("%d", ary + 2);
//
//	for (i = 0; i < 3; i++) {
//		printf("%5d", *(ary + i));
//	}
//
//	return 0;
//}

////#10-2
//#include <stdio.h>
//
//int main(void)
//{
//	int ary[3];
//	int* pa = ary;
//	int i;
//
//	*pa = 10;
//	*(pa + 1) = 20;
//	pa[2] = pa[0] + pa[1];
//
//	for (i = 0; i < 3; i++) {
//		printf("%5d", pa[i]);
//	}
//
//	return 0;
//}

////#10-3
//#include <stdio.h>
//
//int main(void)
//{
//	int ary[3] = { 10, 20, 30 };
//	int* pa = ary;
//	int i;
//
//	printf("배열의 값: ");
//	for (i = 0; i < 3; i++) {
//		printf("%5d", *pa);
//		pa++;
//	}
//
//	return 0;
//}

////#10-4
//#include <stdio.h>
//
//int main(void)
//{
//	int ary[5] = { 10, 20, 30, 40, 50 };
//	int* pa = ary;
//	int* pb = pa + 3;
//
//	printf("pa: %u\n", pa);
//	printf("pb: %u\n", pb);
//
//	pa++;
//	printf("pb - pa: %u\n", pb - pa);
//
//	printf("앞에 있는 배열 요소의 값 출력: ");
//	if (pa < pb) printf("%d\n", *pa);
//	else printf("%d\n", *pb);
//
//	return 0;
//}

////#10-1 확인문제 3
//#include <stdio.h>
//
//int main(void)
//{
//	double ary[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
//	double* pa = ary;
//	double* pb = ary + 2;
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		printf("%.1lf ", *pb);
//		pb++;
//	}
//
//	return 0;
//}

////#10-5
//#include <stdio.h>
//
//void print_ary(int* pa);
//
//int main(void)
//{
//	int ary[5] = { 10, 20, 30, 40, 50 };
//
//	print_ary(ary);
//
//	return 0;
//}
//
//void print_ary(int* pa) {
//	int i;
//
//	for (i = 0; i < 5; i++) {
//		printf("%d ", pa[i]);
//	}
//}

////#10-6
//#include <stdio.h>
//
//void print_ary(int* pa, int size);
//
//int main(void)
//{
//	int ary1[5] = { 10, 20, 30, 40, 50 };
//	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };
//
//	print_ary(ary1, 5);
//	printf("\n");
//	print_ary(ary2, 7);
//
//	return 0;
//}
//
//void print_ary(int* pa, int size) {
//	int i;
//
//	for (i = 0; i < size; i++) {
//		printf("%d ", pa[i]);
//	}
//}

//#10-7
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
	printf("배열의 최댓값: %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size) {
	int i;

	printf("%d개의 실수값 입력: ", size);
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