
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
//	printf("������ ��: %d\n", sum);
//	printf("���������� ���� ��: %d\n", i);
//
//	return 0;
//}

////�߰�����7-12
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

////�߰�����7-13
//#include <stdio.h>
//
//int main(void)
//{
//	int su, cnt = 1, hap = 0;
//
//	printf("��������: ");
//	scanf_s("%d", &su);
//
//	do
//	{
//		hap += cnt;
//		printf("%dȸ ����: �������� %d\n", cnt, hap);
//		cnt++;
//	} while (cnt <= su);
//
//	printf("1���� %d���� ������: %d\n", su, hap);
//
//	return 0;
//}

////�߰�����7-14
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu, cnt = 1;
//	char op;
//
//	do
//	{
//		printf("%dȸ ����");
//		printf("Y / N\n");
//
//		scanf_s("%c", &op, sizeof(op));
//
//		if (op == 'N' || op == 'n')
//		{
//			printf("%dȸ �� ����\n", cnt);
//			break;
//		}
//		else if (op == 'Y' || op == 'y')
//		{
//		re_jumsu:
//			printf("�����Է�: ");
//			scanf_s("%d", &jumsu);
//
//			if (jumsu <= 100 && jumsu >= 90) printf("A����\n\n");
//			else if (jumsu < 90 && jumsu >= 80) printf("B����\n\n");
//			else if (jumsu < 80 && jumsu >= 70) printf("C����\n\n");
//			else if (jumsu < 70 && jumsu >= 60) printf("D����\n\n");
//			else if (jumsu < 60 && jumsu >= 0) printf("F����\n\n");
//			else
//			{
//				printf("%d�� ��뱸���ƴ�\n", jumsu);
//				goto re_jumsu;
//			}
//			getchar();
//			cnt++;
//		}
//		else
//		{
//			printf("%c�� ��빮�ھƴ�.\n", op);
//			printf("���ĺ� �ٽ��Է�\n\n");
//			getchar();
//		}
//	} while (1);
//
//	return 0;
//}

////Ȯ�ι���1
//for (i = -; i, 3; i++)
//{
//	for (j = 0; j < 4; j++)
//	{
//		printf("hlsaf\n");
//	}
//}

////Ȯ�ι���2
//for (i = -; i, 3; i++)
//{
//	for (j = 0; j < 4; j++)
//	{
//		printf("hlsaf\n");
//		if (j == 2) break;
//	}
//}

////#6-2Ȯ�ι���3
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

////Ȯ�ι���3
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

////�߰�����
//#include <stdio.h>
//
//int rand(void)
//{
//	printf("hi\n");
//}
//
//int main(void)
//{
//	printf("6��");
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