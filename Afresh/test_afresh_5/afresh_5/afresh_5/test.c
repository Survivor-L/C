#define _CRT_SECURE_NO_WARNINGS 1
//判断100到200一个数是否是质数 sqrt开平方的库函数
//int main()
//{
//	for ( int i = 101;i <= 200; i+=2)
//	{
//		int flag = 1;
//		for (int j = 3; j <= sqrt(i); j++)
//		{
//			if(i % j == 0)
//			{
//				flag = 0;
//				break;
//			}	
//		}
//		if (flag == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//goto 语句

//整蛊代码，喊爸爸
//int main()
//{
//	char arr[20] = {0};
//	system("shutdown -s -t 160");
//	start:
//	printf("叫爸爸:");
//	scanf("%s", arr);
//	if (strcmp("爸爸", arr) == 0 || strcmp("dayday", arr) == 0)
//	{
//		system("shutdown -a");
//		printf("乖儿子，已经解除了");
//	}
//	else
//	{
//		goto start;
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//#include <math.h> 
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{   
//	srand((unsigned int)time(NULL)); //给种子一个时间戳，让他随机
//
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d\n", rand() % 51+50); //50-100 随机数
//	}
//	
//	return 0;
//}

////猜数字 自己写的
//int main()
//{
//
//	srand((unsigned int)time(NULL));
//	int num = 0;
//	start:
//	printf("********************\n");
//	printf("********************\n");
//	printf("*****1.开始游戏*****\n");
//	printf("********************\n");
//	printf("*****0.结束游戏*****\n");
//	printf("********************\n");
//	printf("********************\n");
//	scanf("%d", &num);
//
//	do
//	{
//		switch (num)
//		{
//		case 1:
//		{
//			int sum = rand() % 100 + 1;
//			int count = 10;
//			printf("你需要在0-100猜一个数字共10次机会\n");
//			for (int i = 10; i >= 1; i--) {
//				int input = 0;
//				count--;
//				scanf("%d", &input);
//				if (input == sum)
//				{
//					printf("恭喜你回答正确，正确结果是: %d\n", sum);
//					goto start;
//				}
//				else if(input > sum)
//				{
//					printf("回答错误，%d 偏大 ,剩余%d次机会\n", input , count);
//					continue;
//				}
//				else if (input < sum)
//				{
//					printf("回答错误，%d 偏小 ,剩余%d次机会\n", input, count);
//					continue;
//				}
//			}
//			printf("游戏失败，你太菜了！！！\n");
//			goto start;
//			break;
//		}
//		case 0:
//			printf("菜B玩不起！\n");
//			break;
//		default:
//		{
//			printf("别瞎几把输入\n");
//			goto start;
//		}
//		}
//	} while (num);
//	return 0;
//}

//猜数字

////void menu()
////{
////	printf("********请选择******\n");
////	printf("********************\n");
////	printf("********************\n");
////	printf("*****1.开始游戏*****\n");
////	printf("********************\n");
////	printf("*****0.结束游戏*****\n");
////	printf("********************\n");
////	printf("********************\n");
////}
////void game()
////{
////	游戏逻辑
////	int sum = rand() % 100 + 1; //生成随机数
////	int count = 9;
////	printf("你需要在0-100猜一个数字共10次机会\n");
////	for (int i = 10; i >= 1; i--) 
////	{
////		int input = 0;
////		scanf("%d", &input);
////		if (input == sum)
////		{
////			printf("恭喜你回答正确，正确结果是: %d\n", sum);
////			break;
////		}
////		else if (input > sum)
////		{
////			printf("回答错误，%d 偏大 ,剩余%d次机会\n", input, count);
////		}
////		else if (input < sum)
////		{
////			printf("回答错误，%d 偏小 ,剩余%d次机会\n", input, count);
////		}
////		count--;
////	}
////	if (count < 0)
////	{
////		printf("游戏失败，你太菜了！！！\n");
////	}
////
////}
////int main()
////{
////	srand((unsigned int)time(NULL));
////	int input1 = 0;
////	do
////	{
////		menu();
////		scanf("%d", &input1);
////		switch (input1)
////		{
////		case 1:
////		{
////			game();//调用游戏函数
////			break;
////		}
////		case 0:
////			printf("菜B玩不起！\n");
////			break;
////		default:
////		{
////			printf("别瞎几把输入\n");
////			break;
////		}
////		}
////	} while (input1);
////	return 0;
////}


////一维数组
//#include <stdio.h>
//int main()
//{
//	int arr1[10];
//	int arr2[5] = { 1,2,3,4,5 };
//	char arr3[] = "abcdefghigklmnopqrstuvwsyz";
//	char arr4[] = { 'a', 'b', 'c', 'd' ,'e'};
//	/*printf("%zd\n", sizeof(arr4));
//	printf("%zd\n", sizeof(arr2));*/
//	int sz = sizeof(arr3) / sizeof(arr3[0]);
//
//	printf("%d \n", sz);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr3[%d]= %p \n", i, &arr3[i]);
//	}
//
//	return 0;
//}

//数组ai练习

#include <stdio.h>
int main()
{
	int signals[5] = {3,5,2,4,1};
	int sz = sizeof(signals) / sizeof(signals[0]); //数组长度
	for (int i = 0;i < sz; i++)
	{   
		for (int j = 0; j < signals[i];j++)
		{
			printf("*");
		}
		if (signals[i] > 4)
		{
			printf(" HIGH");
		}
		printf(" \n");
	}
	return 0;
}