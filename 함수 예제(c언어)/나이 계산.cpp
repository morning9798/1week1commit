#include <stdio.h>
// ���̸� ����ϴ� �Լ� ����
int age_count(int x);

int main() {
	int age,year;
	printf("��������� �Է��Ͻÿ�>>");
	scanf_s("%d", &year);

	// ���̸� ����ϴ� �Լ� ȣ��
	age = age_count(year);

	// ��������� ���̸� ���
	printf("������� = %d, ���� = %d\n", year, age);

	return 0;
}

// ���̸� ����ϴ� �Լ� ����
int age_count(int x) {
	return 2022 - x + 1;
}