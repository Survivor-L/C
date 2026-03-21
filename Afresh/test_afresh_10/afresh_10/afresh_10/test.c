#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//void SetStr(char str[])
//{
//	int len = strlen(str);
//	if (len <= 1)
//		return;
//	
//		char t = str[0];
//		str[0] = str[len - 1];
//		str[len - 1] = '\0';
//		SetStr(str +1);
//		str[len - 1] = t;
//	
//	
//}
//int main()
//{
//	char str[] = "abcde";
//	SetStr(str);
//	printf("%s", str);
//	return 0;
//}

////算术操作符
//int main()
//{
//	int a = 10;
//	int b = a << 2; //左移操作符
//	//00000000000000000000000000001010 因为是无符号整数所以反码源码补码都是这个
//	//00000000000000000000000000101000 最左边去掉2最右边补00；也就是40
//	printf("%d", b);
//	return 0;
//}

//算术操作符
//int main()
//{
//	int a = -10;
//	int b = a << 2; //左移操作符
//	//10000000000000000000000000001010 因为是负数整数所以反码源码补码不同
//	//11111111111111111111111111110101 //这是反码
//	//11111111111111111111111111110110 //这是补码
//	//11111111111111111111111111010111最左边去掉2最右边补00；也就是40
//	//10000000000000000000000000101000
//	printf("%d", b);
//	return 0;
//}
//

//int main()
//{
//	int a = -10;
//	int b = a >> 2; //右移操作符
//	printf("%d", b);
//	//10000000000000000000000000001010
//	//11111111111111111111111111110101
//	//11111111111111111111111111110110 //补码
//	//11111111111111111111111111111101 //右移两位
//	//10000000000000000000000000000011
//	return 0;
//}


//int main()
//{
//	int a = 1 & 2; //按位与
//	int b = 1 | 2; //按位或
//	int c = 1 ^ 8; //按位异或
//	int d = ~3; //按位取反
//	printf("%d %d %d %d", a, b ,c ,d);
//	return 0;
//}
//不创建新变量交换ab的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	//0000000000000000000000000000000011
//	//0000000000000000000000000000001000
//	//1111111111111111111111111111110100
//	//0000000000000000000000000000001011
//	int b = 8;
//	a = a ^ b;
//	b = a ^ b;   // b =  a ^ b ^ b; b = a
//	a = a ^ b;     //a = a ^ b ^ b 这个时候b里放的是a 所以 a = a ^ b ^ a  a = b
//
//	printf("a=%d b=%d \n", a, b);
//	printf("%d", 3 ^ 8);
//	return 0;
//}
//算出一个数的二进制在内存里有多少1.补码
//int sum(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//			/*printf("%d ", a % 2);*/
//		}
//		
//		a =	a / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = 0;
//		c = sum(a);
//	printf("%d", c);
//	return 0;
//}

//int sum(unsigned int a)
//{
//	int count = 0;
//	for (int i = 0;i < 32;i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = sum(a);
//	printf("%d", c);
//	return 0;
//}
//二度优化
int sum(unsigned int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1); //去掉最右边的1，直到没有
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int c = sum(a);
	printf("%d", c);
	return 0;
}