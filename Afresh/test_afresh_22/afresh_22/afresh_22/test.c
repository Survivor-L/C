#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int n = 0, m = 0;
//	int arr[10][10] = {0};
//		scanf("%d %d", &n, &m);
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				printf("%d ", arr[j][i]);
//			}
//			printf("\n");
//		}
//	return 0;
//}


//枚举，创建选项首位是0，后面加1
//enum option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//int a = 0, b = 0;
//void menu()
//{
//	printf("**********请选择**********\n");
//	printf("********* 1.加法 *********\n");
//	printf("********* 2.减法 *********\n");
//	printf("********* 3.乘法 *********\n");
//	printf("********* 4.除法 *********\n");
//	printf("********* 0.退出 *********\n");
//}
//void MyInput()
//{
//	printf("输入要计算的数字：\n");
//	scanf("%d %d",&a,&b);
//}
//int MyAdd(int X ,int Y)
//{
//	return X + Y;
//}
//int MySub(int X, int Y)
//{
//	return X - Y;
//}
//int MyMul(int X, int Y)
//{
//	return X * Y;
//}
//int MyDiv(int X, int Y)
//{
//	return X / Y;
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//			case ADD://加
//				MyInput();
//				printf("%d\n", MyAdd(a, b));
//				break;
//			case SUB://减
//				MyInput();
//				printf("%d\n", MySub(a, b));
//				break;
//			case MUL://乘
//				MyInput();
//				printf("%d\n", MyMul(a, b));
//				break;
//			case DIV://除
//				MyInput();
//				printf("%d\n", MyDiv(a, b));
//				break;
//			case EXIT://退出
//				break;
//			default:
//				printf("输入有误，请重新输入\n");
//				break;
//		}
//
//	} while (input);
//	return 0;
//}

//联合体
// 定义一个联合体，用于探测字节序
union EndianTest {
    int i;    // 4 字节（32位系统典型值）
    char c; // 4 字节，与 i 共享同一块内存
};

//int main() {
//    union EndianTest t;
//    t.i = 0x12345678;   // 写入一个已知十六进制值
//
//    printf("整数 0x12345678 在内存中的字节排列：\n");
//    for (int k = 0; k < 4; k++) {
//        printf("地址 %p 处的字节: 0x%02X\n", (void*)&t.c[k], t.c[k]);
//    }
//
//    // 判断大小端
//    if (t.c[0] == 0x78) {
//        printf("\n当前系统为：小端模式 (Little-Endian)\n");
//    }
//    else if (t.c[0] == 0x12) {
//        printf("\n当前系统为：大端模式 (Big-Endian)\n");
//    }
//    else {
//        printf("\n未知的字节序模式\n");
//    }
//
//    return 0;
//}

int main() {
    union EndianTest t;
    t.i = 1;   // 写入一个已知十六进制值
    // 判断大小端
    if (t.c == 1) {
        printf("\n当前系统为：小端模式\n");
    }
    else {
        printf("\n当前系统为：大端模式\n");
    }
    return 0;
}