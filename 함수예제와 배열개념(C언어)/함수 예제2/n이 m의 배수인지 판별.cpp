#include <stdio.h>

int is_multiple(int n, int m) { // n�� m�� ������� �Ǻ��ϴ� �Լ�
	if (n % m == 0)
		return 0;
	else
		return 1;
}

int main() {
	int n, m;
	printf("n�� m���� �Է¹����ÿ�>>");
	scanf_s("%d %d", &n, &m);
	if (is_multiple(n, m) == 0)
		printf("%d�� %d�� ����Դϴ�.\n", n, m);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.\n", n, m);
	return 0;
}