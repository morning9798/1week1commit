#include <stdio.h>
// cm를 m로 환산하는 함수 정의(함쑤썬언 포함)
double trans(int cm) {
	return (double)cm / 100;
}

int main() {
	int cm; // cm 값 저장
	printf("cm값을 입력하시오>>");
	scanf_s("%d", &cm);
	// cm를 m로 변환함수 함수 호출 및 출력
	printf("센티미터 값 = %dcm, 미터 값 = %.2fm", cm, trans(cm));
}