#include <stdio.h>

long fact(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1); // �Լ� �ڽ��� �ڽ��� ȣ���ϴ� ��, ��� �Լ�
}

int main() {
	int n;
	printf("n���� �Է��Ͻÿ�>>");
	scanf_s("%d", &n);
	printf("%d! = %d\n", n, fact(n));
}