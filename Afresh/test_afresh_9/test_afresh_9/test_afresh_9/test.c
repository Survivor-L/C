#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Add(int x,int y) 
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c =	Add(a,b);
//	printf("%d", c);
//	return 0;
//}

//调试练习
//断点，监视，内存
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int s = 0;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//		s+= sum;
//	}
//	printf("%d", s);
//	return 0;
//}

//函数递归

//int set(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//	return n * set(n - 1);
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = set(n);
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	//二进制在电脑中有三种保持方式
//	//源码，反码，补码
//	//32个bit位，一个int类型的数占4字节，也就是32bit，源码首位用来存储符号1代表有符号也就是负数
//	//无符号的(unsigned int) 也就是正整数 源码，反码，补码都相同
//	00000000000000000000000000000001; //源码、反码、补码 1
//	//有符合号的 -1
//	10000000000000000000000000000001; //源码
//	11111111111111111111111111111110; //反码 指源码取反，注意首位符号不变
//	11111111111111111111111111111111; //补码指取反加1；计算机因为只能做加法运算，所以都是补码储存数值
//	return 0;
//}