#include <stdio.h>
#define n 5 // ��ũ�� ����� �̿��� �迭 ũ�� ����
int main() {
	int num[n] = {};
	printf("5���� ���ڸ� �Է��Ͻÿ�>>");

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &num[i]);
	}
	// �迭�� �ִ� ������ ��� ���
	for (int i = 0; i < n; i++) {
		printf("num[%d] = %d ", i, num[i]);
	}
	// �ݺ����� �̿��ؼ� �迭�� �ִ� 5���� ������ �ϰ������� �� 10�� ���ϱ�
	for (int i = 0; i < n; i++) {
		num[i] += 10;
	}
	printf("\n\n");
	for (int i = 0; i < n; i++) {
		printf("num[%d] = %d ", i, num[i]);
	}

	return 0;
}