#include <stdio.h>

void prime_number(int x) { // 1부터 매개변수로 넘어온 해당 숫자까지의 숫자들 중 소수들만 출력
	if (x == 1)
		return;
	
	int i;
	
	for (i = 2; i <= x; i++) {
		if (i == 2)
			printf("%d ", i);
		if (i == 3)
			printf("%d ", i);
		if (i == 5)
			printf("%d ", i);
		if (i == 7)
			printf("%d ", i);
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
			printf("%d ", i);
	}
	printf("\n");
}
void sum_prime(int x) { // 1부터 매개변수로 넘어온 해당 숫자까지의 소수들의 합을 계산 및 출력
	if (x == 1)
		return;

	int i, sum = 0;

	for (i = 2; i <= x; i++) {
		if (i == 2)
			sum += i;
		if (i == 3)
			sum += i;
		if (i == 5)
			sum += i;
		if (i == 7)
			sum += i;
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
			sum += i;
	}
	printf("소수들의 합 = %d\n", sum);
}

int main() {
	int n, sum;
	printf("n값을 입력하시오>>");
	scanf_s("%d", &n);
	prime_number(n);
	sum_prime(n);

	return 0;
}