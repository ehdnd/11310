#define _CRT_SECURE_NO_WARNINGS

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

////추가예제7-1
//#include <stdio.h>
//
//int main(void)
//{
//	int count;
//
//	for (count = 0; count < 10; count++)
//	{
//		printf("%02d회 출력: 안녕하셍.\n", count + 1); //%02d: 2개씩 일정한 서식 지정?
//	}
//
//	return 0;
//}

//추가예제7-2
//#include <stdio.h>
//
//int main(void)
//{
//	int count, hap = 0;
//
//	for (count = 1; count <= 10; count++)
//	{
//		hap += count;
//		printf("%02d까지 누적합 출력: hap = %02d\n", count, hap);
//	}
//	printf("1 + 2 + ~ + 9 + 10 = %02d\n", hap);
//
//	return 0;
//}
//

////추가예제7-3
//#include <stdio.h>
//
//int main(void)
//{
//	int count, hap = 0;
//
//	for (count = 1; count <= 10; count += 2) {
//		hap += count;
//		printf("%02d까지 홀수의 누적합 출력: hap = %02d\n", count, hap);
//	}
//	printf("1부터 10까지 홀수의 누적합 = %02d\n", hap);
//
//	return 0;
//}

////추가예제7-4
//#include <stdio.h>
//
//int main(void)
//{
//	int count, su, hap = 0;
//
//	printf("어디까지 5의배수?: ");
//	scanf("%d", &su);
//
//	for (count = 5; count <= su; count += 5)
//	{
//		hap += count;
//		printf("%d까지 5의 배수 누적 합계 출력: %03d\n", count, hap);
//	}
//	printf("%d까지 5의 배수 누적 합계 = %d", su, hap);
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

////추가예제7-6
//#include <stdio.h>
//
//int main(void)
//{
//	int dan, cnt, gob;
//
//replay:
//	printf("알고 싶은 구구단 입력(2~99): ");
//	scanf("%d", &dan);
//
//	if ((dan >= 100) || (dan < 2))
//	{
//		printf("허용되는 구구단 범위가 아닙니다.\n");
//		printf("프로그램 다시실행.\n");
//		goto replay;
//	}
//	else
//	{
//		for (cnt = 1; cnt <= 9; cnt++)
//		{
//			gob = dan * cnt;
//			printf("%d x %d = %03d\n", dan, cnt, gob);
//		}
//		printf("%d단을 출력함\n", dan);
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

////추가예제7-7
//#include <stdio.h>
//
//int main(void)
//{
//	int dan, cnt, gob;
//
//	for (dan = 2; dan <= 9; dan++)
//	{
//		for (cnt = 1; cnt <= 9; cnt++)
//		{
//			gob = dan * cnt; 
//			printf("%d x %d = %02d", dan, cnt, gob);
//			printf(": outer for loop = %d, inner for loop = %d\n", dan, cnt);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////추가예제7-8
//#include <stdio.h>
//
//int main(void)
//{
//	int cnt, star;
//
//	for (cnt = 1; cnt <= 5; cnt++)
//	{
//		printf("%d행", cnt);
//		for (star = 1; star <= cnt; star++)
//		{
//			printf(" * ");
//		}
//		printf("1개부터 %d개까지 반복출력\n", cnt);
//	}
//
//	return 0;
//}

////추가예제7-9
//#include <stdio.h>
//
//int main(void)
//{
//	int cnt, star, su = 5;
//
//	for (cnt = 1; cnt <= 5; cnt++)
//	{
//		printf("%d행", cnt);
//		for (star = 5; star >= cnt; star--)
//		{
//			printf(" * ");
//		}
//		printf("1개부터 %d개까지 반복출력\n", su--);
//	}
//
//	return 0;
//}

////추가예제7-10
//#include <stdio.h>
//
//int main(void)
//{
//	int su, cnt, hap = 0;
//
//re:
//	printf("어디까지 합 구해?");
//	scanf("%d", &su);
//
//	if (su < 0)
//	{
//		printf("음의정수 X\n");
//		printf("프로그램 다시실행\n");
//
//		goto re;
//	}
//	else
//	{
//		cnt = 1;
//
//		while (cnt <= su)
//		{
//			hap += cnt;
//			printf("%03d회 반복 누적합: %d\n", cnt, hap);
//			cnt++;
//		}
//		printf("1부터 %d까지 누적합: %5d\n", su, hap);
//	}
//
//	return 0;
//}

////추가예제7-11
//#include <stdio.h>
//
//int main(void)
//{
//	int su, cnt, hap = 0;
//
//re:
//	printf("어디까지 합 구해?");
//	scanf("%d", &su);
//
//	if (su < 0)
//	{
//		printf("음의정수 X\n");
//		printf("프로그램 다시실행\n");
//
//		goto re;
//	}
//	else
//	{
//		cnt = 1;
//
//		while (1)
//		{
//			if (hap > 50) break;
//			else hap += cnt;
//
//			printf("1부터 %d까지 누적합: %5d\n", su, hap);
//			cnt++;
//		}
//		printf("누적합 50초과\n");
//		printf("1부터 %d까지 누적합: %d\n", cnt - 1, hap);
//	}
//	return 0;
//}