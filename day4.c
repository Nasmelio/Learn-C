#include <stdio.h>


//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 101;
//	int b = 30;
//	int max=get_max(a, b);
//	printf("%d", max);
//	return 0;
//}


//void Swap0(int *pa, int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 50;
//	printf("a=%d, b=%d\n", a, b);
//	Swap0(&a, &b);
//	printf("a=%d, b=%d\n", a, b);
//	return 0;
//}


int year_is_leap(int yr)
{
	if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
		if(1 == year_is_leap(year))
		{
			printf("year=%d is leap\n", year);
		}
	return 0;
}