#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols ,char set)
{
	for (int i = 0;i < rows;i++)
	{
		for (int j = 0; j < cols;j++) {
			board[i][j] = set;
		}
	}
}

//展示棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	 for (int i = 0;i < row; i++)
  {
	  for (int j = 0; j < col;j++)
	  {
		  printf("%c ",board[i][j]);
	  }
	  printf("\n");
  }
}