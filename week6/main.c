#define _CRT_SECURE_NO_WARNINGS

////#5-3
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0;
//
//	if (a > 0)
//	{
//		b = 1;
//	}
//	else if (a == 0)
//	{
//		b = 2;
//	}
//	else
//	{
//		b = 3;
//	}
//
//	printf("b: %d\n", b);
//
//	return 0;
//}

////#�߰�����6-1
//#include <stdio.h>
//
//int main(void)
//{
//	int input_num;
//
//	printf("���� �Է�: ");
//	scanf("%d", &input_num);
//
//	if (input_num > 0)
//	{
//		printf("�Է��� ���� %d��(��) ���� ���� �Դϴ�.\n", input_num);
//	}
//	printf("���ǹ��� ���Դϴ�.\n")
//
//	return 0;
//}

////#�߰�����6-2
//#include <stdio.h>
//
//int main(void)
//{
//	int input_num, result;
//
//	printf("���� �Է�: ");
//	scanf("%d", &input_num);
//
//	result = input_num % 2;
//
//	if (result != 0) //�������� ������������,,
//	{
//		printf("�Է��� ���� %d��(��) \"Ȧ��\" �Դϴ�.\n", input_num);
//	}
//	else
//	{
//		printf("�з��� ���� %d��(��) \"¦��\"�Դϴ�.", input_num);
//	}
//
//		return 0;
//}

////#�߰�����6-5
//#include <stdio.h>
//
//int main(void)
//{
//	char alphabet;
//
//	printf("���ĺ� �Է�: ");
//	scanf("%c", &alphabet, sizeof(alphabet));
//
//	if (alphabet >= 'A' && alphabet <= 'Z')
//	{
//		printf("�Է��� ���ĺ� %c��(��) \"�빮��\"�̰�\n", alphabet);
//		printf("�ƽ�Ű�ڵ尪�� %d�Դϴ�.\n", alphabet);
//	}
//
//	else
//	{
//		printf("�Է��� ���ĺ� %c��(��) \"�ҹ���\"�̰�\n", alphabet);
//		printf("�ƽ�Ű�ڵ尪�� %d�Դϴ�.\n", alphabet);
//	}
//
//	return 0;
//}

////#�߰�����6-6
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu;
//	char grade;
//
//	printf("���� �Է�: ");
//	scanf("%d", &jumsu);
//
//	if (jumsu >= 90)
//	{
//		grade = 'A';
//	}
//	else if (jumsu >= 80)
//	{
//		grade = 'B';
//	}
//	else if (jumsu >= 70)
//	{
//		grade = 'C';
//	}
//	else if (jumsu >= 60)
//	{
//		grade = 'D';
//	}
//	else
//	{
//		grade = 'F';
//	}
//
//	printf("�Է��� ����: %d\n", jumsu);
//
//	printf("�л��� ���: %c", grade);
//
//	return 0;
//}

////#�߰�����6-7
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu;
//	int grade;
//
//	printf("���� �Է�: ");
//	scanf("%d", &jumsu);
//
//	if (jumsu > 100 || jumsu < 0)
//	{
//		printf("���� ��� ����(0~100)�� �ƴմϴ�.\n");
//		printf("���α׷��� �ٽ� �����ϼ���.\n");
//
//		return 0;
//	}
//
//	else
//	{
//		if (jumsu >= 90)
//		{
//			grade = 'A';
//		}
//		else if (jumsu >= 80)
//		{
//			grade = 'B';
//		}
//		else if (jumsu >= 70)
//		{
//			grade = 'C';
//		}
//		else if (jumsu >= 60)
//		{
//			grade = 'D';
//		}
//		else
//		{
//			grade = 'F';
//		}
//	}
//
//	printf("�Է��� ����: %d\n", jumsu);
//
//	printf("�л��� ���: %c", grade);
//
//	return 0;
//}

////#�߰�����6-7
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu;
//	char grade;
//
//	printf("�����Է�: ");
//	scanf("%d", &jumsu);
//
//	if (jumsu >= 90 && jumsu <= 100)
//		grade = 'A';
//	else if (jumsu >= 80 && jumsu < 90)
//		grade = 'B';
//	else if (jumsu >= 70 && jumsu < 80)
//		grade = 'C';
//	else if (jumsu >= 60 && jumsu < 70)
//		grade = 'D';
//	else if (jumsu >= 50 && jumsu < 60)
//		grade = 'F';
//	else
//	{
//		printf("���� ��� ������ �ƴմϴ�.\n");
//		printf("���α׷��� �ٽ� �����ϼ���.\n");
//
//		return 0;
//	}
//
//	printf("�Է��� ����: %d\n", jumsu);
//	printf("���� ���: %c����\n", grade);
//
//	return 0;
//}

