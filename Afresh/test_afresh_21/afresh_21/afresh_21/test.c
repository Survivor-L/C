#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
#pragma pack (2) //自定义结构体的默认对齐数 //vs默认对齐数是8
#pragma pack ()
//struct Node
//{
//	int data;
//	char name;
//};
//
//
//int main()
//{
//	printf("%zd\n", sizeof(struct Node));
//	//offsetof(type, member)这是计算自定义结构的元素在自定义结构体内存的偏移量
//	//#include <stddef.h> 要加上这个头文件
//	printf("%zd\n", offsetof(struct Node, name));
//	
//	return 0;
//}

//struct S
//{
//	int arr[500];
//	int n;
//	char c;
//}s1;
//void printfS(struct S tmp) 
//{
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d", tmp.arr[i]);
//	}
//	
//	
//		printf("%d", tmp.n);
//		printf("%c", tmp.c);
//	
//};
//int main()
//{
//	struct S s1 = { {1,2,3,4,5,6,7,8,9,10},10,'C' };
//	printfS(s1);
//	return 0;
//}

//struct S
//{
//	int arr[500];
//	int n;
//	char c;
//}s1;
//
//void printfS(struct S * tmp)
//{
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d", (*tmp).arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", (*tmp).n);
//	printf("%c\n", (*tmp).c);
//
//}
//
//int main()
//{
//	struct S s1 = { {1,2,3,4,5,6,7,8,9,10},10,'C' };
//	printfS(&s1);
//	return 0;
//}


//struct S
//{
//	int arr[500];
//	int n;
//	char c;
//}s1;
//
//void printfS(struct S* tmp)
//{
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d", tmp->arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", tmp->n);
//	printf("%c\n", tmp->c);
//
//}
//
//int main()
//{
//	struct S s1 = { {1,2,3,4,5,6,7,8,9,10},10,'C' };
//	printfS(&s1);
//	return 0;
//}


//位域，或者位段
//struct MyStruct1
//{
//	int _a : 2; //这个数字是2进制的位数01，也是比特位 ，位域的作用就是把多个字节的数据，尽量存放较少字节
//	int _b : 4;  //0001
//	int _c : 8;	 //000000001
//	int _d : 32; //int 最大32位
//};
//struct MyStruct2
//{
//	int _a;
//	int _b;
//	int _c;
//	int _d;
//
//};
//int main()
//{
//	printf("%zu\n", sizeof(struct MyStruct1));
//	printf("%zu\n", sizeof(struct MyStruct2));
//	return 0;
//}

enum Sex //枚举
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	enum Sex s1 = MALE;
	enum Sex s2 = FEMALE;
	enum Sex s3 = SECRET;

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}