#include <stdio.h>

int main() {
	int jumsu[5] = {}; // 배열 선언 및 초기화

	printf("국어, 영어, 수학 성적을 입력하시오>>");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &jumsu[i]);
	}

	jumsu[3] = jumsu[0] + jumsu[1] + jumsu[2]; // 총점 구하는 계산식
	jumsu[4] = jumsu[3] / 3; // 평균 구하는 계산식
	
	for (int i = 0; i < 5; i++) {
		printf("jumsu[%d] = %d\n", i, jumsu[i]);
	}

	return 0;
}