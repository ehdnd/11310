
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

////추가예제7-12
//#include <stdio.h>
//
//int main(void)
//{
//	int cnt;
//
//	cnt = 0;
//	while (cnt < 30)
//	{
//		cnt++;
//		printf("%3d", cnt);
//
//		if (cnt % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

////추가에제7-13
//#include <stdio.h>
//
//int main(void)
//{
//	int su, cnt = 1, hap = 0;
//
//	printf("어디까지합: ");
//	scanf_s("%d", &su);
//
//	do
//	{
//		hap += cnt;
//		printf("%d회 실행: 누적합은 %d\n", cnt, hap);
//		cnt++;
//	} while (cnt <= su);
//
//	printf("1부터 %d까지 누적합: %d\n", su, hap);
//
//	return 0;
//}

////추가예제7-14
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu, cnt = 1;
//	char op;
//
//	do
//	{
//		printf("%d회 실행");
//		printf("Y / N\n");
//
//		scanf_s("%c", &op, sizeof(op));
//
//		if (op == 'N' || op == 'n')
//		{
//			printf("%d회 후 종료\n", cnt);
//			break;
//		}
//		else if (op == 'Y' || op == 'y')
//		{
//		re_jumsu:
//			printf("점수입력: ");
//			scanf_s("%d", &jumsu);
//
//			if (jumsu <= 100 && jumsu >= 90) printf("A학점\n\n");
//			else if (jumsu < 90 && jumsu >= 80) printf("B학점\n\n");
//			else if (jumsu < 80 && jumsu >= 70) printf("C학점\n\n");
//			else if (jumsu < 70 && jumsu >= 60) printf("D학점\n\n");
//			else if (jumsu < 60 && jumsu >= 0) printf("F학점\n\n");
//			else
//			{
//				printf("%d는 허용구간아님\n", jumsu);
//				goto re_jumsu;
//			}
//			getchar();
//			cnt++;
//		}
//		else
//		{
//			printf("%c는 허용문자아님.\n", op);
//			printf("알파벳 다시입력\n\n");
//			getchar();
//		}
//	} while (1);
//
//	return 0;
//}

////확인문제1
//for (i = -; i, 3; i++)
//{
//	for (j = 0; j < 4; j++)
//	{
//		printf("hlsaf\n");
//	}
//}

////확인문제2
//for (i = -; i, 3; i++)
//{
//	for (j = 0; j < 4; j++)
//	{
//		printf("hlsaf\n");
//		if (j == 2) break;
//	}
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

////추가예제
//#include <stdio.h>
//
//int rand(void)
//{
//	printf("hi\n");
//}
//
//int main(void)
//{
//	printf("6개");
//	printf("rand() :");
//
//	for (int cnt = 1; cnt <= 6; cnt++)
//	{
//		printf("%d", rand());
//
//		printf("\n");
//		printf("rand() %% 45: ");
//
//		for (int cnt = 1; cnt <= 6; cnt++)
//		{
//			printf("%d", cnt);
//		}
//	}
//
//	return 0;
//}