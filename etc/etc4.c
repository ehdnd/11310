// for������ ���������ڿ� ���������ڿ� ���̰��ִ°�?
#include <stdio.h>

int main(void)
{
	int i, j;

	printf("i++ ����\n"); //i++ ���� ǥ�� ���
	for (i = 0; i < 5; i++)
	{
		printf("���������� i = %d\n", i); //'for�� ��'���� i��ȭ ����
	}

	printf("\n");

	printf("++j ����\n"); // ++j ���� ǥ�� ���
	for (j = 0; j < 5; ++j)
	{
		printf("���������� j = %d\n", j); //'for�� ��'���� j��ȭ ����
	}

	return 0;
}