#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	/*KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的X形图案。
//	输入描述：
//	多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//	输出描述：
//	针对每行输入，输出用“ * ”组成的X形图案。*/
//
//	int input =  0;
//	while (scanf("%d", &input) != EOF) 
//	{
//		for (int i = 0; i < input; i++)
//		{
//			for (int j = 0; j < input; j++)
//			{
//				if (i == j || j == input - 1 - i)
//					printf("%c", '*');
//				else
//					printf("%c", ' ');
//
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的“空心”正方形图案。
//输入描述：
//多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“ * ”的数量。
//输出描述：
//针对每行输入，输出用“ * ”组成的“空心”正方形，每个“ * ”后面有一个空格。

//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	while(scanf("%d", &input)!=EOF)
//	for ( i = 0; i < input; i++)
//	{
//		for ( j = 0; j < input; j++)
//		{
//			if (i == 0 || i == input - 1 || j == 0 || j == input - 1)
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include <stdio.h>
#include <string.h>
//结构体  结构体的定义
//结构体用于将不同类型的数据组合成一个新的数据类型
//struct 结构体名 {
//    数据类型 成员1;
//    数据类型 成员2;
//    // ...
//};
struct Student {
    int id;
    char name[20];
    float score;
};
//struct Student {
//    int id;
//    char name[20];
//} stu2, stu3; //  方式二：定义类型的同时声明变量

//省略类型名（匿名结构体
//struct {
//    int id;
//    char name[20];
//} stu1;


int main()
{
    //结构体变量声明
    //方式一：先定义类型，后声明变量
    //struct Student stu1;
    
   // 按顺序初始化（C89 / C99）：
        struct Student stu1 = { 1001, "张三", 95.5 };
   // 指定成员初始化（C99）：
        struct Student stu2 = { .id = 1001, .score = 95.5, .name = "张三" };

        //赋值后逐个成员初始化
        struct Student stu;
        stu.id = 1001;
        strcpy(stu.name, "张三");
        stu.score = 95.5;

        //访问结构体成员
            //使用点运算符（.） 直接访问
            printf("%d\n", stu.id);

        //使用箭头运算符（->） 通过指针访问
            struct Student* p = &stu;
            p->id = 1002;   // 等价于 (*p).id = 1002;
            printf("%f", p->score);
	return 0;
}