////#�߰�����6-9
//#include <stdio.h>
//
//int main(void)
//{
//	char blood;
//
//	printf("A��: A �Ǵ� a\n");
//	printf("B��: B �Ǵ� b\n");
//	printf("AB��: C �Ǵ� c\n");
//	printf("0��: 0 �Ǵ� o\n");
//	printf("�������� �ش��ϴ� ���ĺ� �Է� : "); 
//	scanf_s("%c", &blood, sizeof(blood));
//
//	if (blood == 'A' || blood == 'a')
//	{
//		printf("A��\n");
//		printf("�ε巴�� ������ ����\n");
//	}
//	else if (blood =='B' || blood == 'b')
//	{
//		printf("B��\n");
//		printf("���� ��ȭ�� �ΰ��� ����\n");
//	}
//	else if (blood == 'C' || blood == 'C')
//	{
//		printf("AB��\n");
//		printf("�������� ������ ���� ����\n");
//	}
//	else if (blood == 'O' || blood == 'o')
//	{
//		printf("0��\n");
//		printf("Ȱ���ϰ� ��Ȱ�� ����\n");
//	}
//	else
//	{
//	printf("������� �ʴ� �����Դϴ�.\n");
//	printf("��� ���� ���� ���� A, B, C, O�� ���˴ϴ�.\n"); 
//	printf("���α׷��� �ٽ� �����ϼ���.\n");
//	return 0;
//	}
//
//return 0;
//
//}

////#Ȯ�ι���2
//#include <stdio.h>
//
//int main(void)
//{
//	int chest = 95;
//	char size;
//	if (chest <= 90)
//	{
//		size = 'S';
//	}
//	else if (chest <= 100)
//	{
//		size = 'M';
//	}
//	else 
//	{
//		size = 'L';
//	}
//
//	printf("������� %c", size);
//
//	return 0;
//}

////Ȯ�ι���3
//#include <stdio.h>
//
//int main(void)
//{
//	double height = 179.5;
//	double weight = 75.0;
//	if ((height >= 187.5) && (weight < 80.0))
//	{
//		printf("ok\n");
//	}
//	else
//	{
//		printf("cancel\n");
//	}
//
//	return 0;
//}

////#5-6
//#include <stdio.h>
//
//int main(void)
//{
//	int rank = 2, m = 0;
//
//	switch (rank)
//	{
//	case 1:
//		m = 300;
//		break;
//	case 2:
//		m = 200;
//		break;
//	case 3:
//		m = 100;
//		break;
//	default:
//		m = 10;
//		break;
//	}
//
//	printf("m: %d\n", m);
//
//	return 0;
//}

////#�߰�����6-10
//#include <stdio.h>
//
//int main(void)
//{
//	char season;
//
//	printf("��: A �Ǵ� a\n");
//	printf("����: S �Ǵ� s\n");
//	printf("����: D �Ǵ� d\n");
//	printf("�ܿ�: F �Ǵ� f\n");
//	printf("�����ϴ� ������ �ش��ϴ� ���ĺ��Է�:");
//	scanf_s("%c", &season, sizeof(season));
//
//	switch (season)
//	{
//	case 'A':
//	case 'a':
//		printf(" �� �� �� �� �� : ��\n");
//		printf("�� �� �� : �� �� �� �� �� �� �� �� �� \n");
//		break;
//
//	case 'S':
//	case 's':
//		printf("�� �� �� �� �� : �� ��\n");
//		printf("�� �� �� : �� �� �� �� �� �� �� �� �� �� �� \]");
//		break;
//
//	case 'D':
//	case 'd':
//		printf(" �� �� �� �� �� : ����\n");
//		printf("�� �� �� : �� �İ� �� �� �� ǳ �� �� �� �� \n");
//		break;
//
//	case 'F':
//	case 'f':
//		printf(" �� �� �� �� �� : �ܿ�\n");
//		printf("�� �� �� : �� �� �� �� �� �� �� �� Ű �� �� ��\n");
//		break;
//
//	default:
//		printf("�� �� �� �� �� : �� �� !!\n");
//		printf(" �� �� �� �� �� �� �� �� �� �� �� �� A, S, D, �� �� �� �� �� �� .\n");
//		break;
//
//	}
//
//	return 0;
//}

