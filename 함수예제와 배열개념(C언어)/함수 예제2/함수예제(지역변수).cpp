#include <stdio.h>

// ���� ���� : �Լ� �������� �����ϴ� ����

int getSum(int n) {
	int i, sum = 0; // getSum���� sum 
	for (i = 0; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int n, sum = 0; // main���� sum 
	printf("n���� �Է��Ͻÿ�>>");
	scanf_s("%d", &n);
	sum = getSum(n);
	printf("1���� %d������ �� = %d\n", n, sum); // �Լ� ȣ��

	return 0;
}