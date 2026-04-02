#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//判断大端与小端存储
//	int a = 1;
//	int* p = &a;
//	if (*(char*)p)
//	{
//		printf("本地环境是小端序");
//	}
//	else
//		printf("本地环境是大端序");
//	return 0;
//}
////
////0000000000000000010000000

//int main()
//{
//	float f = 5.5f;
//	// 00000000c8ed0c34 ff 7f 00 00 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
//
//	//(-1) ^ 0 * (13 - 127);
//	return 0;
//}

//结构体类型，没创建
struct Book
{
	char BookName[20];
	char author[20];
	float price;
	char ID [19];
}b3,b4;//机构体变量创建1

int main()
{
	float f = 3.1415f;
	struct Book b1;//机构体变量创建2
	struct Book b2;
	struct Book b5 = { "《剑来》","大内总管",38.5f,"JL0123456789ABCDEF" }; //初始化
	struct Book b6 =
	{ .ID ="JL0123456789ABCDEF",.BookName ="《剑来2》",.author="大内总管1", .price=38.88f }; //初始化
	printf("%s %s %f %s \n", b5.BookName, b5.author, b5.price, b5.ID); //使用

	printf("%f",b6.price); //浮点数在内存不能精确存储


	if (fabs(f - 3.1415f) < 0.0000001)    //fabs 是浮点数的绝对值 abs是整型的绝对值
		printf("相等");
	else
		printf("不相等");
	return 0;
}