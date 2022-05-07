#include <stdio.h>
#define PI 3.14
// 원 둘레 계산 함수 정의
double getCircum(int radius) {
	return radius * 2 * PI;
}
// 원 면적 계산 함수 정의
double getArea(int radius) {
	return radius * radius * PI;
}

int main() {
	int radius; // 반지름 변수 선언
	double circum,area; // 원 둘레,면적 변수 선언
	printf("반지름값 입력하시오>>");
	scanf_s("%d", &radius);
	circum = getCircum(radius); // 원 둘레 계산하는 함수 호출
	area = getArea(radius); // 원 면적 계산하는 함수 호출
	printf("반지름 = %dcm, 원 둘레 = %.2fcm, 원 면적 = %.2f㎠", radius, circum, area);

	return 0;
}