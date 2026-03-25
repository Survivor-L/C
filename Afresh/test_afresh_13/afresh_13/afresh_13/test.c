#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int num = x / y;
//	int num1 = x % y;
//	printf("x/y商%d，余%d", num, num1);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 100; i+=3)
//	{
//		if(i % 3 == 0 && i !=0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//写代码将三个整数数按从大到小输出。
//
//例如：
//
//输入：2 3 1
//
//输出：3 2 1

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//函数指针

//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int  c = add(2, 3);
//	//printf("%d\n", c);
//
//	printf("%p\n", add);
//	printf("%p\n", &add);
//	int (* p)(int, int) = &add;
//	printf("%p", p);
//	(*(void(*)())0)();
//	return 0;
//}

//指针重命名



//typedef char s; //给类型重新定义个名字
//typedef int(*f)(int, int);
//
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	char str1 = "ABCDEF";
//	s str2 = "PC";
//	int (*pf)(int, int) = &add;
//	f pf1 = add;
//	printf("%p\n", pf);
//	printf("%p\n", pf1);
//	return 0;
//}


////函数指针数组声明
//int main() {
//
//	//int (*pf[5])(int, int) = { pf1,pf2,pf3,pf4,pf5 };
//	return 0;
//}


//函数指针数组应用，转移表
//模拟计算器

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int (*Cal[5])(int, int) = {0, Add,Sub,Mul,Div };
	do
	{
		printf("请输入你要选择的功能\n");
		printf("****** 1.加法 ******\n");
		printf("****** 2.减法 ******\n");
		printf("****** 3.乘法 ******\n");
		printf("****** 4.除法 ******\n");
		printf("****** 0.退出 ******\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入你要计算的数字\n");
			scanf("%d %d", &x, &y);
			int sum = Cal[input](x, y);
			printf("%d\n", sum);
		}
		else if(input == 0)
		{
			break;
		}
		else
		{
			printf("你输入的数字有误\n");
		}
	} while (input);
	

	return 0;
}