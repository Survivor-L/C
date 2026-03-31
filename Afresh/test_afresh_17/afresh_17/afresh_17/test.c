#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//strncat 限制字符追加
//char* MyStrncat(char* str1, const char* str2, size_t num)
//{
//	char* ret = str1;
//	assert(str1 && str2);
//	while (*str1 !='\0')
//	{
//		str1++;
//	}
//	while (*str2 && num)
//	{
//		*str1++ = *str2++;
//		num--;
//	}
//	*str1 = '\0';
//	return ret;
//}
//int main()
//{
//
//	/*char arr1[] = "My name is ng";
//	char arr2[25] = {0};
//	strcat(arr2, arr1);
//	printf("%s", arr2);*/
//
//	/*char arr1[] = "My name is ng";
//	char arr2[25] = {0};
//	strncat(arr2, arr1 ,10);
//	printf("%s", arr2);*/
//
//	char arr1[30] = "My name is \0xxxxxxxxx ";
//	char arr2[15] = "XiShengLiang";
//	//MyStrncat(arr1, arr2 ,7);
//	strncat(arr1, arr2, 7);
//	printf("%s", arr1);
//	return 0;
//}


//strtok 分隔字符 应用
//int main()
//{
//	char arr[] = "abc.def.ghi.jkl@qqmn";
//	char delim[] = ".@";
//	char* token = strtok(arr, delim);
//	printf("%s\n", token);
//	token = strtok(NULL, delim);
//	printf("%s\n", token);
//	token = strtok(NULL, delim);
//	printf("%s\n", token);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc.def.ghi.jkl@qqmn";
//	char arr2[50] = { 0 };
//	strcpy(arr2, arr1);
//	char delim[] = ".@";
//	
//	for (char* token = strtok(arr2, delim);token != NULL; token = strtok(NULL, delim))
//	{
//		printf("%s\n", token);
//	}
//	return 0;
//}


//strstr 在字符串中找另一个字符串 没有返回空 有返回字符串地址
//int main()
//{
//	char arr1[] = "abcdefcdef";
//	char arr2[] = "cde";
//
//	char* strp = strstr(arr1, arr2);
//
//	printf("%s", strp);
//	return 0;
//}

//模拟实现strstr
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//const char* MyStrstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	if (*str2 == '\0') 
//		return str1;
//	const char* cur = str1;
//	while(*cur)
//	{
//		const char* s1 = cur;
//		const char* s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2=='\0')
//			return cur;
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcef";
//	char arr2[] = "bbc";
//	const char* strp = MyStrstr(arr1, arr2);
//	printf("%s", strp);
//	return 0;
//}

//内存函数 memcpy 复制内存块
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,10};
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1 + 2, 7 * sizeof(int));
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	
//	return 0;
//}

#include <string.h>
#include <stdio.h>
void* MyEmcpy(void* dest, void* src, size_t num)
{
	void* ret = dest;
	for (size_t i = 0; i < num; i++)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
		/*(*(char*)dest)++;
		(*(char*)src)++;*/

	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,10 };
	int arr2[20] = { 0 };
	 MyEmcpy(arr2, arr1 + 2, 7 * sizeof(int));
	for (size_t i = 0; i < 7; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}