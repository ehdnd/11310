/* #3-1
* 
#include <stdio.h>

int main(void)
{
	printf("학번: %d\n", 20243334);
	printf("이름: %s\n", "장태웅");
	printf("학점: %c\n", 'A');

	return 0;
}

*/


/* #3-2 다른교재

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title 정수형 데이터의 자릿수 지정 형식");

	printf("|%d|", 358);
	printf(": 정수형 기본 자릿수\n");


	printf("|%5d|", 358);
	printf(": 전체 자릿수 5개\n");

	printf("|%05d|", 358);
	printf(": 전체 자릿수는 5개이고 빈칸은 0으로 채움\n");

	return 0;

}

*/

/* #3-3 다른교재2

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title 실수형 데이터의 자릿수 지정 형식");

	printf("|%f|", 358.123);
	printf(": 실수형 기본 자릿수\n");

	printf("|%.2f|", 358.123456);
	printf(": 소수 둘째 자리까지 출력\n");

	printf("|%6.1f|", 358.12);
	printf(": 전체 6자리, 소수 첫째 자리까지 출력\n");

	printf("|%-6.1f|", 358.12);
	printf(": 전체 6자리, 왼쪽 정렬, 소수 첫째 자리까지 출력\n");

	printf("|%7.3f|", 358.12);
	printf(": 전체 7자리, 소수 셋째 자리까지 출력\n");

	printf("|%010.3f|", 358.123456);
	printf(": 전체 10자리 빈칸은 0으로 채움, 소수 셋째자리까지 출력\n");

	return 0;

}

*/


/* #3-4 p.54

#include <stdio.h>

int main(void)
{
	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값: %d\n", a);
	printf("변수 b의 값: %d\n", b);
	printf("변수 c의 값: %d\n", c);
	printf("변수 da의 값: %.1lf\n", da);
	printf("변수 ch의 값: %c\n", ch);

	
	return 0;
}

*/

