#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "Welcome to Github";
//	char arr2[] = "*****************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		left++;
//		right--;
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[] = "Welcome to Github";
//	char arr2[] = "*****************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		if(left != right)
//		{
//			system("cls");
//		}
//		left++;
//		right--;
//	}
//	return 0;
//}

int main()
{
	int password = 0;
	int numb = 0;
	int i = 0;
	printf("Setting new Password:");
	scanf("%d", &password);
	printf("Success\n");
	system("cls");
	for (i=0;i<3;i++)
	{
		printf("Enter pasword:");
		scanf("%d", &numb);
		if(password==numb)
		{
			printf("Good job\n");
			printf("Your pasword was:%d", numb);
			break;
		}
		else
		{
			if (i == 2)
			{
				printf("gun");
				break;
			}
			printf("Try it again\n");
		}
	}
	return 0;
}