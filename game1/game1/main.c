#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("******    1.play           *******\n");
	printf("******    0.exit           *******\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerBoard(board, ROW, COL);
		ret=CheckWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}










