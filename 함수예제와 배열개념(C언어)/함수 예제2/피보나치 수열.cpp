#include <stdio.h>

long fib(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main() {
	int n;
	printf("n���� �Է��Ͻÿ�>>");
	scanf_s("%d", &n);
	printf("%d �Ǻ���ġ ���� = %d\n", n, fib(n));

	return 0;
}