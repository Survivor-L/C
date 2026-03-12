#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//printf("%s", "欢迎回来。");

	//字符型
	//char 字符

	//整形
	//[]内int可以省略
	//short [int] 短整型
	//int 整型
	//long [int] 长整型
	//long long [int] 更长的整型
	

	//浮点型
	//float 单精度浮点型
	//double 双精度浮点型
	//long double 更长的浮点型


	//布尔类型
	//_Bool || bool 值为true false

	//sizeof测试类型的长度单位字节
	//printf("%zd\n", sizeof(char));
	//printf("%zd\n", sizeof(short));
	//printf("%zd\n", sizeof(int));
	//printf("%zd\n", sizeof(long));
	//printf("%zd\n", sizeof(long long));
	//printf("%zd\n", sizeof(float));
	//printf("%zd\n", sizeof(double));
	//printf("%zd\n", sizeof(long double));
	//printf("%zd\n", sizeof(_Bool));

	/*signed int a = -100;
	unsigned int b = 100;
	printf("%d\n", a);
	printf("%u\n", b);*/
	

	//加减乘除 + - * /
	//int a = 17;
	//int b = 3;
	//printf("%d", a + b );
	//printf("%d\n", 10 / 4); //主要注意除法/,他会取整数商没有小数 2;
	//printf("%f\n", 10.0 / 4); //给任意一个数值加上小数点后正常;占位符也要改成%f //2.5000000

	

	return 0;
}