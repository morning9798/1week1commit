#include <stdio.h>
#define PI 3.14
// �� �ѷ� ��� �Լ� ����
double getCircum(int radius) {
	return radius * 2 * PI;
}
// �� ���� ��� �Լ� ����
double getArea(int radius) {
	return radius * radius * PI;
}

int main() {
	int radius; // ������ ���� ����
	double circum,area; // �� �ѷ�,���� ���� ����
	printf("�������� �Է��Ͻÿ�>>");
	scanf_s("%d", &radius);
	circum = getCircum(radius); // �� �ѷ� ����ϴ� �Լ� ȣ��
	area = getArea(radius); // �� ���� ����ϴ� �Լ� ȣ��
	printf("������ = %dcm, �� �ѷ� = %.2fcm, �� ���� = %.2f��", radius, circum, area);

	return 0;
}