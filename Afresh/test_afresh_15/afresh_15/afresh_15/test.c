#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include<time.h>
//int main()
//{
//	//猜数字游戏
//	int num = srand((unsigned int)time);
//	printf("在0-100间猜一个数字:\n");
//	int a = 1 + rand() % 100;
//
//	for (int i = 0; i < 10; i++)
//	{
//		int input = 0;
//		scanf("%d", &input);
//		if (input == a)
//		{
//			printf("恭喜你猜对了\n");
//			break;
//
//		}
//		else if (input < a)
//			printf("猜小了\n");
//		else if (input > a)
//			printf("猜大了\n");
//	}
//		return 0;
//	}

//KiKi想知道，已经给出的三条边a、b、c
//能否构成一个非退化三角形，如果能构成，判断三角形的类型（等边三角形、等腰三角形或普通三角形）

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b > c && b + c > a && c + a > b)
//	{
//		if (a == b && a == c && b ==c) 
//		{
//			//如果三角形是等边三角形，则输出
//			printf("Equilateral triangle!");
//				
//		}
//		else if (a == b || b == c || a == c)
//		{
//			//如果三角形是等腰三角形，则输出
//			printf("Isosceles triangle!");	
//				
//		}
//		else
//		{
//			//如果三角形是普通三角形，则输出
//			printf("Ordinary triangle!");
//		}
//	}
//	else
//	{
//		//如果不能构成非退化三角形，则输出
//		printf("Not a triangle!");
//	}
//	return 0;
//}

//在屏幕上输出9 * 9乘法口诀表

//int main()
//{
//	for (int i = 1; i < 9; i++)
//	{
//		for (int j = 1; j < 9; j++) 
//		{
//			printf("%d ", i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//写一个代码：打印100~200之间的素数

int main()
{
	for (int i = 100; i <= 200; i++)
	{
		int flag = 1;
		for (int j = 2; j <= 9; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
			}
		}
		if (flag)
			printf("%d ", i);
	}

	return 0;
}