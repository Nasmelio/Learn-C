#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void menu()
{
	printf("********************************\n");
	printf("***** 1.Play   **   2.Exit *****\n");
	printf("********************************\n");
}

void game()
{
	int ret = 0;
	ret = rand() % 100 + 1;
	int count = 1;
	while (1)
	{
		int guess = 0;
		printf("Guess Number:");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("Your Numb is SMALL!\n");
			count++;
		}
		else if (guess > ret)
		{
			printf("Your Numb is BIG!\n");
			count++;
		}
		else
		{
			printf("You are SMART! Good job!\n");
			printf("Times:%d\n", count);
			break;

		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Please Choose Your numb:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Exit Game !\n");
			break;
		default:
			printf("Error Numb !\n");
			break;
		}
	} while (input);
	return 0;
}