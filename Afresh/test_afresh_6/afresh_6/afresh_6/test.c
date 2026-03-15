#define _CRT_SECURE_NO_WARNINGS 1

//二维数组初始化
//int main() 
//{
//	char date1[3][5] = { 'A','B','C','D','E','F','G','H','I','G','K','L','M','N', 'O' };
//	//int date2[3][5] = { 0 };
//	//int date3[][5] = { 1,2,3,4,5,6,7 };
//	//int date4[][3] = { {1,2},{3,4},{5,6} };
//	return 0;
//}

// 二维数组的使用
//#include <stdio.h>
//int main()
//{
//	char date1[3][5] = { 'A','B','C','D','E','F','G','H','I','G','K','L','M','N', 'O' };
	//int sz = sizeof(date1[0]) / sizeof(date1[0][0]);
	
	//遍历二维数组
	//for (int i = 0; i < 3; i++) 
	//{
	//	for (int j = 0; j < 5; j++) 
	//	{
	//		printf("%c",date1[i][j]);
	//	}
	//}

//	int arr[3][5] = {0};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//		 scanf("%d",&arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
	//int n = 10;
	//int arr1[n] = { 0 };
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

#include <time.h>
//int main()
//{
//	char arr1[] = "ABCDEFGHIJKLMNO";
//	char arr2[] = "***************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while(left<= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("\r%s", arr2);
//		fflush(stdout);
//		Sleep(1000);//休眠1000 ms
//		/*system("cls");*/
//		left++;
//		right--;
//	}
//	/*printf("%s\n", arr2);*/
//	
//	return 0;
//}

////二分查找
//int main()
//{
////定义一个1-300的数组
//	int arr1[300];
//	int i = 0;
//	for (i = 0;i < 300;i++)
//	{
//		arr1[i] = i + 1;
//	}
//	//设置一个随机数1-300
//	srand((unsigned int)time(NULL));
//	int num1 = rand()% 300 + 1;
//
//	//数组下标
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	
//	printf("猜出我花了多少钱，300及以下\n");
//	//测试查看随机数
//	printf("其实是%d\n", num1);
//	//当最下标最小值不大于最大值时循环查找
//	while (left <= right)
//	{
//		//修改数组下标中间值
//		int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2; //优化代码防止超出整形最大值
//		if (arr1[mid] < num1) 
//		{
//			left = mid + 1;
//		}
//		else if (arr1[mid] > num1)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了下标是%d 数字是%d", mid ,arr1[mid]);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有这个数字超出范围了");
//	}
//	return 0;
//}

int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9} };

	for (int i = 0;i < 3;i++) 
	{
		for(int j =0;j< 3;j++)
		{
			arr[i][j] *= 2;
			printf("%d\n", arr[i][j]);
		}
	}
	return 0;
}