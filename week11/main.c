#define _CRT_SECURE_NO_WARNINGS


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

////#8-2
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
////#확인문제3_오답
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

////추가예
//#include <stdio.h>
//
//int main(void)
//{
//	int score[5] = { 87, 92, 89, 98, 78 };
//	int cnt;
//
//	printf("score[5] = { 87, 92, 89, 98, 78 } 배열 요소 출력\n");
//
//	for (cnt = 0; cnt < 5; cnt++) {
//		printf("score[%d] = [%d]\n", cnt, score[cnt]);
//	}
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

////도전실전예제 - 실패
//#include <stdio.h>
//
//int main(void)
//{
//	char str1[80];
//	int i, count;
//
//	printf("문장 입력: ");
//	gets(str1);
//	count = sizeof(str1) / sizeof(str1[0]);
//
//	for (i = 0; i < count; i++)
//	{
//		if ((str1[i] >= 'A') && (str1[i] <= 'Z'))
//		{
//			str1[i] = str1[i] + ('a' - 'A');
//		}
//	}
//
//	printf("바뀐문장: ");
//	puts(str1);
//
//	return 0;
//}

////도전실전예제 정답
//#include <stdio.h>
//
//int main(void)
//{
//    char str[80];
//    int cnt = 0;
//    int i;
//
//    printf("문장 입력 : ");
//    gets(str);
//
//    for (i = 0; str[i] != '\0'; i++)
//    {
//        if ((str[i] >= 'A') && (str[i] <= 'Z'))
//        {
//            str[i] += ('a' - 'A');
//            cnt++;
//        }
//    }
//
//    printf("바뀐 문장 : ");
//    puts(str);
//    printf("바뀐 문자 수 : %d\n", cnt);
//
//    return 0;
//}

////추가예
//#include <stdio.h>
//
//int main(void)
//{
//	int point[] = { 1,2,3,4,5,6,7,8,9 };
//	int count;
//
//	printf("point[]\n\n");
//	
//	count = sizeof(point) / sizeof(point[0]);
//
//	printf("%d", count);
//
//	return 0;
//}