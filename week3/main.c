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

