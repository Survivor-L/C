#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;//*表示pa是指针变量，int表示这个地址存放的数据类型，pa是指针变量
	char b = 'b';
	char* pb = &b; //指针类型和解引用的时候读取内存字节有关
	*pa = 31; //这里的*是解引用操作符\间接操作符;
	printf("%p", pa);//地址打印用%p打印； &取地址；
	return 0;
}