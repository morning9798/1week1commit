#include <stdio.h>
// cm�� m�� ȯ���ϴ� �Լ� ����(�Ծ���� ����)
double trans(int cm) {
	return (double)cm / 100;
}

int main() {
	int cm; // cm �� ����
	printf("cm���� �Է��Ͻÿ�>>");
	scanf_s("%d", &cm);
	// cm�� m�� ��ȯ�Լ� �Լ� ȣ�� �� ���
	printf("��Ƽ���� �� = %dcm, ���� �� = %.2fm", cm, trans(cm));
}