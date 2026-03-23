#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//*表示pa是指针变量，int表示这个地址存放的数据类型，pa是指针变量
//	char b = 'b';
//	char* pb = &b; //指针类型和解引用的时候读取内存字节有关
//	*pa = 31; //这里的*是解引用操作符\间接操作符;
//	printf("%p", pa);//地址打印用%p打印； &取地址；
//	return 0;
//}

//int main()
//{
//	int a = 10;         //00000000000000000000000000001010  & | ^ ~
//						//00000000000000000000000000000100
//	a |= (1 << 2);	   //11111111111111111111111111111100
//	printf("%d", a);	//10000000000000000000000000000100
//	return 0;
//}


//int main()
//{
//	const int num = 1;
//	int sum = 0;
//	int* p = &num;
//	*p = 200;
//	p = &sum;
//	*p = 520;
//	printf("%d", num);
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2 ,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*int* p = &arr[0];*/
//	//顺序打印
//	//for (int i = 0;i < sz; i++)
//	//{
//	//	printf("%d", arr[i]);
//	//}
//	//for (int i = 0;i < sz; i++)
//	//{
//	//	printf("%d \n", *p);
//	//	p++;
//	//}
//	//for (int i = 0;i < sz; i++)
//	//{
//	//	printf("%d \n", *(p + i));
//	//}
//	//逆序打印
//	//int* p = &arr[sz-1];
//	//for (int i = sz-1;i >= 0; i--)
//	//{
//	//	printf("%d \n", *p);
//	//	p--;
//	//}
//	//int* p = &arr[0];
//
//	//for (int i = sz-1;i >= 0; i--)
//	//{
//	//	printf("%d \n", *(p+i));
//	//}
//
//
//	return 0;
//}

//求字符数组长度
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = &arr[0];
//	int count = 0;
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* start = &arr[0];
//	char* end = &arr[0];
//	while (*end)
//	{
//		end++;
//	}
//
//	printf("%d", (start - end));
//	return 0;
//}
//#define NDEBUG
//#include <assert.h>
//
//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	assert(p != NULL);
//	return 0;
//}
//#include <assert.h>
//size_t My_Strlen(const char* StrLenArr) //数组的第一个指针
//{
//	int count = 0;
//	while (*StrLenArr)
//	{
//		assert(StrLenArr != NULL); //判断传过来的参数是否为空
//		count++;
//		StrLenArr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t count = My_Strlen(arr);
//	printf("%zd", count);
//	return 0;
//}


void Swap(int* pa, int* pb)
{
	*pa = *pa ^ *pb;
	*pb = *pa ^ *pb;
	*pa = *pa ^ *pb;
	return;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	Swap(&a ,&b); //传址调用
	printf("a = %d,b = %d", a, b);
	return 0;
}