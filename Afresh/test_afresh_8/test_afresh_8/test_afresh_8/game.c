#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <stdlib.h>
#include <time.h>
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
	//打印列号
	printf("%s\n", "- - - -扫 雷- - - -");
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	printf("\n");
	for (int i = 1;i <= row; i++)
	{
	//打印行号
	 printf("%d  ", i);
	  for (int j = 1; j <= col;j++)
	  {
		  printf("%c ",board[i][j]);
	  }
	  printf("\n");
	}
}
//埋雷
void SteMine(char mine[ROWS][COLS], int row, int col)
{
	srand((unsigned int)time(NULL));
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] ='1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	/*mine[x - 1][y + 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] +
		mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';*/
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1 ; j++)
		{
			count += (mine[x + i][y + j] - '0');
		}
	}
	return count;
}
//扫雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int ros, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	

	while (win < ros * col - EASY_COUNT)
	{
		printf("输入你要排查雷的坐标(x,y 取1-9):\n");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= ros && y >= 1 && y <= col)
		{

			if (show[x][y] != '*')
			{
				printf("该坐标已排查过，请重新输入！\n");
				continue;
			}
			if (mine[x][y] != '1')
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
			else
			{
				printf("你踩到雷，游戏结束\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("输入的坐标有误！\n");
		}
	}
	if (win == ros * col - EASY_COUNT)
	{
		printf("游戏胜利！\n");
	}
}