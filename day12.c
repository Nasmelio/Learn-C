#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int max(int x, int y)
//{
//	int z;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//
//int main()
//{
//	int x;
//	int y;
//	int c;
//	printf("Enter your numb:");
//	scanf("%d %d", &x, &y);
//	c = max(x, y);
//	printf("%d is bigger!", c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int c = 1;
//	for (i = 1; i < 6; i++)
//	{
//		c = c * i;
//	}
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	int a, j, k;
//	int count=0;
//	for (a = 1; a < 5; a++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			for (k = 1; k < 5; k++)
//			{
//				if (a != j && j!= k && k != a )
//				{
//					printf("result: %d %d %d \n", a, j, k);
//					count++;
//				}
//			}
//		}
//
//	}
//	printf("count=%d\n",count);
//	return 0;
//}

int main()
{
	int profit = 0;
	int bonus = 0;
	printf("Enter Profit =");
	scanf("%d", &profit);
	if (profit <= 10000)
	{
		bonus = profit * 0.1;
	}
	else if (profit <= 20000)
	{
		bonus = 10000 * 0.1 + (profit - 10000) * 0.075;
	}
	else if (profit <= 40000)
	{
		bonus = 10000 * 0.1 + 10000 * 0.075 + (profit - 20000) * 0.05;
	}
	else if (profit <= 60000)
	{
		bonus = 10000 * 0.1 + 10000 * 0.075 + 20000 * 0.05 + (profit - 40000) * 0.03;
	}
	else if (profit <= 100000)
	{
		bonus = 10000 * 0.1 + 10000 * 0.075 + 20000 * 0.05 + 20000 * 0.03+(profit-60000)*0.015;
	}
	printf("Your Bonus is %d", bonus);
	return 0;
}
