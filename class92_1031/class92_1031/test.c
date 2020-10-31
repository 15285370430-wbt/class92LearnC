#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int size) {
	// ��������Ԫ�صıȽϺͽ���
	// �˴�������������. 
	// ���մӺ���ǰ�����ķ�ʽ���бȽϺͽ���. 
	// ע����������� ���������� �� ���������� �ı任
	// �˴� bound ���ǻ���������������ʹ���������ı߽�
	// [0, bound) ����������
	// [bound, size) ����������
	for (int bound = 0; bound < size; bound++) {
		// ���ѭ������һ�˱�����ʵ��. ��ʱ��Ҫ�Ӻ���ǰ
		for (int cur = size - 1; cur > bound; cur--) {
			if (arr[cur - 1] > arr[cur]) {
				// ������ǰ���ǲ������������. 
				// �˴�����������
				// ǰһ��Ԫ�رȺ�һ��Ԫ�ش�, ���� "�����Ϲ���"
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}

int main() {
	//int arr[3][4] = {
	//	{1, 2, 3, 4},
	//	{5, 6, 7, 8},
	//	{9, 10, 11, 12 },
	//};
	//// ��ά�����ڷ����±��ʱ������Ҫ�����±�. �ֱ��ʾ�е��±���е��±�
	//// i ���������ѭ���г���Ƶ��̫��, �����ֻ�. 
	//// i �� j �����������ĺ���, �� bug ��ʱ��Ҳ�����׿���. 
	//for (int row = 0; row < 3; row++) {
	//	for (int col = 0; col < 4; col++) {
	//		printf("%d ", arr[row][col]);
	//	}
	//	printf("\n");
	//}

	// ð������
	int arr[] = { 9, 5, 2, 7 };
	// ������������
	bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
	
	system("pause");
	return 0;
}