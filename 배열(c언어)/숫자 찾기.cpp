#include <stdio.h>

#define size 10 // ��ũ�� ����� �̿��� �迭 ũ�� ����
int main() {
	int list[size] = { 1,2,3,4,5,6,7,8,9,10 };
	int key;
	printf("Ž���� ���� �Է��Ͻÿ�>>");
	scanf_s("%d", &key);
	for (int i = 0; i < size; i++) {
		if (key == list[i])
			printf("Ž�� ���� �ε��� = %d, �迭 �� = %d\n", i, list[i]);
	}
	printf("Ž�� ����");

	return 0;
}