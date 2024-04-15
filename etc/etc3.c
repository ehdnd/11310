//// p.174 여기서 잠깐 'while 문 에서 continue 사용시 주의'

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1, sum = 0, n = 1;
//
//	while (i <= 300)
//	{
//		printf("i = %d, n = %d\n", i, n);
//		n++;
//
//		if (n > 100)
//		{
//			break;
//		}
//
//		if ((i % 3) == 0)
//		{
//			continue;
//		}
//		sum += i ;
//		i++ ;
//	}
//}