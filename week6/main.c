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

////#추가예제6-1
//#include <stdio.h>
//
//int main(void)
//{
//	int input_num;
//
//	printf("정수 입력: ");
//	scanf("%d", &input_num);
//
//	if (input_num > 0)
//	{
//		printf("입력한 정수 %d는(은) 양의 정수 입니다.\n", input_num);
//	}
//	printf("조건문은 참입니다.\n")
//
//	return 0;
//}

////#추가예제6-2
//#include <stdio.h>
//
//int main(void)
//{
//	int input_num, result;
//
//	printf("정수 입력: ");
//	scanf("%d", &input_num);
//
//	result = input_num % 2;
//
//	if (result != 0) //이정도는 시험출제가능,,
//	{
//		printf("입력한 정수 %d는(은) \"홀수\" 입니다.\n", input_num);
//	}
//	else
//	{
//		printf("압력한 정수 %d는(은) \"짝수\"입니다.", input_num);
//	}
//
//		return 0;
//}

////#추가예제6-5
//#include <stdio.h>
//
//int main(void)
//{
//	char alphabet;
//
//	printf("알파벳 입력: ");
//	scanf("%c", &alphabet, sizeof(alphabet));
//
//	if (alphabet >= 'A' && alphabet <= 'Z')
//	{
//		printf("입력한 알파벳 %c는(은) \"대문자\"이고\n", alphabet);
//		printf("아스키코드값은 %d입니다.\n", alphabet);
//	}
//
//	else
//	{
//		printf("입력한 알파벳 %c는(은) \"소문자\"이고\n", alphabet);
//		printf("아스키코드값은 %d입니다.\n", alphabet);
//	}
//
//	return 0;
//}

////#추가예제6-6
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu;
//	char grade;
//
//	printf("점수 입력: ");
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
//	printf("입력한 점수: %d\n", jumsu);
//
//	printf("학생의 등급: %c", grade);
//
//	return 0;
//}

////#추가예제6-7
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu;
//	int grade;
//
//	printf("점수 입력: ");
//	scanf("%d", &jumsu);
//
//	if (jumsu > 100 || jumsu < 0)
//	{
//		printf("점수 허용 구간(0~100)이 아닙니다.\n");
//		printf("프로그램을 다시 시작하세요.\n");
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
//	printf("입력한 점수: %d\n", jumsu);
//
//	printf("학생의 등급: %c", grade);
//
//	return 0;
//}

////#추가예제6-7
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu;
//	char grade;
//
//	printf("점수입력: ");
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
//		printf("점수 허용 구간이 아닙니다.\n");
//		printf("프로그램을 다시 시작하세요.\n");
//
//		return 0;
//	}
//
//	printf("입력한 점수: %d\n", jumsu);
//	printf("점수 등급: %c학점\n", grade);
//
//	return 0;
//}

////#추가예제6-9
//#include <stdio.h>
//
//int main(void)
//{
//	char blood;
//
//	printf("A형: A 또는 a\n");
//	printf("B형: B 또는 b\n");
//	printf("AB형: C 또는 c\n");
//	printf("0형: 0 또는 o\n");
//	printf("혈액형에 해당하는 알파벳 입력 : "); 
//	scanf_s("%c", &blood, sizeof(blood));
//
//	if (blood == 'A' || blood == 'a')
//	{
//		printf("A형\n");
//		printf("부드럽고 섬세한 성향\n");
//	}
//	else if (blood =='B' || blood == 'b')
//	{
//		printf("B형\n");
//		printf("주위 변화에 민감한 성향\n");
//	}
//	else if (blood == 'C' || blood == 'C')
//	{
//		printf("AB형\n");
//		printf("예술적인 감각을 가진 성향\n");
//	}
//	else if (blood == 'O' || blood == 'o')
//	{
//		printf("0형\n");
//		printf("활할하고 쾌활한 성향\n");
//	}
//	else
//	{
//	printf("허용하지 않는 문자입니다.\n");
//	printf("대소 문자 구별 없이 A, B, C, O만 허용됩니다.\n"); 
//	printf("프로그램을 다시 시작하세요.\n");
//	return 0;
//	}
//
//return 0;
//
//}

////#확인문제2
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
//	printf("사이즈는 %c", size);
//
//	return 0;
//}

////확인문제3
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

