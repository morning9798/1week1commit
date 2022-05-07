#include <stdio.h>
// 평수를 제곱미터(m2)로 환산하는 함수 정의(함수 선언 포함)
int trans(int pyeong) {
	return pyeong * 3.305785;
}

void main() {
	int pyeong; // 평수값 저장
	printf("평수 값을 저장하시오>>");
	scanf_s("%d", &pyeong);
	// 입력받은 평수를 제곱미터로 변환하는 함수 호출 및 결과 출력
	printf("평수 = %d평, 제곱미터 = %d㎡\n", pyeong, trans(pyeong));
}
