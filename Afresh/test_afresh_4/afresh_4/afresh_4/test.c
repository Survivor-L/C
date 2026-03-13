#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("比较大小:");
//	scanf("%d %*c %d", &a , &b);
//	int c = (a > b ? a : b);
//	printf("%d比较大", c);
//	return 0;
//}

//int main() {
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0)||year % 400 ==0)
//		printf("%d是闰年", year);
//	else
//		printf("%d不是闰年",year);
//	return 0;
//}
//输入一到七的数字对应打印周一到周日
//int main()
//{
//	int week = 0;
//	scanf("%d", &week);
//	switch (week)
//	{
//	case 1:
//		printf("今天是周一");
//		break;
//	case 2:
//		printf("今天是周二");
//		break;
//	case 3:
//		printf("今天是周三");
//		break;
//	case 4:
//		printf("今天是周四");
//		break;
//	case 5:
//		printf("今天是周五");
//		break;
//	case 6:
//		printf("今天是周六");
//		break;
//	case 7:
//		printf("今天是周日");
//		break;
//	default :
//		printf("你的输入有误;");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	for (int i =1 ;i <= 100; i++)
//	{
//		if (i % 3 == 0) {
//			printf("%d ", i);
//			num += i;
//		}
//		
//	}
//	printf("\n%d", num);
//	return 0;
//}

//int main()
//{  
//	int i = 0;
//	int sum = 0;
//	for (i = 3;i <= 100; i+=3)
//	{
//		sum += i;
//	}
//	printf("\n%d", sum);
//	printf("\n%d", i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &sum);
//	do
//	{
//		sum = sum / 10;
//		i++;
//	} while (sum);
//	printf("%d", i);
//	return 0;
//}
//break;终止循环
//continue;跳过本次循环后面代码，在while里容易死循环

//模拟al联网逻辑练习
int main()
{
	int i = 0;
	for (i = 1;i <= 5;i++) 
	{
		printf("正在连接…第%d次连接\n", i);
		if(i==3)
		{
			printf("已成功连接");
			break;
		}

	}
	if (i > 5)
		printf("连接失败，进入休眠模式\n");
	return 0;
}