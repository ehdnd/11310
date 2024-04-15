// for문에서 전위연산자와 후위연산자에 차이가있는가?
#include <stdio.h>

int main(void)
{
	int i, j;

	printf("i++ 시작\n"); //i++ 시작 표시 출력
	for (i = 0; i < 5; i++)
	{
		printf("후위연산자 i = %d\n", i); //'for문 내'에서 i변화 추적
	}

	printf("\n");

	printf("++j 시작\n"); // ++j 시작 표시 출력
	for (j = 0; j < 5; ++j)
	{
		printf("전위연산자 j = %d\n", j); //'for문 내'에서 j변화 추적
	}

	return 0;
}