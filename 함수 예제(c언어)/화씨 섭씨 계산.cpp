#include <stdio.h>
// ������ ȭ���� ��� �Լ� ����
double getFer(int cel) {
	return cel * 1.8 + 32;
}

int main() {
	int cel; // ������ �����ϴ� ���� ����
	printf("���� �µ��� �Է��Ͻÿ�>>");
	scanf_s("%d", &cel);
	printf("���� �µ� = %d��C, ȭ�� �µ� = %.1f��F\n", cel, getFer(cel));
}