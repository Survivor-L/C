#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
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
//int main() {
//	/*char arr1[] = "abcdef";
//	char arr2[]={ 'a','b','c','d','e','f','\0'};
//	printf("%s\n",(arr1));
//	printf("%s\n",(arr2/a));*/
//	printf("\520666");
//	return 0;
//};

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
//#include <stdio.h>
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
//int main() {
//	/*printf("%6.4f", 3.1415);
//	限制了宽度最低六位，小说点后最高四位 */
//	//printf("%*.*lf\n",6,3,3.1415926);
//	//printf("%s今年%d岁\n","王羲之", 24);
//	//printf("我最喜欢的颜色是#%.5s", "008c8c");
//	//printf("我最喜欢的颜色是#%lx", 16777215);
//	int score = 0;
//	//printf("请输入分数：");
//	//scanf("%d",&score);
//	//printf("您的分数是：%d",score);
//	//scanf函数读取是用户的输入
//	//scanf函数中占位符的后面需要输入地址
//	//&是取地址操作符；&score是取出score变量的地址
//	/*int a;
//	int b;*/
//	/*printf("请输入队友的寿命：");
//	int s = scanf("%d %d", &a ,&b);
//	printf("你的队友寿命为：%d:\n" ,a + b );
//	printf("scanf的返回值是：%d", s);*/
//	char ch = 0;
//	printf("测试字符：");
//	int ret = scanf(" %c", &ch);
//	printf("你的名字叫做：AAA%cAAA\n", ch);
//	printf("scanf的返回值是：%d", ret);
//	return 0;
//}  
//局部变量不初始化默认是随机数，
// 全局变量不初始化默认是0
//int main() {
//	char name[25] = {0};
//	printf("请选择你的英雄:");
//	scanf("%8s",name);
//	printf("您选择了：%s\n", name);
//	int sum = strlen(name);
//	printf("英雄名字：%d字", sum);
//	return 0;
//}
//int main() {
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	printf("请输入年/月/日：");
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//	printf("%d/%d/%d", year, month, day);
//	return 0;
//}
//顺序结构,选择结构,循环结构 
// 判断奇数偶数
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d是奇数", num);
//	else
//		printf("%d是偶数", num);
//		
//	return 0;
//}
//判断是否成年
//int main() {
//	int age = 0;
//	printf("请输入你的年龄:");
//	scanf("%d", &age);
//	if (age >= 18) {
//		printf("恭喜你已经成年，年龄为:%d\n", age);
//		printf("你已成年可以访问网站");
//	}
//	else if(age < 18 && age > 0) {
//		printf("很遗憾你未成年，年龄为:%d\n", age);
//		printf("你未成年不可以访问网站");
//	}
//	else {
//		printf("你输入的年龄不合法，请重新输入！！！");
//	}
//	
//	return 0;
//}
//默认情况下if和else后面只能加一条语句，如果要加多条语句就加{}；
//if  内的表达式会将结果计算为1 或者0
//int main() {
//	int age = 0;
//	printf("请输入你的年龄：");
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年");
//	else if (age <= 44)
//		printf("青年");
//	else if (age <= 59)
//		printf("中老年");
//	else if (age <= 89)
//		printf("老年");
//	else
//		printf("老寿星");
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1) {
//		if (b == 2)
//			printf("hehe");
//		else
//			printf("hehe");
//	}
//
//return 0;
//}


//关系操作符也叫关系表达式
// 包含 "< ,> , = , <= , >= ，== ，!="

// 条件运算符也是三目操作符 a < b ? a : b
//int main() {
//	int a = 0, b = 0;
//	printf("请输入两个数字");
//	scanf("%d %d" ,&a , &b);
//	int big = (a > b ? a : b);
//	printf("较大的数字是%d", big);
//	return 0;
//}

//逻辑运算符 包含“&& ，|| ，!”
//int main() {
//	int year = 0;
//	printf("请输入年份");
//	scanf("%d", &year);
//		if(year % 4 ==0 && year % 100 != 0 || year % 400 ==0){
//			printf("%d是闰年",year);
//		}
//		else {
//			printf("%d不是闰年", year);
//		}
//	return 0;
//}
//赋值运算符优先级别最低
//int main() {
//	int a = 1, b = 2, c = 3, d = 0;
//	int i = (a++ && ++b && d++);
//	printf("%d", i);
//	return 0;
//}

//switch语句
//int main() {
//	int num = 0;
//	printf("请输入一个数字");
//	scanf("%d",&num);
//	if (num % 3 == 0) {
//		printf("零");
//	}
//	else if (num % 3 == 1) {
//		printf("一");
//	}
//	else {
//		printf("三");
//	}
//	return 0;
//}
//int main() {
//	int num = 0;
//	printf("请输入一个数字");
//	scanf("%d", &num);
//	switch (num % 3) {
//	case 0: printf("零");
//		break;
//	case 1: printf("一");
//		break;
//	case 2: printf("二");
//		break;
//	}
//	return 0;
//}
// 输入1-7数字打印周一到周日
//int main() {
//	int num = 0;
//	printf("输入数字1-7:");
//	scanf("%d", &num);
//	switch (num) {
//	case 1: printf("今天是周一");
//		break;
//	case 2: printf("今天是周二");
//		break;
//	case 3: printf("今天是周三");
//		break;
//	case 4: printf("今天是周四");
//		break;
//	case 5: printf("今天是周五");
//		break;
//	case 6 : printf("今天是周六");
//		break;
//	case 7 : printf("今天是周日");
//		break;
//	}
//	return 0;
//}
// 输入1-7数字打印工作日或休息日
//int main() {
//	int day = 0;
//	printf("输入数字1-7:");
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:case 2: case 3: case 4: case 5:
//			printf("工作日");
//			break;
//		case 6: case 7:
//			printf("休息日");
//			break;
//		default:
//			printf("输入错误");
//	}
//	return 0;
//}
//循环语句
//while循环
//int main() {
//	int i = 0;
//	while (i<=10) {
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//利用循环反向打印数字
//int main() {
//	int num = 0;
//	printf("输入一个正整数：");
//	scanf("%d", &num);
//	while (num) {
//		printf("%d", num % 10);
//		num /= 10;
//	}
//	return;
//}
//for循环
//int main() {
//	/*for (初始化表达式; 判断表达式 ; 调整表达式){语句}*/
//	//初始化表达式只会执行一次
//	//求1-100 3的倍数的和
//	int sum = 0;
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0) {
//	//		sum += i;
//	//	}
//	//}
//	//第二种方法 代码更简洁 效率更高
//	for (int i = 0; i <= 100; i += 3)
//	{
//		sum += i;
//	}
//	printf("%d ", sum);
//	
//	return 0;
//} 

//do…while 循环
//do{语句} while (判断);do while循环先执行后判断，语句至少执行一次；
//int main() {
// 打印1-10
//	int i = 1;
//	do {
//		printf("%d", i);
//		i++;
//	}while (i <= 10);
//	return 0;
//}   
//输入一个正整数，计算出他是几位数
//int main() {
//	int n = 0 , i = 0;
//	printf("输入一位正整数：");
//	scanf("%d", &n);
//	do {
//		i++;
//		n = n / 10;
//	} while (n != 0);
//	printf("这个%d位数", i);
//	return 0;
//}

//break和continue在循环中的作用
//int main() {
//	int i = 0;
//	while ( i < 10) {
//		i++;
//		if (i == 5) {
//		//break;/*终止循环*/
//		continue;/*跳过了continue下面的循环代码*/
//		}
//		printf("%d", i);
//	}
//	return 0;
//};

//int main() {
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5) {
//			//break;
//			continue;
//		}
//		
//		printf("%d ", i);
//	}
//	return 0;
//}

//打印100-200的所有素数
//int main() {
//	int i = 0, n = 0;
//	for (i = 100; i <= 200; i++) {
//		int flag = 1;
//		for (n = 2; n < i ; n++) {
//			if (i % n == 0){
//				flag = 0;
//				break;
//			}			
//		}
//		if (flag){
//			
//		}
//	}
//	return 0;
//}
//优化代码
//int main() {
//	int i = 0, n = 0;
//	for (int i = 100;i <= 200; i++) {
//		int flag = 1;
//		for ( n = 2; n < 9; n++) {
//			if (i % n == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (i % n) {
//			printf("%d ", i);
//	}
//	}
//	return 0;
//}

//int main() {
//	int i = 0, n = 0;
//	for (int i = 0;i <= 100; i++) {
//		int flag = 1;
//		for (n = 2; n < 9; n++) {
//			if (i % n == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//sqrt()是一个计算平方根的库函数
//#include <math.h>
//int main() {
//	int i = 0, n = 0 , sum = 0;
//	for (int i = 100;i <= 200; i++) {
//		int flag = 1 ;
//		for (n = 2; n <= sqrt(i);n++) {
//			if (i % n == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag) {
//			printf("%d ", i);
//			sum += 1;
//		}
//	}
//	printf("\n这个区间一共有%d位素数", sum);
//	return 0;
//}




//goto语句 跳转代码到指定位置

//int main() {
//	printf("我是第一句\n");
//	goto five;
//	printf("我是第二句\n");
//	printf("我是第三句\n");
//	printf("我是第四句\n");
//	five:
//	printf("我是第五句\n");
//	return 0;
//}

//goto语句使用场景多重循环
//#include <math.h>
//int main() {
//	int i = 0, n = 0 , sum = 0;
//	for (int i = 100;i <= 200; i++) {
//		int flag = 1 ;
//		for (n = 2; n <= sqrt(i);n++) {
//			if (i % n == 0) {
//				flag = 0;
//				goto goflag;
//			}
//		}
//		goflag:
//		if (flag) {
//			printf("%d ", i);
//			sum += 1;
//		}
//	}
//	printf("\n这个区间一共有%d位素数", sum);
//	return 0;
//}

//关机程序
//1.程序运行起来后60秒后关机；
//2.如果输入爸爸两个字取消关机；

//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	father:
//	printf("电脑快关机了，喊爸爸可以取消哦!\n");
//	scanf("%s", input);
//	if (strcmp("爸爸" ,input) == 0) {
//		system("shutdown -a");
//	}
//	else {
//		printf("别做无谓的挣扎了，赶快喊！\n");
//		goto father;
//	}
//	return 0;
//}

////随机数生成 rand()函数值是在0-32767之间
//#include <time.h>
//int main(){
//	//设置随机数的生成起点
//	srand((unsigned int)time(NULL));
//	//用时间戳来随机srand的数值，srand()是rand()的种子
//	for (int i = 1; i <= 10; i++) {
//		printf("%d\n", rand()%100);
//	}
//	
//	return;
//}

//int main() {
//	int num = 0;
//	srand((unsigned)time(NULL));
//	int res = rand() % 100 + 1;
//	imp:
//	printf("请输入你猜的数字(0-100的值):");
//	scanf("%d", &num);
//	if(num < res){
//		printf("你输入的数字偏小\n");
//		goto imp;
//	}
//	else if (num > res) {
//		printf("你输入的数字偏大\n");
//		goto imp;
//	}
//	else if (num == res) {
//		printf("恭喜你猜到了正确答案%d\n", res);
//	}
//	else {
//		printf("你的输入不合法\n");
//		goto imp;
//	}
//	return 0;
//}



////封装打印菜单为函数,void代表函数无返回值
//void menu() {
//	printf("请选择:\n");
//	printf("********************\n");
//	printf("********************\n");
//	printf("**     1.简单     **\n");
//	printf("**     2.一般     **\n");
//	printf("**     3.困难     **\n");
//	printf("**     4.地狱     **\n");
//	printf("**     5.退出     **\n");
//	printf("********************\n");
//	printf("********************\n");
//	printf("温馨提示：地狱模式未通过挑战将面临惩罚慎入！\n");
//}
////封装游戏为函数
////简单模式
//void gameEasy() {
//	srand((unsigned)time(NULL));
//	int res = rand() % 100 + 1; //生成一个1-100的随机数
//	int num = 0;
//	do {
//		printf("请输入你猜的数字(0-100):");
//		scanf("%d", &num);
//		if (num < res) {
//			printf("你输入的数字偏小\n");
//		}
//		else if (num > res) {
//			printf("你输入的数字偏大\n");
//		}
//		else if (num == res) {
//			printf("恭喜你猜对了正确答案！：%d\n", res);
//			break;
//		}
//	} while (num != res);//如果用户输入值不为随机数结果就继续循环
//}
////一般模式
//void gameGeneral() {
//	srand((unsigned)time(NULL));
//	int res = rand() % 100 + 1; //生成一个1-100的随机数
//	int num = 0;
//	int count = 10;
//	do {
//		printf("请输入你猜的数字(0-100,%d次机会):", count);
//		scanf("%d", &num);
//		if (num < res) {
//			printf("你输入的数字偏小\n");
//		}
//		else if (num > res) {
//			printf("你输入的数字偏大\n");
//		}
//		else if (num == res) {
//			printf("恭喜你答对了正确答案！：%d\n", res);
//			break;
//		}
//		count--;
//		if (count == 0) {
//			printf("挑战失败，不要灰心，下次再来！正确答案是：%d\n", res);
//		}
//	} while (count);//十次机会
//
//}
//
////困难模式
//void gameDifficult() {
//	srand((unsigned)time(NULL));
//	int res = rand() % 100 + 1; //生成一个1-100的随机数
//	int num = 0;
//	int count = 7;
//	do {
//		printf("请输入你猜的数字(0-100,%d次机会):", count);
//		scanf("%d", &num);
//		if (num < res) {
//			printf("你输入的数字偏小\n");
//		}
//		else if (num > res) {
//			printf("你输入的数字偏大\n");
//		}
//		else if (num == res) {
//			printf("恭喜你答对了正确答案！：%d\n", res);
//			break;
//		}
//		count--;
//		if (count == 0) {
//			printf("挑战失败，不要灰心，下次再来！正确答案是：%d\n", res);
//		}
//	} while (count);//7次机会
//}
////惩罚1
//void penalty() {
//	system("shutdown -s -t 60");
//	char input[20] = { 0 };
//	father:
//	printf("电脑快关机了，打出爸爸或daddy可以取消哦!\n");
//	scanf("%s", input);
//	if (strcmp("爸爸", input) == 0) {
//		system("shutdown -a");
//	}
//	else if (strcmp("daddy", input) == 0) {
//		system("shutdown -a");
//	}
//	else {
//		printf("别做无谓的挣扎了！\n");
//		goto father;
//	}
//
//}
////选择惩罚
//void penaltyX() {
//	int inp = 0;
//	while (true) {
//		scanf("%d", &inp);
//		if (inp == 1)
//		{
//			penalty();
//			break;
//		}
//		else if (inp == 2) {
//			system("shutdown -s -t");
//			break;
//		}
//		else {
//			printf("要选择1或2哦\n");
//		}
//	}
//}
////地狱模式
//void gameHell() {
//	srand((unsigned)time(NULL));
//	int res = rand() % 100 + 1; //生成一个1-100的随机数
//	int num = 0;
//	int count = 5;
//	do {
//		printf("请输入你猜的数字(0-100,%d次机会):", count);
//		scanf("%d", &num);
//		if (num < res) {
//			printf("你输入的数字偏小\n");
//		}
//		else if (num > res) {
//			printf("你输入的数字偏大\n");
//		}
//		else if (num == res) {
//			printf("恭喜你答对了正确答案！：%d\n", res);
//			break;
//		}
//		count--;
//		if (count == 0) {
//			printf("挑战失败，正确答案是：%d\n", res);
//			printf("选择你的惩罚：\n");
//			printf("1.一分钟内打出爸爸或daddy。\n");
//			printf("2.关机\n");
//			penaltyX();
//	
//		}
//	} while (count);//自定义机会
//}
//
//int main() {
//	int input = 0;
//	do{
//		menu();//打印菜单
//		scanf("%d", &input);
//		switch (input) {
//		case 1: {
//			gameEasy();//游戏代码逻辑
//			break;
//		}
//		case 2:
//			gameGeneral();
//			break;
//		case 3:
//			gameDifficult();
//			break;
//		case 4:
//			gameHell();
//			break;
//		case 5:
//			printf("退出游戏\n");
//			input = 0;
//			break;
//		default:
//			printf("输入有误，请重新输入！\n");
//		}
//	} while (input);
//	return 0;
//}
//数组,是相同类型元素的集合,要求有一个或者多个元素
//一维数组
//int main() {
//	//声明
//	//int math[20];//整型
//	//char ch[10]; //字符
//	//初始化
//	int math[] = { 0,1,2,3,4,5,6,7,8,9 };
//	char arr1[] = {'a','b','c','d','e','f'};//不设置初始值默认长度就是数组长度
//	char arr2[5] = {'a','b','c'};//不完整初始化剩下元素默认为零
//	char arr3[10] = "abc";
//	double fl[10] = { 1.0 };
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c",arr1[i]);//arr1[0] 这里的数字是数组的下标与
//	}
//	return 0;
// }
////变量的类型是数组内元素的类型；并不是数组本身的类型
////去掉名称剩下的是类型 比如 int mach[10],类型是int[10]
//
//int main() {
//	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int arr1[10] = {0};
//	int length = sizeof(arr)/4;
//	printf("%zd", length);
//	int i = 0;
//	for (i = 0; i < length;i++) {
//		printf("&[%d]=%p\n", i, &arr[i]);
//	//&是取地址操作符，可以取出变量在内存中的地址，地址用%p打印
//	}
//	return 0;
//}
//

//二维数组,二维数组初始化也分为完全和不完全此外还多个按行初始化
//int main() {
//	int data1[3][5] = { 1,2,3,4,5 };
//	//int data2[][5] = { 1,2,3,4,5 };//二维数组行可以省略但列不行
//	int data3[3][3] = { {1,2},{3,4},{5,6} };//这里是按列初始化；
//	return 0;
//}
//二维数组的使用 访问
//二维数组的下标以0为起点，行和列为坐标轴
//int main() {
//	int data1[5][5] = { {1,2,3},{4,5,6},{7,8,9} };
//	printf("%d",data1[1][1]);//第二行，第二列；//5
//	return;
//}
//二维数组的写入
//int main() {
//	int data1[5][5] = {0};
//	int length = sizeof(data1) / 4;
//	for (size_t i = 0; i < length; i++)
//	{
//	/*	printf("%zd", length);*/
//		data1[0][i] = 1;
//	}
//	return;
//}
//int main() {
//	int data1[3][3] = {0};
//	int length = sizeof(data1) / 4;
//	for (size_t i = 0; i < 3; i++)
//	{
//		for (size_t j = 0; j < 3; j++)
//		{
//			scanf("%d", &data1[i][j]);
//		}
//	}
//	for (size_t i = 0; i < 3; i++)
//	{
//		for (size_t j = 0; j < 3; j++)
//		{
//			
//			printf("%d\n",data1[i][j]);
//		}
//	}
//	return;
//}
 //变长数组，指的是通过变量改变数组的长度。变长数组不能初始化，且vs2022不支持
//int main() {
//	int n = 0;
//	scanf("%d", &n); 
//	printf("%d\n",n);
//	int arr[n]; 
//	//变长数组这里不能初始化；
//	// 且变长数组改变的是数组创建时的长度，并不是改变数组的长度
//	//vs2022不支持变长数组
//	return;
//}