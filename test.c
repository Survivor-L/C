#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//头文件使用c语言默认的库函数要加
//int main()
//{ 
//	printf("你真棒");
//	printf("%d\n", 100);
//	return 0;
//}
//main是程序入口，有而只有一个 
//int是关键字代表整型
//c语言中单引号里面是字符，双引号里是字符串
//int main() {
//	int i = 0;
//	for (i = 0; i <=128; i++)
//	{
//	printf("%c", i );
//	if (i % 16 == 15) {
//		printf("\n");
//	}
//	}
//	return 0;
//}
#include <string.h>

//int main() {
//	/*char arr1[] = "abcdef";
//	char arr2[]={ 'a','b','c','d','e','f','\0'};
//	printf("%s\n",(arr1));
//	printf("%s\n",(arr2/a));*/
//	printf("\520666");
//	return 0;
//};
#include <stdbool.h>
//int main() {
//	/*_Bool flag = true;*/
//	/*bool flag = true;
//	if (flag) {
//		printf("你好，元旦快乐！");
//	}*/
//	printf("%zd\n",sizeof(char));
//	return 0;
//}
//int main() {
//	short s = 12;
//	int b = 1000;
//	/*printf("%zd\n", sizeof(s = b + 1));*/
//	printf("%zd\n", sizeof(s));
//	printf("%zd\n", sizeof(b));
//	printf("%d", s);
//	return 0;
//}
////sizeof()会返回一个单独的类型size_t ，要用%zd打印
////signed代表有符号，包含负数，unsigned是无符号只能是正整数
////int默认是有符号的  
//int main() {
//	int num = -100;
//	unsigned int sum  = 200;
//	printf("%d\n", num);
//	printf("%u\n", sum);
//	return 0;
//}

//%u 打印的是有无符号的整型 %d 打印有符号的整型

//变量  分为全局变量和局部变量 命名 类型+变量名 = 初始化赋值
//局部变量只在声明范围内使用，
//与全局变量冲突时，局部变量生效
//int main() {
//	unsigned int age = 24;
//	return 0;
//}
#include <stdio.h>
//int main() {
//	double score = 5.0;
//	score = (score / 20.0)*100.0;
//	printf("%f", score);
//}
//int main() {
//	printf("%d\n", 10 % 4);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
int main() {
	/*printf("%6.4f", 3.1415);
	限制了宽度最低六位，小说点后最高四位 */
	//printf("%*.*lf\n",6,3,3.1415926);
	//printf("%s今年%d岁\n","王羲之", 24);
	//printf("我最喜欢的颜色是#%.5s", "008c8c");
	//printf("我最喜欢的颜色是#%lx", 16777215);
	int score = 0;
	printf("请输入分数：");
	scanf("%d",&score);
	printf("您的分数是：%d",score);
	//scanf函数中占位符的后面需要输入地址
	//&是取地址操作符；&score是取出score变量的地址
	return 0;
}