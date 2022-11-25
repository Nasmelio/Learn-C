#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a [] = {1,2,3,4};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof(*a));
//	return 0;
//}

//int main()
//{ 
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[3][4]));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	return 0;
//}

//int main()
//{
//	char stt1[10] = "abc";
//	char stt2[] = "def";
//	strcat(stt1, stt2);
//	printf("%s\n", stt1);
//	return 0;
//}


void hello()
{
	printf("hello boys");
}
void nihao()
{
	printf("nihao");
}

int main()
{
	int j;
	scanf("%d", &j);
	switch (j)
	{
		case 1:
			hello();
			break;
		case 2:
			nihao();
			break;
		default:
			printf("See you next time!");
			break;
	}
	return 0;
}