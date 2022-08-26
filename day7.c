#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d",&num);
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num>>i) & 1))
//			count++;
//	}
//	printf("%d",count);
//	return 0;
//}

//int main()
//{
//	int n[10] = { 10,20,30,40,50,60,70,80,90,100 };
//	printf("No:%9s\n","Numbers");
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%2d%8d\n", i, n[i-1]);
//	}
//	return 0;
//}


void test1(int arr[])
{
	printf("%d\n", sizeof(arr));
}
void test2(char cha[])
{
	printf("%d\n", sizeof(cha));
}

int main()
{
	int arr[10] = { 0 };
	char cha[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(cha));
	test1(arr);
	test2(cha);
	return 0;
}
