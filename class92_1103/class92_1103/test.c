#include <stdio.h>
#include <stdlib.h>

void print() {
	printf("hehe\n");
}

int countOneBit(int num) {
	// ����ȡ 1, 10, 100... ��Щ���ֺ� num ���а�λ��. 
	// ȡ1����ʱ, �൱�ڰ� num �����һλȡ������. 
	// ȡ10����ʱ, �൱�ڰ� num �ĵ����ڶ�λȡ������....
	int count = 0;
	for (int i = 0; i < 32; i++) {
		if (num & (1 << i)) {
			count++;
		}
	}
	return count;
}

#define and &&
#define or ||

#define ���� int
#define ��� if
#define ���� else

// дһ������, ����������ֽϴ��ֵ��+100 �Ľ��. 
int maxNum(int x, int y) {
	//if (x > y) {
	//	return x;
	//}
	//return y;
	return x > y ? x : y + 100;
}

int main() {
	//int num = 11;
	//
	//int ret = countOneBit(num);
	//printf("%d\n", ret);

	//const int a = 10;
	//a = 20;

	// �ǳ���������ôд. 
	//int a;
	//a = 10;
	//int a = 10;

	// �������������������
	// ��һ��д��(�ɰ汾 C ������ǿ��Ҫ����ôд)
	//int a = 10;
	//int b = 20;
	//int c = 30;

	//// ������һ�κܳ��Ĵ���. 

	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);

	// �ڶ���д��(���Ƽ�)
	// һ�����������ʹ��֮ǰȥ����. 
	// ����Ҫ������֮��, ���˺ܾ���ȥʹ��. 
	//int a = 10;
	//printf("%d\n", a);

	//int b = 20;
	//printf("%d\n", b);

	//int c = 30;
	//printf("%d\n", c);

	//int a = 10;
	//int b = 20;

	// ��Ҫд��
	//int a = 10, b = 20;

	//int num = 10;
	//num += 1;
	//// �� C ������, �����ǵȼ۵�
	//num = num + 1;
	
	//int num = 10;
	//printf("%d\n", --num);

	//printf("%d\n", sizeof(int));

	//int arr[10] = { 0 };
	// A. 4
	// B. 40
	// C. δ������Ϊ
	// ע��, �˴��Ľ�� 4 , ������δ������Ϊ. 
	// sizeof ��һ������������, һ����Ҫ��������: ��������ֵ. 
	//printf("%d\n", sizeof(arr[10]));

	//int num = 0;
	// ! �߼�ȡ��, �ǰѲ�����, ���� "��, ��" ������. 
	// C ������, ��0 ����ʾ��, 0 ��ʾ��. 
	// ��ʱ  ! ���������ֵ�Ļ����Ͻ���ȡ��. 
	//printf("%x\n", !num);
	//printf("%x\n", ~num);

	//printf("%d\n", 1 > 2);

	//int a = 1;	// 01
	//int b = 2;	// 10
	//printf("%d\n", a & b);
	//printf("%d\n", a and b);

	//���� i = 10;
	//���(i < 10) {
	//	printf("wocao\n");
	//} ����{
	//	printf("hehe\n");
	//}

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	// a++ ����ֵ�� 0, ���ն�·��ֵ�Ĺ���, ��ʱ, b, c, d �ı��ʽ����������ֵ��. 
	//i = a++ && ++b && c++ && d++;
	//i = a++||++b||c++ || d++;
	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);

	//int arr[3][4] = {
	//	(1, 2), 
	//	(3, 4)
	//};

	// ���Ǻ�������
	//print(); 

	// ���������ʵ��ȡ���˺���ָ��
	//print;

	//int a = 10;
	//float b = 1.5;
	////b = a;
	//a = b;
	//printf("%d\n", a);

	// 2 ���ֽ�, -32768 -> +32767 (Ҫ��ס)    �޷��� 0->65535
	//short a = 10;
	// 4 ���ֽ�, -21�� -> +21��  �޷��� 0-> 42��9ǧ��
	//int b = 100000;
	
	//a = b;
	//printf("%d\n", a);

	int i = 1;
	int ret = ++i + ++i + ++i;
	printf("ret = %d\n", ret);

	system("pause");
	return 0;
}