#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
//ͷ�ļ�ʹ��c����Ĭ�ϵĿ⺯��Ҫ��
//int main()
//{ 
//	printf("�����");
//	printf("%d\n", 100);
//	return 0;
//}
//main�ǳ�����ڣ��ж�ֻ��һ�� 
//int�ǹؼ��ִ�������
//c�����е������������ַ���˫���������ַ���
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
//		printf("��ã�Ԫ�����֣�");
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
////sizeof()�᷵��һ������������size_t ��Ҫ��%zd��ӡ
////signed�����з��ţ�����������unsigned���޷���ֻ����������
////intĬ�����з��ŵ�  
//int main() {
//	int num = -100;
//	unsigned int sum  = 200;
//	printf("%d\n", num);
//	printf("%u\n", sum);
//	return 0;
//}

//%u ��ӡ�������޷��ŵ����� %d ��ӡ�з��ŵ�����

//����  ��Ϊȫ�ֱ����;ֲ����� ���� ����+������ = ��ʼ����ֵ
//�ֲ�����ֻ��������Χ��ʹ�ã�
//��ȫ�ֱ�����ͻʱ���ֲ�������Ч
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
//	�����˿�������λ��С˵��������λ */
//	//printf("%*.*lf\n",6,3,3.1415926);
//	//printf("%s����%d��\n","����֮", 24);
//	//printf("����ϲ������ɫ��#%.5s", "008c8c");
//	//printf("����ϲ������ɫ��#%lx", 16777215);
//	int score = 0;
//	//printf("�����������");
//	//scanf("%d",&score);
//	//printf("���ķ����ǣ�%d",score);
//	//scanf������ȡ���û�������
//	//scanf������ռλ���ĺ�����Ҫ�����ַ
//	//&��ȡ��ַ��������&score��ȡ��score�����ĵ�ַ
//	/*int a;
//	int b;*/
//	/*printf("��������ѵ�������");
//	int s = scanf("%d %d", &a ,&b);
//	printf("��Ķ�������Ϊ��%d:\n" ,a + b );
//	printf("scanf�ķ���ֵ�ǣ�%d", s);*/
//	char ch = 0;
//	printf("�����ַ���");
//	int ret = scanf(" %c", &ch);
//	printf("������ֽ�����AAA%cAAA\n", ch);
//	printf("scanf�ķ���ֵ�ǣ�%d", ret);
//	return 0;
//}  
//�ֲ���������ʼ��Ĭ�����������
// ȫ�ֱ�������ʼ��Ĭ����0
//int main() {
//	char name[25] = {0};
//	printf("��ѡ�����Ӣ��:");
//	scanf("%8s",name);
//	printf("��ѡ���ˣ�%s\n", name);
//	int sum = strlen(name);
//	printf("Ӣ�����֣�%d��", sum);
//	return 0;
//}
//int main() {
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	printf("��������/��/�գ�");
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//	printf("%d/%d/%d", year, month, day);
//	return 0;
//}
//˳��ṹ,ѡ��ṹ,ѭ���ṹ 
// �ж�����ż��
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d������", num);
//	else
//		printf("%d��ż��", num);
//		
//	return 0;
//}
//�ж��Ƿ����
//int main() {
//	int age = 0;
//	printf("�������������:");
//	scanf("%d", &age);
//	if (age >= 18) {
//		printf("��ϲ���Ѿ����꣬����Ϊ:%d\n", age);
//		printf("���ѳ�����Է�����վ");
//	}
//	else if(age < 18 && age > 0) {
//		printf("���ź���δ���꣬����Ϊ:%d\n", age);
//		printf("��δ���겻���Է�����վ");
//	}
//	else {
//		printf("����������䲻�Ϸ������������룡����");
//	}
//	
//	return 0;
//}
//Ĭ�������if��else����ֻ�ܼ�һ����䣬���Ҫ�Ӷ������ͼ�{}��
//if  �ڵı��ʽ�Ὣ�������Ϊ1 ����0
//int main() {
//	int age = 0;
//	printf("������������䣺");
//	scanf("%d", &age);
//	if (age < 18)
//		printf("����");
//	else if (age <= 44)
//		printf("����");
//	else if (age <= 59)
//		printf("������");
//	else if (age <= 89)
//		printf("����");
//	else
//		printf("������");
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


//��ϵ������Ҳ�й�ϵ���ʽ
// ���� "< ,> , = , <= , >= ��== ��!="

