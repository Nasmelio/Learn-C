#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

int menu()
{
	printf("********************************\n");
	printf("****  1.PLay      0.Exit   *****\n");
	printf("********************************\n");
}

void Game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
}

void start()
{
	int input;
	do
	{
		menu();
		printf("Please Enter Your chose:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n");
			printf("Welcome to play the game!\n");
			Game();
			break;
		case 0:
			printf("\n");
			printf("See You next time!\n");
			break;
		default:
			printf("\n");
			printf("Enter Correct numb!\n");
		}
	} while (input);
}

int main()
{
	start();
	return 0;
}