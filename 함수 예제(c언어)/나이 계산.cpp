#include <stdio.h>
// 나이를 계산하는 함수 선언
int age_count(int x);

int main() {
	int age,year;
	printf("출생연도를 입력하시오>>");
	scanf_s("%d", &year);

	// 나이를 계산하는 함수 호출
	age = age_count(year);

	// 출생연도의 나이를 출력
	printf("출생연도 = %d, 나이 = %d\n", year, age);

	return 0;
}

// 나이를 계산하는 함수 정의
int age_count(int x) {
	return 2022 - x + 1;
}