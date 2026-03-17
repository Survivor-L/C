
//#include <stdio.h>
//
//extern int x;
//void test(void)
//{
//	static int a = 1; //static 作用类似保留变量的生命周期
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	for (int i = 0; i < 5;i++)
//	{
//		test();
//	}
//	printf("%d", x);
//	return 0;
//}
//扫雷游戏

#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu(void)
{
	printf("*********************\n");
	printf("*********************\n");
	printf("***** 1.开始游戏 ****\n");
	printf("*********************\n");
	printf("***** 2.退出游戏 ****\n");
	printf("*********************\n");
	printf("*********************\n");
	return;
}
void game()
{  
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(show,ROW,COL);
}

int main()
{
	int input = 0;
	while (input != 2)
	{
		menu();
		scanf("%d", &input);
		if (input == 1)
		{
			game();
		}
		else if (input == 2)
			printf("退出游戏\n");
		else
		{
			while (getchar() != '\n');
			printf("重新输入\n");
			continue;
		}
	}
	return 0;
}