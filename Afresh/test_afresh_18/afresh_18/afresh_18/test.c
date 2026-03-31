#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//memcpy 拷贝
//void* MyMemcpy(void* dest, const void* src, size_t num)
//{
//	assert(src && dest);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		src = (char*)src + 1;
//		dest = (char*)dest + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = {0};
//	size_t CpyIntSz = 5 * sizeof(int);
//	MyMemcpy(arr2, arr1+ 2 , CpyIntSz);
//
//	for (int i = 0; i < CpyIntSz /4 ; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//} 

//memove
//void* MyMemmove(void* dest, const void* src, size_t num)
//{
//	assert(src && dest);
//	void* ret = dest;
//
//		if (dest < src) //从前往后移动
//		{ 
//			while (num--)
//			{
//				*(char*)dest = *(char*)src;
//				src = (char*)src + 1;
//				dest = (char*)dest + 1;
//			}
//		}
//		else
//		{
//			while (num--)
//			{
//				*((char*)dest + num) = *((char*)src + num);
//			}
//		}
//		return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	/*memmove(arr1, arr1 + 2, 5 * sizeof(int));*/
//	MyMemmove(arr1+4, arr1 + 2, 5 * sizeof(int));
//	for (int i = 0; i < 10 ; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


int main()
{
	char arr[] = "hello ,Word";
	memset(arr+6, '*', 5);
	printf("%s ", arr);
	return 0;
}