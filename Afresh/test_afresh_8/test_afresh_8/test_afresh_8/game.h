#pragma once
#include <stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void game();
//展示棋盘
void InitBoard(char board[ROWS][COLS],int rows ,int cols , char set);
//初始化棋盘
void DisplayBoard(char board[ROWS][COLS],int row, int col);