#define _CRT_SECURE_NO_WARNINGS

////#11-1
//#include <stdio.h>
//
//int main(void)
//{
//	char small, cap = 'G';
//
//	if ((cap >= 'A') && (cap <= 'Z')) {
//		small = cap + ('a' - 'A');
//	}
//	printf("대문사: %c %c", cap, '\n');
//	printf("소문자: %c", small);
//
//	return 0;
//}

////#11-2
//#include <stdio.h>
//
//int main(void)
//{
//	char ch1, ch2;
//
//	scanf("%c%c", &ch1, &ch2);
//	printf("[%c%c]", ch1, ch2);
//
//	return 0;
//}

////11-3
//#include <stdio.h>
//
//int main(void)
//{
//	int ch;
//
//	ch = getchar();
//	printf("입력한 문자: ");
//	putchar(ch);
//	putchar('\n');
//
//	return 0;
//}

////11-4
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		scanf("%c", &ch);
//		printf("%c", ch);
//	}
//
//	return 0;
//}

////11-4
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//	int i;
//
//	while (1) {
//		scanf("%c", &ch);
//		if (ch == '\n') break;
//		printf("%c", ch);
//	}
//
//	return 0;
//}

////11-5
//#include <stdio.h>
//
//int main(void)
//{
//	int res;
//	char ch;
//
//	while (1) {
//		res = scanf("%c", &ch);
//		if (res == -1) break;
//		printf("%d ", ch);
//	}
//
//	return 0;
//}

////11-6
//#include <stdio.h>
//
//void my_gets(char* str, int size);
//
//int main(void)
//{
//	char str[7];
//
//	my_gets(str, sizeof(str));
//	printf("입력한 문자열: &s\n", str);
//
//	return 0;
//}
//
//void my_gets(char* str, int size) {
//	int ch;
//	int i = 0;
//
//	ch = getchar();
//	while ((ch != '\n') && (i < size - 1)) {
//		str[i] = ch;
//		i++;
//		ch = getchar();
//	}
//	str[i] = '\0';
//}

////11-7
//#include <stdio.h>
//
//int main(void)
//{
//	int num, grade;
//
//	printf("학번 입력: ");
//	scanf("%d", &num);
//	getchar();
//	printf("학점 입력: ");
//	grade = getchar();
//	printf("학번: %d, 학점: %c", num, grade);
//
//	return 0;
//}