#define _CRT_SECURE_NO_WARNINGS

////#3-8
//
//#include <stdio.h>
//
//int main(void)
//{
//	int income = 0;
//	double tax;
//	const double tax_rate = 0.12;
//
//	income = 456;
//	tax = income * tax_rate;
//	printf("������: %.1lf�Դϴ�.\n", tax);
//
//	return 0;
//}

////Ȯ�ι���2
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 0;
//
//	a = a + 1;
//	a = a + 2;
//	a = a + 3;
//	printf("a: %d", a);
//
//	return 0;
//}

////Ȯ�ι���3
//#include <stdio.h>
//
//int main(void)
//{
//	int kor = 70;
//	int eng = 80;
//	int mat = 90;
//
//	int tot = kor + eng + mat;
//	printf("����: %d, ����: %d, ����: %d\n", kor, eng, mat);
//	printf("����: %d", tot);
//
//	return 0;
//}

////#3-9
//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//
//	scanf("%d", &a);
//	printf("�Էµ� ��: %d\n", a);
//
//	return 0;
//}

////#3-10
//#include <stdio.h>
//
//int main(void)
//{
//	int age;
//	double height;
//
//	printf("���̿� Ű�� �Է��ϼ���: ");
//	scanf("%d%lf", &age, &height);
//	printf("���̴� %d��, Ű�� %.1fcm�Դϴ�.\n", age, height);
//
//	return 0;
//}

////#3-11
//#include <stdio.h>
//
//int main(void)
//{
//	char grade;
//	char name[20];
//
//	printf("���� �Է�: ");
//	scanf("%c", &grade);
//	printf("�̸� �Է�: ");
//	scanf("%s", name);
//	printf("%s�� ������ %c�Դϴ�.\n", name, grade);
//
//	return 0;
//}

////���� 4-8
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;
//	float result;
//
//	printf("���� 2���� �Է��ϼ���: \n");
//	printf("ù ��° ���� num1 = ");
//	scanf_s("%d", &num1);
//	printf("�� ��° ���� num2 = ");
//	scanf_s("%d", &num2);
//
//	result = (double)num1 / (double)num2;
//	printf("������ ���� = num1 / num2 = %d / %d = %f\n", num1, num2, result);
//
//	return 0;
//}

////���� 4-7
//#include <stdio.h>
//
//int main(void)
//{
//	float base, height;
//	double result;
//
//	printf("�غ��� ���̿� �Ҽ� ��° �ڸ����� ������ �Է�: \n");
//	printf("�غ� �Է�(cm): ");
//	scanf_s("%f", &base);
//	printf("���� �Է�(cm): ");
//	scanf_s("%f", &height);
//
//	result = (base * height) / 2;
//
//	printf("�ﰢ�� ����(�Ҽ� 6° �ڸ�����) ���: %f\n", result);
//	printf("�ﰢ�� ����(�Ҽ� 15° �ڸ�����) ���: %.15f\n", result);
//	printf("�ﰢ�� ����(�Ҽ� 16° �ڸ�����) ���: %.16f\n", result);
//	printf("�ﰢ�� ����(�Ҽ� 17° �ڸ�����) ���: %.17f\n", result);
//	printf("�ﰢ�� ����(�Ҽ� 18° �ڸ�����) ���: %.18f\n", result);
//	
//
//	return 0;
//}

////���� 4-12
//#include <stdio.h>
//
//int main(void)
//{
//	char alphabet, add;
//	alphabet = 'A';
//	add = alphabet + 5;
//
//	printf("���ĺ� �빮�ڸ� ������ ������ ����: alphabet = \'A\'\n");
//	printf("ó�� ������ ���ĺ� ���: %c\n", alphabet);
//	printf("ó�� ���ĺ��� 5�� ���� ���ĺ�: %c\n", add);
//	printf("����� ���ĺ��� �ƽ�Ű�ڵ尪: %d\n", add);
//
//	return 0;
//}

////���� 4-12 Ȱ��
//#include <stdio.h>
//
//int main(void)
//{
//	char alphabet, add;
//
//	printf("���ĺ� �ϳ� �Է�: ");
//	scanf_s("%c", &alphabet);
//
//	add = alphabet + 5;
//
//	printf("���ĺ� �빮�ڸ� ������ ������ ����: alphabet = %c\n", alphabet);
//	printf("ó�� ������ ���ĺ� ���: %c\n", alphabet);
//	printf("ó�� ���ĺ��� 5�� ���� ���ĺ�: %c\n", add);
//	printf("����� ���ĺ��� �ƽ�Ű�ڵ尪: %d\n", add);
//
//	return 0;
//}

////Ȯ�ι���2
//#include <stdio.h>
//
//int main(void)
//{
//	char fruit[20];
//	int cnt;
//
//	printf("�����ϴ� ����: ");
//	scanf("%s", fruit);
//	printf("�� ��: ");
//	scanf("%d", &cnt);
//	printf("%s�� %d�� �帳�ϴ�.", fruit, cnt);
//
//	return 0;
//}

////Ȯ�ι���3
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//
//	printf("���� �Է�: ");
//	scanf("%c", &ch);
//	printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.", ch, ch);
//
//	return 0;
//}

