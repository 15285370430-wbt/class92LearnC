#include <stdio.h>
#include <stdlib.h>

// ���� C ������������Ϊ�������Զ�ת��ָ��. 
// ���Դ˴����β�д�� char str[] �� char* str ��ȫ�ȼ�. 
//int strLen(char str[]) {
//	// ���ַ������ȵ�˼·����, ��ǰ��������ַ�����. 
//	// ÿ�ζ�ȡ��һ�� �ַ� �� count++, ���� \0 ��ѭ������. 
//	int count = 0;
//	for (int i = 0; str[i] != '\0'; i++) {
//		count++;
//	}
//	return count;
//}

// �ݹ�汾���ַ�������(û����ʱ����)
// ˼·���ǰ�������в��
// ���� str ����� "abcd" 
// �� strLen("abcd") => 1 + strLen("bcd");
// �� strLen("bcd") => 1 + strLen("cd");
// �� strLen("cd") => 1 + strLen("d");
int strLen(char str[]) {
	if (str[0] == '\0') {
		// str ��һ�����ַ��� ""
		return 0;
	}
	return 1 + strLen(str + 1);
}

// ��� N ��쳲�������
// ��·�ݹ�. 
//int fib(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	if (n == 2) {
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}

// ��� N ��쳲�������, ���÷ǵݹ�(ѭ��), �����ظ�����. 
int fib(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	// ��������ֱ��ʹ��ѭ��������
	// ���������ֱ��ʾ�� i - 1 ��͵� i - 2 ��
	int last1 = 1;
	int last2 = 1;
	// �˴� cur ��ʾ��ǰ����� i ��
	int cur = 0;
	for (int i = 3; i <= n; i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

//enum {
//	SIZE = 10
//};
//#define SIZE 10

int main() {
	// str ����ַ���, ����������ַ���ʵ�� 5 ��. 
	// ���һ��λ���� '\0'
	//char str[] = "hehe";
	//int ret = strLen(str);
	//printf("ret = %d\n", ret);

	//int result = fib(50);
	//printf("result = %d\n", result);

	// ����һ������
	//int arr[10];
	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", arr[i]);
	//}
	// ����ʼ��������. 
	// int arr2[4] = { 9, 5, 2, 7 };

	// �� C89 ��׼��, ��������ʱ, [ ] ��д������, ������ "����" 
	// �� C99 ��׼��, ������ [] ʹ�ñ�����. 
	// ֻ���� VS ϵ�ж��� C99 ֧�ֵĺܲ�. 

	// ���ȥ������, ����˵��, const int ���ֽ��� "������" (һ�ɺ���)
	// ��ʵ�����, �����һ�� C ���Ե� BUG
	//const int SIZE = 10;
	//int arr[SIZE] = { 0 };

	//int arr[10] = { 1, 2, 3 };
	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", arr[i]);
	//}

	//int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };

	// arr1 ���ַ�����, ���ǲ����ַ���. (û�� \0)
	// char arr1[] = { 'a', 'b', 'c' };
	// arr2 �����ַ���. �ַ�����������ַ�����. ������ \0 ��β
	// char arr2[] = "abc";

	//int arr[10] = { 0 };
	//// ע��, ���ڸ�������˵, �±겻���� 10
	//for (int i = 0; i < 10; i++) {
	//	arr[i] = i;
	//}
	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", arr[i]);
	//}

	//double arr[10] = { 0 };
	//for (int i = 0; i < 10; i++) {
	//	// ��ӡÿ��Ԫ�صĵ�ַ. 
	//	// %p �Ĺ��ܾ��Ǵ�ӡ��ַ/ָ�����
	//	// �˴�ʹ�� %d ����ӡ��ַ, Ҳ����ȫ ok ��. 
	//	// ��������ϰ���ϻ���Ҫ�� %p
	//	printf("%p\n", &arr[i]);
	//}

	// ��ά����
	// [��ȷ] ���������һ�� ����Ϊ 3 ��һά����, ÿ��Ԫ������һ������Ϊ 4 ��һά����
	// [����] ���������һ�� ����Ϊ 4 ��һά����, ÿ��Ԫ������һ������Ϊ 3 ��һά����
	// Ҳϰ���ϰ����������� "3��4��"
	// int arr[3][4] = { 1, 2, 3, 4, 5 };
	int arr[][] = {
		{ 1, 2 },
		{ 3, 4 },
	};

	system("pause");
	return 0;
}