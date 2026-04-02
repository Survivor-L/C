#define _CRT_SECURE_NO_WARNINGS 1
//字符函数与字符串函数
//#include <ctype.h>
//#include <stdio.h>
////int main()
//{
//	//isalnum 判断字符是否是数字或者字母
//
//	//char arr2[] = "xHH20260101";
//	//char arr1[] = "x.H20260101";
//	//int i = 0;
//	//int flag = 0;
//	//char bug = 0;
//	//while (arr1[i]!='\0')
//	//{
//	//	if (isalnum(arr1[i])||ispunct(arr1[i]))
//	//	{
//	//		flag = 1;
//	//	}
//	//	else
//	//	{
//	//		flag = 0;
//	//		bug = arr1[i];
//	//		break;
//	//	}
//	//	i++;
//	//}
//	//if (flag)
//	//	printf("密码正确: %s\n", arr1);
//	//else
//	//	printf("密码错误%s 存在非法字符%c\n", arr1,bug);
//
//
//
//	//inlower 判断传递的字符是否为小写，不是返回0，是返回值大于0
//	//printf("%d ", islower('A'));
//	//printf("%d ", islower('B'));
//	//printf("%d ", islower('C'));
//	//printf("%d ", islower('a'));
//	//printf("%d ", islower('b'));
//	//printf("%d ", islower('c'));
//
//	return 0;
//}

//将一个字符串的小写字母转大写
#include <stdio.h>
#include <ctype.h>
//int main()
//{
//	char arr[] = "my name is xi sheng liang !";
//	int i = 0;
//	while (arr[i]!= '\0')
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = arr[i] - 32;
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "my name is xi sheng liang !";
//	char arr2[] = "MY NAME IS XI SHENG LIANG !";
//	int i = 0;
//	while (arr1[i] != '\0')
//	{
//		arr1[i] = toupper(arr1[i]);
//		i++;
//	}
//	int j = 0;
//	while (arr2[j] != '\0')
//	{
//		arr2[j] = tolower(arr2[j]);
//		j++;
//	}
//	printf("arr1= %s\n", arr1);
//	printf("arr2= %s\n", arr2);
//
//	return 0;
//}

//#include <assert.h>
////模拟实现strlen
//size_t MyStrlen(const char *str)
//{
//	const char* start = str;
//	/*int i = 0;*/ //计数器写法
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//		//i++;
//	}
//	return str -start;
//}
//size_t MyStrlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return MyStrlen(str + 1) + 1;
//}
//模拟实现strlen 递归写法

//#include <assert.h>
//size_t MyStrlen(const char *str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//	{
//	return	MyStrlen(str+1) + 1;
//	}
//	else 
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcderghijklmnopqrstuvwxyz";
//	size_t len = MyStrlen(arr);
//	printf("%zd",len);
//	return 0;
//}

//strcpy 复制字符串
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcderghijklmnopqrstuvwxyz";
//	char arr2[27] = { 0 };
//	strcpy(arr2,arr1);
//	printf("arr2 = %s",arr2);
//	return 0;
//}

//模拟strcyp
//#include <string.h>
//#include <assert.h>
// 
// 
// char* MyStrcpy(char* dest, const char* src)
//{
//	assert(src&& dest);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	*dest = *src;
//	return ret;
//}
//char* MyStrcpy(char* dest, const char* src)
//{
//	assert(src && dest);
//	char* ret = dest;
//	while (*src != '\0')
//	{
//		*dest = *src;
//			src++;
//			dest++;
//	}
//	*dest = *src;
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[10] = { 0 };
//	char* strp =MyStrcpy(arr2,arr1);
//	printf("arr2=%s \n",arr2);
//	printf("arr2=%s \n", strp);
//	printf("%zd", strlen(arr2));
//	return 0;
//}


//#include <string.h>
//#include <assert.h>
////strcat 拼接字符
//int main()
//{
//	char arr1[13] = "abcdef";
//	char arr2[10] = "ghijkl";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//#include <string.h>
//#include <assert.h>
////strcat 模拟拼接字符
//char* MyStrcat(char* dest ,const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[13] = "abcdef";
//	char arr2[10] = "ghijkl";
//	MyStrcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

#include <string.h>
#include <assert.h>
//strncat 模拟拼接字符
char* MyStrncat(char* dest , const char* src ,size_t num)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (num--&&(*dest++ = *src++))
	{
		*dest = '\0';
	}
	return ret;
}
int main()
{
	char arr1[13] = "abcdef";
	char arr2[10] = "ghijkl";
	MyStrncat(arr1, arr2 ,3);
	printf("%s", arr1);
	return 0;
}






//strcmp 比较字符串大小
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdq";
//	char arr2[] = "abcd";
//	int num = strcmp(arr1, arr2);
//	printf("%d", num);
//	return 0;
//}

//模拟strcmp
//#include <string.h>
//#include <assert.h>
//int MyStrcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while ((*str1 && *str2) && (*str1 == *str2))
//	{
//		str1++;
//		str2++;
//	}
//		
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[] = "abcdq";
//	char arr2[] = "abcdqe";
//	int num = MyStrcmp(arr1, arr2);
//	printf("%d", num);
//	return 0;
//}