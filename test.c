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
	�����˿�������λ��С˵��������λ */
	//printf("%*.*lf\n",6,3,3.1415926);
	//printf("%s����%d��\n","����֮", 24);
	//printf("����ϲ������ɫ��#%.5s", "008c8c");
	//printf("����ϲ������ɫ��#%lx", 16777215);
	int score = 0;
	printf("�����������");
	scanf("%d",&score);
	printf("���ķ����ǣ�%d",score);
	//scanf������ռλ���ĺ�����Ҫ�����ַ
	//&��ȡ��ַ��������&score��ȡ��score�����ĵ�ַ
	return 0;
}