// ���������Ҳ����Ŀ������ a < b ? a : b
//int main() {
//	int a = 0, b = 0;
//	printf("��������������");
//	scanf("%d %d" ,&a , &b);
//	int big = (a > b ? a : b);
//	printf("�ϴ��������%d", big);
//	return 0;
//}

//�߼������ ������&& ��|| ��!��
//int main() {
//	int year = 0;
//	printf("���������");
//	scanf("%d", &year);
//		if(year % 4 ==0 && year % 100 != 0 || year % 400 ==0){
//			printf("%d������",year);
//		}
//		else {
//			printf("%d��������", year);
//		}
//	return 0;
//}
//��ֵ��������ȼ������
//int main() {
//	int a = 1, b = 2, c = 3, d = 0;
//	int i = (a++ && ++b && d++);
//	printf("%d", i);
//	return 0;
//}

//switch���
//int main() {
//	int num = 0;
//	printf("������һ������");
//	scanf("%d",&num);
//	if (num % 3 == 0) {
//		printf("��");
//	}
//	else if (num % 3 == 1) {
//		printf("һ");
//	}
//	else {
//		printf("��");
//	}
//	return 0;
//}
//int main() {
//	int num = 0;
//	printf("������һ������");
//	scanf("%d", &num);
//	switch (num % 3) {
//	case 0: printf("��");
//		break;
//	case 1: printf("һ");
//		break;
//	case 2: printf("��");
//		break;
//	}
//	return 0;
//}
// ����1-7���ִ�ӡ��һ������
//int main() {
//	int num = 0;
//	printf("��������1-7:");
//	scanf("%d", &num);
//	switch (num) {
//	case 1: printf("��������һ");
//		break;
//	case 2: printf("�������ܶ�");
//		break;
//	case 3: printf("����������");
//		break;
//	case 4: printf("����������");
//		break;
//	case 5: printf("����������");
//		break;
//	case 6 : printf("����������");
//		break;
//	case 7 : printf("����������");
//		break;
//	}
//	return 0;
//}
// ����1-7���ִ�ӡ�����ջ���Ϣ��
//int main() {
//	int day = 0;
//	printf("��������1-7:");
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:case 2: case 3: case 4: case 5:
//			printf("������");
//			break;
//		case 6: case 7:
//			printf("��Ϣ��");
//			break;
//		default:
//			printf("�������");
//	}
//	return 0;
//}
//ѭ�����
//whileѭ��
//int main() {
//	int i = 0;
//	while (i<=10) {
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//����ѭ�������ӡ����
//int main() {
//	int num = 0;
//	printf("����һ����������");
//	scanf("%d", &num);
//	while (num) {
//		printf("%d", num % 10);
//		num /= 10;
//	}
//	return;
//}
//forѭ��
//int main() {
//	/*for (��ʼ�����ʽ; �жϱ��ʽ ; �������ʽ){���}*/
//	//��ʼ�����ʽֻ��ִ��һ��
//	//��1-100 3�ı����ĺ�
//	int sum = 0;
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0) {
//	//		sum += i;
//	//	}
//	//}
//	//�ڶ��ַ��� �������� Ч�ʸ���
//	for (int i = 0; i <= 100; i += 3)
//	{
//		sum += i;
//	}
//	printf("%d ", sum);
//	
//	return 0;
//} 

//do��while ѭ��
//do{���} while (�ж�);do whileѭ����ִ�к��жϣ��������ִ��һ�Σ�
//int main() {
// ��ӡ1-10
//	int i = 1;
//	do {
//		printf("%d", i);
//		i++;
//	}while (i <= 10);
//	return 0;
//}   
//����һ������������������Ǽ�λ��
//int main() {
//	int n = 0 , i = 0;
//	printf("����һλ��������");
//	scanf("%d", &n);
//	do {
//		i++;
//		n = n / 10;
//	} while (n != 0);
//	printf("���%dλ��", i);
//	return 0;
//}

//break��continue��ѭ���е�����
//int main() {
//	int i = 0;
//	while ( i < 10) {
//		i++;
//		if (i == 5) {
//		//break;/*��ֹѭ��*/
//		continue;/*������continue�����ѭ������*/
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

//��ӡ100-200����������
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
//�Ż�����
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
//sqrt()��һ������ƽ�����Ŀ⺯��
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
//	printf("\n�������һ����%dλ����", sum);
//	return 0;
//}




//goto��� ��ת���뵽ָ��λ��

//int main() {
//	printf("���ǵ�һ��\n");
//	goto five;
//	printf("���ǵڶ���\n");
//	printf("���ǵ�����\n");
//	printf("���ǵ��ľ�\n");
//	five:
//	printf("���ǵ����\n");
//	return 0;
//}

//goto���ʹ�ó�������ѭ��
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
//	printf("\n�������һ����%dλ����", sum);
//	return 0;
//}

//�ػ�����
//1.��������������60���ػ���
//2.�������ְ�������ȡ���ػ���

//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	father:
//	printf("���Կ�ػ��ˣ����ְֿ���ȡ��Ŷ!\n");
//	scanf("%s", input);
//	if (strcmp("�ְ�" ,input) == 0) {
//		system("shutdown -a");
//	}
//	else {
//		printf("������ν�������ˣ��Ͽ캰��\n");
//		goto father;
//	}
//	return 0;
//}

////��������� rand()����ֵ����0-32767֮��
//#include <time.h>
//int main(){
//	//������������������
//	srand((unsigned int)time(NULL));
//	//��ʱ��������srand����ֵ��srand()��rand()������
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
//	printf("��������µ�����(0-100��ֵ):");
//	scanf("%d", &num);
//	if(num < res){
//		printf("�����������ƫС\n");
//		goto imp;
//	}
//	else if (num > res) {
//		printf("�����������ƫ��\n");
//		goto imp;
//	}
//	else if (num == res) {
//		printf("��ϲ��µ�����ȷ��%d\n", res);
//	}
//	else {
//		printf("������벻�Ϸ�\n");
//		goto imp;
//	}
//	return 0;
//}



////��װ��ӡ�˵�Ϊ����,void�������޷���ֵ
//void menu() {
//	printf("��ѡ��:\n");
//	printf("********************\n");
//	printf("********************\n");
//	printf("**     1.��     **\n");
//	printf("**     2.һ��     **\n");
//	printf("**     3.����     **\n");
//	printf("**     4.����     **\n");
//	printf("**     5.�˳�     **\n");
//	printf("********************\n");
//	printf("********************\n");
//	printf("��ܰ��ʾ������ģʽδͨ����ս�����ٳͷ����룡\n");
//}
////��װ��ϷΪ����
////��ģʽ
//void gameEasy() {
//	srand((unsigned)time(NULL));
//	int res = rand() % 100 + 1; //����һ��1-100�������
//	int num = 0;
//	do {
//		printf("��������µ�����(0-100):");
//		scanf("%d", &num);
//		if (num < res) {
//			printf("�����������ƫС\n");
//		}
//		else if (num > res) {
//			printf("�����������ƫ��\n");
//		}
//		else if (num == res) {
//			printf("��ϲ��¶�����ȷ�𰸣���%d\n", res);
//			break;
//		}
//	} while (num != res);//����û�����ֵ��Ϊ���������ͼ���ѭ��
//}
////һ��ģʽ
//void gameGeneral() {
//	srand((unsigned)time(NULL));
//	int res = rand() % 100 + 1; //����һ��1-100�������
//	int num = 0;
//	int count = 10;
//	do {
//		printf("��������µ�����(0-100,%d�λ���):", count);
//		scanf("%d", &num);
//		if (num < res) {
//			printf("�����������ƫС\n");
//		}
//		else if (num > res) {
//			printf("�����������ƫ��\n");
//		}
//		else if (num == res) {
//			printf("��ϲ��������ȷ�𰸣���%d\n", res);
//			break;
//		}
//		count--;
//		if (count == 0) {
//			printf("��սʧ�ܣ���Ҫ���ģ��´���������ȷ���ǣ�%d\n", res);
//		}
//	} while (count);//ʮ�λ���
//
//}
//
////����ģʽ
//void gameDifficult() {
//	srand((unsigned)time(NULL));
//	int res = rand() % 100 + 1; //����һ��1-100�������
//	int num = 0;
//	int count = 7;
//	do {
//		printf("��������µ�����(0-100,%d�λ���):", count);
//		scanf("%d", &num);
//		if (num < res) {
//			printf("�����������ƫС\n");
//		}
//		else if (num > res) {
//			printf("�����������ƫ��\n");
//		}
//		else if (num == res) {
//			printf("��ϲ��������ȷ�𰸣���%d\n", res);
//			break;
//		}
//		count--;
//		if (count == 0) {
//			printf("��սʧ�ܣ���Ҫ���ģ��´���������ȷ���ǣ�%d\n", res);
//		}
//	} while (count);//7�λ���
//}
////�ͷ�1
//void penalty() {
//	system("shutdown -s -t 60");
//	char input[20] = { 0 };
//	father:
//	printf("���Կ�ػ��ˣ�����ְֻ�daddy����ȡ��Ŷ!\n");
//	scanf("%s", input);
//	if (strcmp("�ְ�", input) == 0) {
//		system("shutdown -a");
//	}
//	else if (strcmp("daddy", input) == 0) {
//		system("shutdown -a");
//	}
//	else {
//		printf("������ν�������ˣ�\n");
//		goto father;
//	}
//
//}
////ѡ��ͷ�
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
//			printf("Ҫѡ��1��2Ŷ\n");
//		}
//	}
//}
////����ģʽ
//void gameHell() {
//	srand((unsigned)time(NULL));
//	int res = rand() % 100 + 1; //����һ��1-100�������
//	int num = 0;
//	int count = 5;
//	do {
//		printf("��������µ�����(0-100,%d�λ���):", count);
//		scanf("%d", &num);
//		if (num < res) {
//			printf("�����������ƫС\n");
//		}
//		else if (num > res) {
//			printf("�����������ƫ��\n");
//		}
//		else if (num == res) {
//			printf("��ϲ��������ȷ�𰸣���%d\n", res);
//			break;
//		}
//		count--;
//		if (count == 0) {
//			printf("��սʧ�ܣ���ȷ���ǣ�%d\n", res);
//			printf("ѡ����ĳͷ���\n");
//			printf("1.һ�����ڴ���ְֻ�daddy��\n");
//			printf("2.�ػ�\n");
//			penaltyX();
//	
//		}
//	} while (count);//�Զ������
//}
//
//int main() {
//	int input = 0;
//	do{
//		menu();//��ӡ�˵�
//		scanf("%d", &input);
//		switch (input) {
//		case 1: {
//			gameEasy();//��Ϸ�����߼�
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
//			printf("�˳���Ϸ\n");
//			input = 0;
//			break;
//		default:
//			printf("�����������������룡\n");
//		}
//	} while (input);
//	return 0;
//}
//����,����ͬ����Ԫ�صļ���,Ҫ����һ�����߶��Ԫ��
//һά����
//int main() {
//	//����
//	//int math[20];//����
//	//char ch[10]; //�ַ�
//	//��ʼ��
//	int math[] = { 0,1,2,3,4,5,6,7,8,9 };
//	char arr1[] = {'a','b','c','d','e','f'};//�����ó�ʼֵĬ�ϳ��Ⱦ������鳤��
//	char arr2[5] = {'a','b','c'};//��������ʼ��ʣ��Ԫ��Ĭ��Ϊ��
//	char arr3[10] = "abc";
//	double fl[10] = { 1.0 };
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c",arr1[i]);//arr1[0] �����������������±���
//	}
//	return 0;
// }
////������������������Ԫ�ص����ͣ����������鱾�������
////ȥ������ʣ�µ������� ���� int mach[10],������int[10]
//
//int main() {
//	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int arr1[10] = {0};
//	int length = sizeof(arr)/4;
//	printf("%zd", length);
//	int i = 0;
//	for (i = 0; i < length;i++) {
//		printf("&[%d]=%p\n", i, &arr[i]);
//	//&��ȡ��ַ������������ȡ���������ڴ��еĵ�ַ����ַ��%p��ӡ
//	}
//	return 0;
//}
//

//��ά����,��ά�����ʼ��Ҳ��Ϊ��ȫ�Ͳ���ȫ���⻹������г�ʼ��
//int main() {
//	int data1[3][5] = { 1,2,3,4,5 };
//	//int data2[][5] = { 1,2,3,4,5 };//��ά�����п���ʡ�Ե��в���
//	int data3[3][3] = { {1,2},{3,4},{5,6} };//�����ǰ��г�ʼ����
//	return 0;
//}
//��ά�����ʹ�� ����
//��ά������±���0Ϊ��㣬�к���Ϊ������
//int main() {
//	int data1[5][5] = { {1,2,3},{4,5,6},{7,8,9} };
//	printf("%d",data1[1][1]);//�ڶ��У��ڶ��У�//5
//	return;
//}
//��ά�����д��
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
 //�䳤���飬ָ����ͨ�������ı�����ĳ��ȡ��䳤���鲻�ܳ�ʼ������vs2022��֧��
//int main() {
//	int n = 0;
//	scanf("%d", &n); 
//	printf("%d\n",n);
//	int arr[n]; 
//	//�䳤�������ﲻ�ܳ�ʼ����
//	// �ұ䳤����ı�������鴴��ʱ�ĳ��ȣ������Ǹı�����ĳ���
//	//vs2022��֧�ֱ䳤����
//	return;
//}