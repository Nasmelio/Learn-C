#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int count_strlen(char* stri)
//{
//	if (*stri != '\0')
//		return 1 + count_strlen(stri + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "Nasmelio";
//	int len = 0;
//	len = count_strlen(arr);
//	printf("len=%d ", len);
//	return 0;
//}


//int Fanc(int n)
//{
//	int i = 0;
//	int aa = 1;
//	for (i = 1; i <= n; i++)
//	{
//		aa *= i;
//	}
//	return aa;
//}
//int main()
//{
//	int n = 0;
//	int reti;
//	scanf("%d", &n);
//	reti = Fanc(n);
//	printf("answer=%d", reti);
//	return 0;
//}


void sort_numb(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int i;
	int arr[]= { 11,9,8,7,6,5,4,3,2,1,0 };
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort_numb(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}