#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	//printf("今天是 %d 年 %d 月12 %s。", 2026, 3, "日");
//	//return 0;
//	//char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	//printf("%d\n", strlen(a));
//	//printf("%.25s" , a);
//	//printf("%-+15.*lf" , 3, 3.1415926);//  +号加在浮点型占位符里面是显示正负数，-号代表左对齐15代表占位大小.3是小数点后几位 *相当于占位符
//
//	//int score = 0;
//	//printf("请输入你的年龄；");
//	//scanf("%d", &score);
//	//printf("你的年龄为 %d 岁。", score);
//
//	/*float a = 0;
//	printf("输入一个小数；");
//	scanf("%f", &a);
//	printf("%f", a);*/
//
//	/*int n = 0;
//	int y = 0;
//	int r = 0;
//	printf("请输入你的生日：");
//	scanf("%d%*c%d%*c%d", &n, &y, &r);
//	printf("你的生日为:%d %d %d", n, y, r);*/
//
//	/*int x = 0;
//	float y = 0;
//	scanf("%d",&x);
//	printf("%d\n",x);
//	scanf("%f", &y);
//	printf("%f\n", y);*/
//
//	/*int x = 0;
//	double y = 0;
//	scanf("%d %lf", &x, &y);
//	printf("x=%d\ny=%f",x,y);*/
//
//	
//
//	return 0;
//}
//输入一个数判断是否为奇数
//int main()
//{
//	int input = 0;
//	printf("请输入一个数字");
//	scanf("%d", &input);
//	if (input % 2 == 0)
//		printf("%d是偶数", input);
//	else
//		printf("%d是奇数", input);
//	//输入
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//判断年龄是否成年
//	int age = 0;
//	printf("请输入你的年龄：");
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("你的年龄为%d岁已成年可以观看", age);
//	}
//	
//	else if (age < 0)
//		printf("你还没出生，让你爸妈努努力");
//	else
//		printf("你未成年，学习去吧！");
//	return 0;
//}

//智能温控系统模拟
#include <stdio.h>
int main()
{
	int temp = 35; //当前芯片温度
	int isRunning_AI = 1; //是否再跑AI模型1为是否为0；
	int manual_off = 0; //手动强制关闭开关，1为强制关，0为正常
	if (manual_off == 1)
		printf("System locked : Fan off");
	else if (temp >= 40 || (temp > 30 && isRunning_AI))
		printf("Fan on");
	else if (temp < 25)
		printf("System Cool");
}