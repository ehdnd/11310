#define _CRT_SECURE_NO_WARNINGS

////Ȯ�ι���2
//#include <stdio.h>
//
//int main(void)
//{
//	int n;
//	printf("���� �Է�: ");
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("����");
//		break;
//
//	default:
//		printf("��");
//		break;
//	}
//
//	return 0;
//}

////Ȯ�ι���3
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
//	printf("������� %c�Դϴ�. \n", size);
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

////�߰�����7-1
//#include <stdio.h>
//
//int main(void)
//{
//	int count;
//
//	for (count = 0; count < 10; count++)
//	{
//		printf("%02dȸ ���: �ȳ��ϼ�.\n", count + 1); //%02d: 2���� ������ ���� ����?
//	}
//
//	return 0;
//}

//�߰�����7-2
//#include <stdio.h>
//
//int main(void)
//{
//	int count, hap = 0;
//
//	for (count = 1; count <= 10; count++)
//	{
//		hap += count;
//		printf("%02d���� ������ ���: hap = %02d\n", count, hap);
//	}
//	printf("1 + 2 + ~ + 9 + 10 = %02d\n", hap);
//
//	return 0;
//}
//

////�߰�����7-3
//#include <stdio.h>
//
//int main(void)
//{
//	int count, hap = 0;
//
//	for (count = 1; count <= 10; count += 2) {
//		hap += count;
//		printf("%02d���� Ȧ���� ������ ���: hap = %02d\n", count, hap);
//	}
//	printf("1���� 10���� Ȧ���� ������ = %02d\n", hap);
//
//	return 0;
//}

////�߰�����7-4
//#include <stdio.h>
//
//int main(void)
//{
//	int count, su, hap = 0;
//
//	printf("������ 5�ǹ��?: ");
//	scanf("%d", &su);
//
//	for (count = 5; count <= su; count += 5)
//	{
//		hap += count;
//		printf("%d���� 5�� ��� ���� �հ� ���: %03d\n", count, hap);
//	}
//	printf("%d���� 5�� ��� ���� �հ� = %d", su, hap);
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

////#6 Ȯ�ι���1
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

////#6 Ȯ�ι���2
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

////#6 Ȯ�ι���3
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

////�߰�����7-6
//#include <stdio.h>
//
//int main(void)
//{
//	int dan, cnt, gob;
//
//replay:
//	printf("�˰� ���� ������ �Է�(2~99): ");
//	scanf("%d", &dan);
//
//	if ((dan >= 100) || (dan < 2))
//	{
//		printf("���Ǵ� ������ ������ �ƴմϴ�.\n");
//		printf("���α׷� �ٽý���.\n");
//		goto replay;
//	}
//	else
//	{
//		for (cnt = 1; cnt <= 9; cnt++)
//		{
//			gob = dan * cnt;
//			printf("%d x %d = %03d\n", dan, cnt, gob);
//		}
//		printf("%d���� �����\n", dan);
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

////�߰�����7-7
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

////�߰�����7-8
//#include <stdio.h>
//
//int main(void)
//{
//	int cnt, star;
//
//	for (cnt = 1; cnt <= 5; cnt++)
//	{
//		printf("%d��", cnt);
//		for (star = 1; star <= cnt; star++)
//		{
//			printf(" * ");
//		}
//		printf("1������ %d������ �ݺ����\n", cnt);
//	}
//
//	return 0;
//}

////�߰�����7-9
//#include <stdio.h>
//
//int main(void)
//{
//	int cnt, star, su = 5;
//
//	for (cnt = 1; cnt <= 5; cnt++)
//	{
//		printf("%d��", cnt);
//		for (star = 5; star >= cnt; star--)
//		{
//			printf(" * ");
//		}
//		printf("1������ %d������ �ݺ����\n", su--);
//	}
//
//	return 0;
//}

////�߰�����7-10
//#include <stdio.h>
//
//int main(void)
//{
//	int su, cnt, hap = 0;
//
//re:
//	printf("������ �� ����?");
//	scanf("%d", &su);
//
//	if (su < 0)
//	{
//		printf("�������� X\n");
//		printf("���α׷� �ٽý���\n");
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
//			printf("%03dȸ �ݺ� ������: %d\n", cnt, hap);
//			cnt++;
//		}
//		printf("1���� %d���� ������: %5d\n", su, hap);
//	}
//
//	return 0;
//}

////�߰�����7-11
//#include <stdio.h>
//
//int main(void)
//{
//	int su, cnt, hap = 0;
//
//re:
//	printf("������ �� ����?");
//	scanf("%d", &su);
//
//	if (su < 0)
//	{
//		printf("�������� X\n");
//		printf("���α׷� �ٽý���\n");
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
//			printf("1���� %d���� ������: %5d\n", su, hap);
//			cnt++;
//		}
//		printf("������ 50�ʰ�\n");
//		printf("1���� %d���� ������: %d\n", cnt - 1, hap);
//	}
//	return 0;
//}