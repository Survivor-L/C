#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
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
int main() {
	int day = 0;
	printf("��������1-7:");
	scanf("%d", &day);
	switch (day)
	{
		case 1:case 2: case 3: case 4: case 5:
			printf("������");
			break;
		case 6: case 7:
			printf("��Ϣ��");
			break;
		default:
			printf("�������");
	}
	return 0;
}