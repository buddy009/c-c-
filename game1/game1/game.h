#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3  //行
#define COL 3  //列
//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);
// 打印棋盘
void DisplayBoard(char board[ROW][COL],int row,int col);

void PlayerBoard(char board[ROW][COL],int row,int col);

void ComputerMove(char board[ROW][COL],int row,int col);

char CheckWin(char board[ROW][COL],int row,int col);











