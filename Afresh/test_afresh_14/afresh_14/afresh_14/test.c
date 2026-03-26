#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//int main()
//{
//	//冒泡
//	int arr[10] = { 3,4,1,9,2,8,6,7,5,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//			continue;
//		
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

// void SortArr(int* arr, int sz )
//{
//	for (int i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//			continue;
//	}
//}
//
// PrintfArr(int* arr, int sz)
// {
//	 for (int i = 0; i < sz; i++)
//	 {
//		 printf("%d ", arr[i]);
//	 }
// }
//int main()
//{
//	//冒泡
//	int arr[10] = { 3,4,1,9,2,8,6,7,5,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	SortArr(arr, sz);
//	PrintfArr(arr, sz);
//	return 0;
//}
// 
#include <stdio.h>
#include <stdlib.h>
// qsort()
//int CompareInt(const void* p1, const void* p2)
//{
//	/*return *((int*)p1) - *((int*)p2);*///升序
//	return *((int*)p2) - *((int*)p1);//降序
//}
//int main()
//{
//	int arr[] = { 1,0,3,8,9,2,7,5,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr ,sz, sizeof(arr[0]),CompareInt);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void bsort(int* arr ,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz -1 - i; j++)
//		{
//			int tep = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tep;
//		}
//	}
//}
//void PrintfArr(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bsort(arr,sz);
//	PrintfArr(arr, sz);
//	return 0;
//}

//比较数组前一个元素和后一个元素的大小
void IntSort(const void* p1, const void* p2)
{
	return *((int*)p1) - *((int*)p2);
}
//对数组前一个元素和后一个元素进行交换
void Swap(char* a , char*b ,size_t width)
{
	char tmp = 0;
	for (int i = 0; i < width; i++)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;
	}
}
//定义函数
void bsort(void* base, size_t sz, size_t width, int (*compar)(const void* , const void*))
{
	for (int i = 0; i < sz -1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (compar((char*)base + j * width  , (char*)base + (j + 1) * width) > 0)
			{
				Swap( (char*)base + j * width  , (char*)base + (j + 1) * width,width);
			}
			
		}
	}
}

//打印函数
void PrintfArr(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}


void test1()
{
	int arr[] = { 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bsort(arr, sz, sizeof(arr[0]), IntSort);
	PrintfArr(arr, sz);
}
void test2()
{
	int arr[] = { 3,4,1,9,2,8,6,7,5,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bsort(arr, sz, sizeof(arr[0]), IntSort);
	PrintfArr(arr, sz);
}

int main()
{
	test1();
	test2();
	return 0;
}