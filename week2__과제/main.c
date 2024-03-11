/* #2-1

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Be happy!");
	system("pause");

	return 0;
}

*/

/* #2-2

#include <stdio.h>

int main(void)
{
	printf("Hi\n");
	printf("Have a nice day");

	return 0;
}

*/

/* #2-3

#include <stdio.h>

int main(void)
{
	printf("Be happy! \n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");

	return 0;
}

*/

/* #2-4

#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d plus %d = %d\n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}

*/

/* #2-5

#include <stdio.h>

int main(void)
{
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);

	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 12);

	return 0;
}

*/

/* #2-6

#include <stdio.h>

int main(void)
{
	printf("123 + 456789\n");

	return 0;
}

*/

/* #2-7

#include <stdio.h>

int main(void)
{
	printf("삑~삑~삑 소리 세 번: \a \a \a 🎶🎶🎶\n");
	printf("테스트 글자\r 앞에 있는 글을 덮어씁니다.\n");
	printf("[Tab]키 사용 \t 일정한 간격 \t 좋습니다.\n");
	printf("컴퓨터를 \"사랑\"합니다. 끈따옴표 출력\n");

	return 0;
}

*/

/* #2-8

#include <stdio.h>

int main(void)
{
	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);

	return 0;
}

*/

/* #2-9

#include <stdio.h>

int main(void)
{
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c is %s.\n", '1', "first");

	return 0;
}

*/

/* #2-HW

#include <stdio.h>

int main(void)
{
	printf("%d을 %d로 나누면 %lf입니다.\n", 1, 2, 0.5);

	printf("Be\rHappy!\nBaby!");

	return 0;
}

*/