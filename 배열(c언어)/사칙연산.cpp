#include <stdio.h>
int main() {
	int num[6] = {};
	printf("2���� ���ڸ� �Է��Ͻÿ�>>");

	for (int i = 0; i < 2; i++) {
		scanf_s("%d", &num[i]);
	}
	// num[2]���� �� ���� ���� ����
	num[2] = num[0] + num[1];
	// num[3]���� �� ���� ���� ����
	num[3] = num[0] - num[1];
	// num[4]���� �� ���� ���� ����
	num[4] = num[0] * num[1];
	// num[5]���� �� ���� ������ ���� ����
	num[5] = num[0] / num[1];
	for (int i = 0; i < 5; i++) {
		printf("num[%d] = %d ", i, num[i]);
	}
}