////#추가예제6-10
//#include <stdio.h>
//
//int main(void)
//{
//	char season;
//
//	printf("봄: A 또는 a\n");
//	printf("여름: S 또는 s\n");
//	printf("가을: D 또는 d\n");
//	printf("겨울: F 또는 f\n");
//	printf("좋아하는 계절에 해당하는 알파벳입력:");
//	scanf_s("%c", &season, sizeof(season));
//
//	switch (season)
//	{
//	case 'A':
//	case 'a':
//		printf(" 선 택 한 계 절 : 봄\n");
//		printf("메 시 지 : 만 물 이 소 생 하 는 계 절 \n");
//		break;
//
//	case 'S':
//	case 's':
//		printf("선 택 한 계 절 : 여 름\n");
//		printf("메 시 지 : 시 원 한 계 곡 을 즐 기 는 계 절 \]");
//		break;
//
//	case 'D':
//	case 'd':
//		printf(" 선 택 한 계 절 : 가을\n");
//		printf("메 시 지 : 곡 식과 과 일 이 풍 성 한 계 절 \n");
//		break;
//
//	case 'F':
//	case 'f':
//		printf(" 선 택 한 계 절 : 겨울\n");
//		printf("메 시 지 : 새 하 얀 눈 이 덮 인 스 키 의 계 절\n");
//		break;
//
//	default:
//		printf("메 시 지 계 절 : 오 류 !!\n");
//		printf(" 알 파 벳 은 대 소 문 자 구 별 없 이 A, S, D, 만 허 용 됩 니 다 .\n");
//		break;
//
//	}
//
//	return 0;
//}

////#추가예제6-11
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu, mok;
//	char grade;
//
//	printf("A 학점: 90점 이상 100점 이하 \n");
//	printf("B 학점: 80점 이상 90점 미만 \n");
//	printf("C 학점: 70점 이상 80점 미만 \n");
//	printf("D 학점: 60점 이상 70점 미만 \n");
//	printf("F 학점: 00점 이상 60점 미만 \n");
//	printf("점수 입력:");
//	scanf("%d", &jumsu);
//
//	if (jumsu > 100 || jumsu < 0)
//	{
//		printf("점수가 허용구간 아님.\n");
//		printf("프로그램 다시 실행 필요");
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
//		printf("등급: %c학점\n", grade);
//	}
//
//	return 0;
//}

////#예제6-12
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, hap, cha, gob;
//	double na;
//	char op;
//
//	printf("정수 2개와 연산자 입력(예> 8 + 5): ");
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
//		printf("%d %c %d 연산은 허용하지 않는다.\n", num1, op, num2);
//		printf("프로그램 다시시작");
//		break;
//	}
//
//	return 0;
//}

////#추가예제6-10
//#include <stdio.h>
//
//int main(void)
//{
//	int year, month, day;
//
//	printf("연도와 월 입력 (예> 2035 08): ");
//	scanf("%d %d", &year, &month);
//
//	if (month > 12 || month < 1)
//	{
//		printf("%d월은 허용안됨\n", month);
//		printf("프로그램 다시시작");
//	}
//	else
//	{
//		switch (month)
//		{
//		case 2:
//			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//			{
//				printf("윤년");
//				day = 29;
//			}
//			else
//			{
//				printf("평년");
//				day = 28;
//			}
//			break;
//		
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("평년");
//			day = 30;
//			break;
//
//		default:
//			printf("평년");
//			day = 31;
//		}
//		printf(": %d년 %02d월은 %d일까지 있습니다.\n", year, month, day);
//	}
//
//	return 0;
//}

////#추가도전문제
//#include <stdio.h>
//
//int main(void)
//{
//	int keynum, result;
//
//	printf("정수 입력: ");
//	scanf("%d", &keynum);
//
//	result = keynum % 2;
//
//	if (result != 0)
//		printf("입력한 %d은(는) \"홀수\"입니다.\n", keynum);
//	else
//		printf("입력한 %d은(는) \"짝수\"입니다.", keynum);
//
//	return 0;
//}

////추가도전문제2
//#include <stdio.h>
//
//int main(void)
//{
//	int input, check;
//
//	printf("정수 입력: ");
//	scanf("%d", &input);
//
//	check = input % 3;
//
//	switch (check)
//	{
//	case 0:
//		printf("입력한 %d는 3의 배수 입니다.");
//		break;
//
//	default:
//		printf("입력한 %d는 3의 배수가 아닙니다.\n", input);
//		break;
//	}
//
//	return 0;
//}