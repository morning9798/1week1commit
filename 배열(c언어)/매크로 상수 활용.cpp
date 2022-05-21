#include <stdio.h>
#define n 5 // 매크로 상수를 이용한 배열 크기 지정
int main() {
	int num[n] = {};
	printf("5개의 숫자를 입력하시오>>");

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &num[i]);
	}
	// 배열에 있는 값들을 모두 출력
	for (int i = 0; i < n; i++) {
		printf("num[%d] = %d ", i, num[i]);
	}
	// 반복문을 이용해서 배열에 있는 5개의 값들을 일괄적으로 다 10씩 더하기
	for (int i = 0; i < n; i++) {
		num[i] += 10;
	}
	printf("\n\n");
	for (int i = 0; i < n; i++) {
		printf("num[%d] = %d ", i, num[i]);
	}

	return 0;
}