////#�߰�����6-11
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu, mok;
//	char grade;
//
//	printf("A ����: 90�� �̻� 100�� ���� \n");
//	printf("B ����: 80�� �̻� 90�� �̸� \n");
//	printf("C ����: 70�� �̻� 80�� �̸� \n");
//	printf("D ����: 60�� �̻� 70�� �̸� \n");
//	printf("F ����: 00�� �̻� 60�� �̸� \n");
//	printf("���� �Է�:");
//	scanf("%d", &jumsu);
//
//	if (jumsu > 100 || jumsu < 0)
//	{
//		printf("������ ��뱸�� �ƴ�.\n");
//		printf("���α׷� �ٽ� ���� �ʿ�");
//
//		return 0;
//	}
//
//	else
//	{
//		mok = jumsu / 10;
//
//		switch (mok)
//		{
//		case 10:
//		case 9:
//			grade = 'A';
//			break;
//
//		case 8:
//			grade = 'B';
//			break;
//
//		case 7:
//			grade = 'C';
//			break;
//
//		case 6:
//			grade = 'D';
//			break;
//
//		default:
//			grade = 'F';
//			break;
//		}
//		printf("���: %c����\n", grade);
//	}
//
//	return 0;
//}

////#����6-12
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, hap, cha, gob;
//	double na;
//	char op;
//
//	printf("���� 2���� ������ �Է�(��> 8 + 5): ");
//
//	scanf("%d %c %d", &num1, &op, &num2);
//
//	switch (op)
//	{
//	case '+':
//		hap = num1 + num2;
//		printf("%d %c %d = %d\n", num1, op, num2, hap);
//		break;
//
//	case '-':
//		cha = num1 - num2;
//		printf("%d %c %d = %d\n", num1, op, num2, cha);
//		break;
//
//	case '*':
//		gob = num1 * num2;
//		printf("%d %c %d = %d\n", num1, op, num2, gob);
//		break;
//
//	case '/':
//		na = (float)num1 / num2;
//		printf("%d %c %d = %f\n", num1, op, num2, na);
//		break;
//
//	default:
//		printf("%d %c %d ������ ������� �ʴ´�.\n", num1, op, num2);
//		printf("���α׷� �ٽý���");
//		break;
//	}
//
//	return 0;
//}

////#�߰�����6-10
//#include <stdio.h>
//
//int main(void)
//{
//	int year, month, day;
//
//	printf("������ �� �Է� (��> 2035 08): ");
//	scanf("%d %d", &year, &month);
//
//	if (month > 12 || month < 1)
//	{
//		printf("%d���� ���ȵ�\n", month);
//		printf("���α׷� �ٽý���");
//	}
//	else
//	{
//		switch (month)
//		{
//		case 2:
//			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//			{
//				printf("����");
//				day = 29;
//			}
//			else
//			{
//				printf("���");
//				day = 28;
//			}
//			break;
//		
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("���");
//			day = 30;
//			break;
//
//		default:
//			printf("���");
//			day = 31;
//		}
//		printf(": %d�� %02d���� %d�ϱ��� �ֽ��ϴ�.\n", year, month, day);
//	}
//
//	return 0;
//}

////#�߰���������
//#include <stdio.h>
//
//int main(void)
//{
//	int keynum, result;
//
//	printf("���� �Է�: ");
//	scanf("%d", &keynum);
//
//	result = keynum % 2;
//
//	if (result != 0)
//		printf("�Է��� %d��(��) \"Ȧ��\"�Դϴ�.\n", keynum);
//	else
//		printf("�Է��� %d��(��) \"¦��\"�Դϴ�.", keynum);
//
//	return 0;
//}

////�߰���������2
//#include <stdio.h>
//
//int main(void)
//{
//	int input, check;
//
//	printf("���� �Է�: ");
//	scanf("%d", &input);
//
//	check = input % 3;
//
//	switch (check)
//	{
//	case 0:
//		printf("�Է��� %d�� 3�� ��� �Դϴ�.");
//		break;
//
//	default:
//		printf("�Է��� %d�� 3�� ����� �ƴմϴ�.\n", input);
//		break;
//	}
//
//	return 0;
//}