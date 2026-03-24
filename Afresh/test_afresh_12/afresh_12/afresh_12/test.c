#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针与数组

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	printf("%p\n", p); 
//	printf("%p\n", arr);	//数组名是数组的首元素的指针\地址	
//	printf("%p", &arr);//整个数组的地址
//	
//
//	return 0;
//}

//指针遍历数组

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = &arr[0]; 两种写法都行
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}


//void test(int arr[10])
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1 = %d\n", sz1);
//	test(arr);
//	return 0;
//}
//#include <stdbool.h>
//
////冒泡排序
//void Sort(int* arr, int sz)
//{
//	for (int i = 0; i < sz-1; i++)
//	{
//		bool flag = true;
//		for (int j = 0; j < sz -1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = false;
//				int tep = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tep;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//			
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 521;
//	int* p = &a;
//	int** pp = &p;
//	/***pp = 520;*/
//	printf("a = %d\n", a);
//	printf("p = %d\n", *p);
//	printf("pp = %d\n", **pp);
//	if (a == *p && a == **pp & *p == **pp)
//	{
//		printf("一个意思");
//	}
//	return 0;
//}

//指针数组

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	int* arr[] = { &a, &b, &c };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}


//指针模拟二维数组
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int* arr[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


////字符指针
//int main()
//{
//	const char* p = "abcdef";
//	printf("%s \n", p);
//	printf("%c ", *p);
//	return 0;
//}

//数组指针

int main()
{
	char* ch[5];
	char* (*pc)[5] = &ch;
}