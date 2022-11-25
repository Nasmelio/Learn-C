#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//typedef void(*pfu_t)(int);

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int(*pa)[5] = &arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", (*pa)[i]);
//	}
//	return 0;
//}

//void Print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void Print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	Print1(arr,3,5);
//	printf("\n");
//	Print2(arr,3,5);
//	return 0;
//}

//int main()
//{
//	int arrat[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* tt = &arrat;
//	int l = 0;
//	for (l = 0; l < 10; l++)
//	{
//		//printf("%d ", *(tt + l));
//		//printf("%d ", tt[l]);
//		//printf("%d ", *(arrat + l));
//		printf("%d ", arrat[l]);
//	}
//	return 0;
//}

//  void(* signal(int,void(*)(int)) )(int);
//  pfu_t signal(int, pfu_t);

//  (* (void(*)())0)()
//  void(*  signal( int, void(*)(int))  )(int); 


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Dev(int x, int y)
//{
//	return x / y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*all0)(int, int) = Add;                         //一个一个打印答案
//	int(*all[4])(int, int) = { Add,Dev,Mul,Sub };       //一起打印答案
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int answ = 0;
//		answ = all[i](3, 2);
//		printf("%d\n", answ);
//	}
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("****************************\n");
	printf("***| 1.Add        2.Sub |***\n");
	printf("***| 3.Mul        4.Div |***\n");
	printf("***|        0.Exit      |***\n");
	printf("****************************\n");
}
int main()
{
	int input;
	int a = 0;
	int b = 0;
	int(*all[])(int, int) = { 0, Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("Please chose a numb!:");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("Please enter your numb!:");
			scanf("%d %d", &a, &b);
			int ans = all[input](a, b);
			printf("Answer is: %d\n", ans);
		}
		else if (input == 0)
		{
			printf("See you next time!\n"); 
		}
		else
		{
			printf("Error numb!\n");
		}
	} while (input);
	return 0;
}