#define _CRT_SECURE_NO_WARNINGS 1
//函数使用
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0 ,
//		b = 0;
//	scanf("%d %d", &a ,&b);
//	int sum = add(a ,b);
//	printf("a + b = %d", sum);
//	return 0;
//}

//数组传参，一维
//#include <stdio.h>
//void set(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = -10;
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set(arr,sz);
//
//	return 0;
//}

//数组传参，二维
//#include <stdio.h>
//void set(int arr[][5], int sz ,int l)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < l; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set(arr,sz,5);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//bool if_leap(int y)
//{
//	if ((y % 4 == 0 && y % 100 == 0) || y % 400 == 0)
//		return true;
//	else
//		return false;
//}
//
////判断一年的一个月份有多少天
//int is_of_day(int y, int m)
//{
//	switch (m)
//	{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			return 31;
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			return 30;
//			break;
//		case 2:
//		{
//			if (if_leap(y))
//				return 29;
//			else
//				return 28;
//		}
//		default:
//			return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d %d", &year, &month);
//	day = is_of_day(year, month);
//	if (day)
//		printf("%d年%d月有%d天。", year, month, day);
//	else
//		printf("%d年没有%d月", year, month);
//	return 0;
//}


////函数的定义声明和调用
//#include <stdio.h>
//#include <stdbool.h>
//int if_leap(int); //这里是函数的声明 ，库函数的头文件也是一种定义
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int re = if_leap(year);
//	if (re)
//		printf("%d年是闰年",year);
//	else 
//		printf("%d年不是闰年",year );
//	return 0;
//
//}
//int if_leap(int y) //函数的定义，定义是一种特殊的声明，如果在调用前可以不用多余声明
//{
//	if ((y % 4 == 0 && y % 100 == 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//#include <stdio.h>
//#include "add.h" //引用外部文件
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x ,&y);
//	int z = add(x, y);
//	printf("%d", z);
//	return 0;
//}
#include <stdio.h>
extern int num; //引用外部已经定义的变量
int main()
{
	printf("%d", num);
	return 0;
}