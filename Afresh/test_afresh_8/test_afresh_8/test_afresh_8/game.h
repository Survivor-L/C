#pragma once
#include <stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void game();
//Õ¹Ê¾ÆåÅÌ
void InitBoard(char board[ROWS][COLS],int rows ,int cols , char set);
//³õÊ¼»¯ÆåÅÌ
void DisplayBoard(char board[ROWS][COLS],int row, int col);
//ÂñÀ×
void SteMine(char mine[ROWS][COLS],int ros, int col);
//É¨À×
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int ros, int col);