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
	printf("n값을 입력하시오>>");
	scanf_s("%d", &n);
	printf("%d 피보나치 수열 = %d\n", n, fib(n));

	return 0;
}