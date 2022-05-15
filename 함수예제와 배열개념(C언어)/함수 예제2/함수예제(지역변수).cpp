#include <stdio.h>

// 지역 변수 : 함수 내에서만 존재하는 변수

int getSum(int n) {
	int i, sum = 0; // getSum안의 sum 
	for (i = 0; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int n, sum = 0; // main안의 sum 
	printf("n값을 입력하시오>>");
	scanf_s("%d", &n);
	sum = getSum(n);
	printf("1부터 %d까지의 합 = %d\n", n, sum); // 함수 호출

	return 0;
}