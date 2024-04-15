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


////확인문제2
//#include <stdio.h>
//
//int main(void)
//{
//	int n;
//	printf("정수 입력: ");
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("거짓");
//		break;
//
//	default:
//		printf("참");
//		break;
//	}
//
//	return 0;
//}

////확인문제3
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
//	printf("사이즈는 %c입니다. \n", size);
//
//	return 0;
//}

//도전실전예제 
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

////#6 확인문제1
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

////#6 확인문제2
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

////#6 확인문제3
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
//	printf("누적한 값: %d\n", sum);
//	printf("마지막으로 더한 값: %d\n", i);
//
//	return 0;
//}

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
//	printf("반환값: %d\n", result);
//
//	return 0;
//}
//
//int get_num(void)
//{
//	int num;
//
//	printf("양수 입력: ");
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
//	printf("학번\t이름\t전공\t학점\n");
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

////확인문제2
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
//	printf("1부터 %d까지의 합은 %d입니다.\n", num, sum);
//}

////확인문제3
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

////#8-1
//#include <stdio.h>
//
//int main(void)
//{
//	int ary[5];
//
//	ary[0] = 10;
//	ary[1] = 20;
//	ary[2] = ary[0] + ary[1];
//	scanf("%d", &ary[3]);
//
//	printf("%d\n", ary[2]);
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]);
//
//	return 0;
//}

////#8-3
//#include <stdio.h>
//
//int main(void)
//{
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		total += score[i];
//	}
//	avg = total / 5.0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%5d", score[i]);
//	}
//	printf("\n");
//
//	printf("평균: %.1lf", avg);
//
//	return 0;
//}

////#8-3
//#include <stdio.h>
//
//int main(void)
//{
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//
//	count = sizeof(score) / sizeof(score[0]);
//
//	for (i = 0; i < count; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		total += score[i];
//	}
//	avg = total / (double)count;
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", score[i]);
//	}
//	printf("\n");
//
//	printf("평균: %.1lf\n", avg);
//
//	return 0;
//}

////#확인문제3
//#include <stdio.h>
//
//int main(void)
//{
//	int A[3] = { 1, 2, 3 };
//	int B[10];
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		B[i] = (i % 3 + 1);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%5d", B[i]);
//	}
//
//	return 0;
//}

////확인문제3_정답
//#include <stdio.h>
//
//int main(void)
//{
//	int A[3] = { 1, 2, 3 };
//	int B[10];
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		B[i] = A[i % 3];
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%5d", B[i]);
//	}
//
//	return 0;
//}

////#8-4
//#include <stdio.h>
//
//int main(void)
//{
//	char str[80] = "applejam";
//
//	printf("최초 문자열: %s\n", str);
//	printf("문자열 입력: ");
//	scanf("%s", str);
//	printf("입력후 문자열: %s\n", str);
//
//	return 0;

////#8-5
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[80] = "cat";
//	char str2[80];
//
//	strcpy(str1, "tiger");
//	strcpy(str2, str1);
//	printf("%s, %s\n", str1, str2);
//
//	return 0;
//}

////#8-6
//#include <stdio.h>
//
//int main(void)
//{
//	char str[80];
//
//	printf("문자열 입력: ");
//	gets(str);
//	puts("입력된 문자열: ");
//	puts(str);
//
//	return 0;
//}

////#8-7
//#include <stdio.h>
//
//int main(void)
//{
//	char str[5];
//
//	str[0] = 'O';
//	str[1] = 'K';
//	printf("%s\n", str);
//
//	return 0;
//}

////#확인문제3
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[80], str2[80];
//	char temp[80];
//	
//	printf("두 문자열 입력: ");
//	scanf("%s %s", str1, str2);
//	printf("바꾸기 전: %s, %s\n", str1, str2);
//	strcpy(temp, str1);
//	strcpy(str1, str2);
//	strcpy(str2, temp);
//
//	printf("바꾼 후: %s, %s\n", str1, str2);
//
//	return 0;
//}

////도전실전예제
//#include <stdio.h>
//
//int main(void)
//{
//
//
//	return 0;
//}