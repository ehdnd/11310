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

/* #3-5 p.57

#include <stdio.h>

int main(void)
{
	char ch1 = 'A';
	char ch2 = 65;

	printf("문자 %c의 아스키 코드 값: %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자: %c\n", ch2, ch2);

	return 0;
}

*/

/* #3-6 p.58

#include <stdio.h>

int main(void) {
	short sh = 32767;
	int in = 2147483647;
	long ln = 214783647;
	long long lln = 123451234512345;

	printf("short형 변수 출력: %d\n", sh);
	printf("int형 변수 출력: %d\n", in);
	printf("long형 변수 출력: %ld\n", ln);
	printf("long long형 변수 출력: %lld\n", lln);

	return 0;
}

*/

/* #3-7 p.60

#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295;
	printf("%d\n", a);

	a = -1;
	printf("%u\n", a);

	return 0;
}

*/

/* #3-8 p.62

#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값: %.20f\n", ft);
	printf("double형 변수의 값: %.20lf\n", db);

	return 0;
}

*/

/* #3-9 p.64

#include <stdio.h>

int main(void)
{
	char fruit[28] = "strawberry";

	printf("딸기: %s\n", fruit);
	printf("딸기쨈: %s %s\n", fruit, "jam");

	return 0;
}

*/

/* #3-10 p.65

#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[28] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	return 0;
}

*/