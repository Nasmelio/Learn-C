#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("enter your number:");
//	scanf("%d", &n);
//	for (i=1; i <=n; i++)
//	{
//		ret = ret * i;
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n<=10; n++)//1,2,3,4
//	{
//		ret = 1;
//		for (i = 1; i<=n; i++)//1,2,3,4
//		{
//			ret = ret * i;//1,2,6,24
//		}
//		sum = sum + ret;//1,3,9,35
//		printf("%d\n", sum);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int k = 0;
	printf("enter your number K:");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("I found number k:%d", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("I didn'n find");
	}
	return 0;
}