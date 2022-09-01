#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//int main()
//{
//	int i=0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = (a > 1 ? 3 : 7);
//	printf("%d", b);
//	return 0;
//}

//void main()
//{
//	puts("hello");
//}

//struct AVAZOV
//{
//	char dada[10];
//	char aya[10];
//	char single[10];
//	char uka[10];
//};
//struct NASIM
//{
//	int age;
//	int height;
//	struct AVAZOV;
//	int weight;
//};
//int main()
//{
//	struct NASIM nas = { 24,175,{"Uktam","Rayhon","sevinch","Naim"},67};
//	printf("My age is %d\n",nas.age);
//	printf("My height is %d kg\n", nas.height);
//	printf("My dad is %s\n", nas.dada);
//	printf("My mam is %s\n", nas.aya);
//	printf("My sister is %s\n", nas.single);
//	printf("My brother is %s\n", nas.uka);
//	return 0;
//}

int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		int ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}
