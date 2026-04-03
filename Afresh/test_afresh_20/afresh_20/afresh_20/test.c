#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	/*KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的X形图案。
//	输入描述：
//	多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//	输出描述：
//	针对每行输入，输出用“ * ”组成的X形图案。*/
//
//	int input =  0;
//	while (scanf("%d", &input) != EOF) 
//	{
//		for (int i = 0; i < input; i++)
//		{
//			for (int j = 0; j < input; j++)
//			{
//				if (i == j || j == input - 1 - i)
//					printf("%c", '*');
//				else
//					printf("%c", ' ');
//
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的“空心”正方形图案。
//输入描述：
//多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“ * ”的数量。
//输出描述：
//针对每行输入，输出用“ * ”组成的“空心”正方形，每个“ * ”后面有一个空格。

int main()
{
	int input = 0;
	int i = 0;
	int j = 0;
	while(scanf("%d", &input)!=EOF)
	for ( i = 0; i < input; i++)
	{
		for ( j = 0; j < input; j++)
		{
			if (i == 0 || i == input - 1 || j == 0 || j == input - 1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}