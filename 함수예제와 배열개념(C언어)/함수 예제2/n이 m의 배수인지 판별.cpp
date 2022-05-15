#include <stdio.h>

int is_multiple(int n, int m) { // n이 m의 배수인지 판별하는 함수
	if (n % m == 0)
		return 0;
	else
		return 1;
}

int main() {
	int n, m;
	printf("n과 m값을 입력받으시오>>");
	scanf_s("%d %d", &n, &m);
	if (is_multiple(n, m) == 0)
		printf("%d는 %d의 배수입니다.\n", n, m);
	else
		printf("%d는 %d의 배수가 아닙니다.\n", n, m);
	return 0;
}