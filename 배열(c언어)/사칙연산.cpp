#include <stdio.h>
int main() {
	int num[6] = {};
	printf("2개의 숫자를 입력하시오>>");

	for (int i = 0; i < 2; i++) {
		scanf_s("%d", &num[i]);
	}
	// num[2]에는 두 수의 합을 저장
	num[2] = num[0] + num[1];
	// num[3]에는 두 수의 차를 저장
	num[3] = num[0] - num[1];
	// num[4]에는 두 수의 곱을 저장
	num[4] = num[0] * num[1];
	// num[5]에는 두 수의 나눗셈 몫을 저장
	num[5] = num[0] / num[1];
	for (int i = 0; i < 5; i++) {
		printf("num[%d] = %d ", i, num[i]);
	}
}