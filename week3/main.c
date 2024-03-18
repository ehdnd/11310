/* #3-1
* 
#include <stdio.h>

int main(void)
{
	printf("�й�: %d\n", 20243334);
	printf("�̸�: %s\n", "���¿�");
	printf("����: %c\n", 'A');

	return 0;
}

*/


/* #3-2 �ٸ�����

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title ������ �������� �ڸ��� ���� ����");

	printf("|%d|", 358);
	printf(": ������ �⺻ �ڸ���\n");


	printf("|%5d|", 358);
	printf(": ��ü �ڸ��� 5��\n");

	printf("|%05d|", 358);
	printf(": ��ü �ڸ����� 5���̰� ��ĭ�� 0���� ä��\n");

	return 0;

}

*/

/* #3-3 �ٸ�����2

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title �Ǽ��� �������� �ڸ��� ���� ����");

	printf("|%f|", 358.123);
	printf(": �Ǽ��� �⺻ �ڸ���\n");

	printf("|%.2f|", 358.123456);
	printf(": �Ҽ� ��° �ڸ����� ���\n");

	printf("|%6.1f|", 358.12);
	printf(": ��ü 6�ڸ�, �Ҽ� ù° �ڸ����� ���\n");

	printf("|%-6.1f|", 358.12);
	printf(": ��ü 6�ڸ�, ���� ����, �Ҽ� ù° �ڸ����� ���\n");

	printf("|%7.3f|", 358.12);
	printf(": ��ü 7�ڸ�, �Ҽ� ��° �ڸ����� ���\n");

	printf("|%010.3f|", 358.123456);
	printf(": ��ü 10�ڸ� ��ĭ�� 0���� ä��, �Ҽ� ��°�ڸ����� ���\n");

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

	printf("���� a�� ��: %d\n", a);
	printf("���� b�� ��: %d\n", b);
	printf("���� c�� ��: %d\n", c);
	printf("���� da�� ��: %.1lf\n", da);
	printf("���� ch�� ��: %c\n", ch);

	
	return 0;
}

*/

/* #3-5 p.57

#include <stdio.h>

int main(void)
{
	char ch1 = 'A';
	char ch2 = 65;

	printf("���� %c�� �ƽ�Ű �ڵ� ��: %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ� ���� %d�� ����: %c\n", ch2, ch2);

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

	printf("short�� ���� ���: %d\n", sh);
	printf("int�� ���� ���: %d\n", in);
	printf("long�� ���� ���: %ld\n", ln);
	printf("long long�� ���� ���: %lld\n", lln);

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

	printf("float�� ������ ��: %.20f\n", ft);
	printf("double�� ������ ��: %.20lf\n", db);

	return 0;
}

*/

/* #3-9 p.64

#include <stdio.h>

int main(void)
{
	char fruit[28] = "strawberry";

	printf("����: %s\n", fruit);
	printf("����´: %s %s\n", fruit, "jam");

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