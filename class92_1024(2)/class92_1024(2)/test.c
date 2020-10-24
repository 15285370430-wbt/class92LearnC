#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int len, int toFind) {
	// ������������� [left, right]
	// ��ʼ�����, left �� 0, right �����һ��Ԫ�ص��±�. 
	// ���һ��Ԫ�ص��±�, ���ǳ��� - 1
	int left = 0;
	int right = len - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < toFind) {
			// ��ǰҪȥ�Ҳ����
			left = mid + 1;
		} else if (arr[mid] > toFind) {
			// ��ǰҪȥ������
			right = mid - 1;
		} else {
			// �ҵ���. 
			return mid;
		}
	}
	// ��������������, Ҳû�ҵ�ָ����Ԫ��. 
	return -1;
}


// #include "test.h"
// int global = 0;

// #include "test.h"
// int global = 0;

// ��׳˵���ͨ����
//int factor(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i++) {
//		result *= i;
//	}
//	return result;
//}

// ��׳˵ĵݹ�����
// �ǳ���������ѧ�ϵ� "��ѧ���ɷ�" 
// ��ʼ����, 1! => 1
// ���ƹ�ʽ, n! => n * (n - 1)!
int factor(int n) {
	if (n == 1) {
		return 1;
	}
	return n * factor(n - 1);
}

void printNum(int n) {
	if (n > 9) {
		printNum(n / 10);
	}
	printf("%d ", n % 10);
}

int main() {
	// ����һ������, �������������ж��ֲ���
	//int arr[] = { 2, 3, 5, 7, 8, 10 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//// ע��, ��������ķ���ֵ��ʾ������Ԫ���������е��±�. 
	//// ���Ҫ���ҵ�Ԫ�ز�����, ֱ�ӷ��� -1
	//int ret = binarySearch(arr, len, 10);
	//printf("ret = %d\n", ret);

	// дһ������, ���� num ��ֵ
	//int num = 0;
	//func(&num);
	//printf("num = %d\n", num);

	// дһ������, ͨ���ݹ�ķ�ʽ�� N �Ľ׳�
	//int n = 5;
	//int ret = factor(n);
	//printf("ret = %d\n", ret);

	int num = 1234;
	printNum(num);

	system("pause");
	return 0;
}

// ����βν����޸�, ����Ӱ�쵽ʵ��. 
// Ҫ��Ӱ�쵽ʵ��, ����Ҫ��ָ��. 
void func(int* num) {
	(*num)++;
}