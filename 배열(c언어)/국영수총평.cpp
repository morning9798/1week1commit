#include <stdio.h>

int main() {
	int jumsu[5] = {}; // �迭 ���� �� �ʱ�ȭ

	printf("����, ����, ���� ������ �Է��Ͻÿ�>>");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &jumsu[i]);
	}

	jumsu[3] = jumsu[0] + jumsu[1] + jumsu[2]; // ���� ���ϴ� ����
	jumsu[4] = jumsu[3] / 3; // ��� ���ϴ� ����
	
	for (int i = 0; i < 5; i++) {
		printf("jumsu[%d] = %d\n", i, jumsu[i]);
	}

	return 0;
}