#include <stdio.h>
#include <stdlib.h>

int* func() {
	int a = 10;
	return &a;
}

// дһ�������ݹ����ַ����ĳ���
int myStrlen(char* str) {
	if (*str == '\0') {
		return 0;
	}
	return 1 + myStrlen(str + 1);
}

int main() {
	// int num = 10;

	// �˴��� & �����߼�����, ����ȡ��ַ����. 
	// printf("%p\n", &num);

	// ����ָ�����
	// �˴��� int* ��һ������, ��ʾһ����������. 
	// int* �� int, double, float ��Щ�����ǲ��еĹ�ϵ. 
	//int* p = &num;
	//int* p = NULL;
	//printf("%d\n", *p);
	// ����Ĵ�����һ�����͵Ĵ���. "δ������Ϊ" 
	// �ڴ����Խ��. (�����˷Ƿ����ڴ�). ��Ϊ 100 ��ַ��Ӧ���ڴ�
	// ֮ǰ�������뵽, ����ֱ�Ӿ���, �ͻ����δ������Ϊ. 
	// ���յ�Ч��, ���ܻ��ȡһ�����������׵�����, Ҳ�����Ǹ����ֵ, 
	// �������ǳ���ֱ�ӱ���. 

	// ָ������������кܶ���. 
	// ��Щ���Ͷ��ǲ�ͬ����. (�Ͻ���˵, ָ��������һ�� "ͳ��" )
	//char a = 'a';
	//char* pa = &a;

	//short b = 10;
	//short* pb = &b;

	//int c = 20;
	//int* pc = &c;

	//printf("%d\n", sizeof(pa));
	//printf("%d\n", sizeof(pb));
	//printf("%d\n", sizeof(pc));

	//int* p = func();
	//printf("%d\n", *p);

	//int num = 10;
	//int* p = &num;
	//void* p2 = p;
	//printf("%d\n", *p2);

	//double* p = 0x100;
	//printf("%p\n", p - 1);

	//short* p2 = NULL;
	//printf("%p\n", p2 + 2);

	//int* p3 = NULL;
	//printf("%p\n", p3 + 2);

	//double* p4 = NULL;
	//printf("%p\n", p4 + 2);

	//void* p5 = NULL;
	//printf("%p\n", p5 + 1);

	system("pause");
	return 0;
}