#include <stdio.h>
// ����� ��������(m2)�� ȯ���ϴ� �Լ� ����(�Լ� ���� ����)
int trans(int pyeong) {
	return pyeong * 3.305785;
}

void main() {
	int pyeong; // ����� ����
	printf("��� ���� �����Ͻÿ�>>");
	scanf_s("%d", &pyeong);
	// �Է¹��� ����� �������ͷ� ��ȯ�ϴ� �Լ� ȣ�� �� ��� ���
	printf("��� = %d��, �������� = %d��\n", pyeong, trans(pyeong));
}
