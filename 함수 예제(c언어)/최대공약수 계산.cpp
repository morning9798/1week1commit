#include <stdio.h>
// �ִ������� ����ϴ� �Լ� ����
int getGcd(int x, int y) {
	int i, gcd = 0;
	for (i = 1; i <= x && i <= y; i++) {
		if (x % i == 0 && y % i == 0)
			gcd = i;
	}
	return gcd;
}

int main() {
	int x, y; // 2���� ������ �����ϴ� ���� ����
	int gcd; // �ִ������� �����ϴ� ���� ����
	printf("2���� ������ �Է��Ͻÿ�>>");
	scanf_s("%d %d", &x, &y);
	// �ִ������� ����ϴ� �Լ� ȣ��
	gcd = getGcd(x, y);
	
	printf("ù��° �� = %d, �ι�° �� = %d, �ִ����� = %d\n", x, y, gcd);
	return 0;
}