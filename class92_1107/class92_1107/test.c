#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��һ���ַ����ĳ���
int myStrlen(char* str) {
	//int len = 0;
	//for (int i = 0; str[i] != '\0'; i++) {
	//	len++;
	//}
	//return len;
	char* p = str;
	while (*p != '\0') {
		p++;
	}
	return p - str;
}

// �ṹ������־��൱���û��Լ����������͵�����. 
// ������������. ԭ����Ȼ�� "����֪��" 
//struct Student {
//	// ��Щ�ڲ�����������, ��Ϊ "��Ա" / "����" / "�ֶ�" 
//	int id;         // ѧ��
//	char name[10];  // ����
//	int age;        // ����
//	double score;   // ����
//};
//
//typedef struct Student Student;

// ���д�����ǰ� struct �Ķ���� typedef �϶�Ϊһ. 
// д�����ʱ��Ҫ̫ pia ��
typedef struct Student {
	int id;         // ѧ��
	char name[1024];  // ����
	int age;        // ����
	double score;   // ����
} Student;

int main() {

	// ���нṹ�����ͻ�����. ����Ҫ�����ṹ�����
	// C ������Ҫ�󴴽��ṹ�������ʱ��, ǰ�������� struct �ؼ���. 
	// C++ �о�û�����Ҫ����.
	// C ������, �������д struct , ����ʹ�� typedef ���򻯴���. 

	// ��ʼ����ʱ��, {} д�ĳ�ʼֵ��˳�����ͽṹ�嶨�����ֶε�˳��
	// ����һ��. 
	Student student = { 1, "zhangsan", 20, 95.5 };


	// �ṹ���ʹ��
	// ���Ĳ���: ��Ա����
	printf("%d\n", student.id);
	printf("%s\n", student.name);
	printf("%d\n", student.age);
	printf("%f\n", student.score);
	// ��Ա���ʲ����ܶ�ȡ, Ҳ���޸�. 
	student.id = 100;
	
	//student.name = "lisi";
	//student.name[0] = 'l';
	//student.name[1] = 'i';
	//student.name[2] = 's';
	//student.name[3] = 'i';
	//student.name[4] = '\0';

	// C ���ṩ���ַ�����������. (�������൱�ڸ�ֵ��)
	//strcpy(student.name, "����");
	//printf("%s\n", student.name);
	printf("%d\n", strlen("��"));





	// Ұָ�벻�ܽ�����. ��������Ұָ��, ���������������õ�
	// ��������һд, ֻ��Ϊ����ʾָ������. 
	//int* p1 = (int*)0x100;
	//int* p2 = (int*)0x110;

	//int arr[4] = { 1, 2, 3, 4 };
	//int arr3[100] = {0};
	//int arr2[4] = { 1, 2, 3, 4 };
	//int* p1 = &arr[0];
	//int* p2 = &arr2[2];
	//
	//// ָ������õ��Ľ����������ַ֮����˼��� "Ԫ��" 
	//printf("%d\n", p1 - p2);

	//int num = 10;
	//int* p = &num;

	// �ж� p �Ƿ��ǿ�ָ��. 
	//if (p) {
	//	printf("���ǿ�ָ��\n");
	//} else {
	//	printf("�ǿ�ָ��!\n");
	//}

	//if (!p) {
	//	printf("�ǿ�ָ��\n");
	//} else {
	//	printf("���ǿ�ָ��!\n");
	//}

	// �������ʽת��ָ��. 
	// �ܶೡ���������������ת��. 
	// �������ô���ʱ��. 
	// ���������ʱ��Ҳ��. 
	//int arr[4] = { 0 };
	//printf("%d\n", sizeof(arr));
	//// �������Ҳ�ᴥ��������ʽת��ָ��
	//printf("%d\n", sizeof(arr + 0));

	// ָ����� [ ] ����. 
	//int arr[4] = { 1, 2, 3, 4 };
	//int* p = arr;
	//int* p = &arr[0];
	//for (int* p = arr; p < arr + 4; p++) {
	//	printf("%d\n", *p);
	//}
	//int* p = arr;
	//for (int i = 0; i < 4; i++) {
	//	// �ʼ C ���Ե������, ����ָ�� [ ] �ĳ����Ǻõ�. 
	//	// ����û�뵽, ����д������һЩ����, ��ָ������� ran ��. 
	//	printf("%d\n", p[i]);
	//	printf("%d\n", *(p + i));
	//}

	// ָ����� [ ] ����һЩ����Ĳ���. 
	//int* p = arr + 1;
	// ��������������. �����±�һ���� [0, size-1] ��Χ
	// ����ָ����±겻һ��. ȡ����ָ���ʼ�����ָ��˭. 
	// �����ԭ�����: ��֤�����ò������������Ч�ڴ����. 
	//printf("%d\n", p[-1]);
	//printf("%d\n", *(p - 1));

	//int num = 10;
	//int* p = &num;

	// ����
	//int** pp = &p;

	// ʵ�ʿ�����, ����Գ��ⲻ�ø߼�ָ���. 
	// ������ͨ��һЩ����������ָ��, ���ֵͽ׵�״̬. 
	//typedef int* IntPtr;
	//IntPtr* pp = &p;

	// ָ������
	// ����, ÿ��Ԫ����һ��ָ�����͵ı���
	// ��������ܳ���, Ҳ������. 
	//int* arr[4] = { 0 };

	// ����ָ��
	// ָ��, ָ����һ������
	// �ܲ�����, Ҳûɶ��. (������;���ǳ�����������, ��Ϊ���) 
	//int(*p)[4] = &arr;

	// const ��ָ��֮��Ĺ�ϵ
	//int num = 0;
	//int num2 = 10;

	// ������
	// ���д�������� p �б�����ڴ��ַ��Ӧ�ı������ܱ��޸�. 
	//const int* p = &num;

	// ���д����������һ����. 
	//int const* p = &num;

	// ���д�������� p ����������ĵ�ַ���ܸı�
	//int* const p = &num;


	// const ���������·�������д�����ܱ���ͨ��?
	//*p = 100;
	//p = &num2;
	
	system("pause");
	return 0;
}