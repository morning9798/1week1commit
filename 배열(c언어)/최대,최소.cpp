#include <stdio.h>

#define size 5 // ��ũ�� ����� �̿��� �迭 ũ�� ����
int main() {
	int list[size];
	int min = list[0], max = list[0];

	for (int i = 0; i < size; i++) {
		scanf_s("%d", &list[i]);
	}

	for (int i = 1; i < size; i++) {
		if (list[i] < min) // �ּҰ� ã��
			min = list[i];
	}

	for (int i = 1; i < size; i++) {
		if (list[i] > max) // �ִ밪 ã��
			max = list[i];
	}
	printf("list[%d]�� �ּҰ� = %d\n", size, min);
	printf("list[%d]�� �ִ밪 = %d\n", size, max);

	return 0;
}