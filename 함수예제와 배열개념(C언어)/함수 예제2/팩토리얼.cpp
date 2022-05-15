#include <stdio.h>

long fact(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1); // 함수 자신이 자신을 호출하는 것, 재귀 함수
}

int main() {
	int n;
	printf("n값을 입력하시오>>");
	scanf_s("%d", &n);
	printf("%d! = %d\n", n, fact(n));
}