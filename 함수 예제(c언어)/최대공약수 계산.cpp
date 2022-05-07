#include <stdio.h>
// 최대공약수를 계산하는 함수 정의
int getGcd(int x, int y) {
	int i, gcd = 0;
	for (i = 1; i <= x && i <= y; i++) {
		if (x % i == 0 && y % i == 0)
			gcd = i;
	}
	return gcd;
}

int main() {
	int x, y; // 2개의 정수를 저장하는 변수 선언
	int gcd; // 최대공약수를 저장하는 변수 선언
	printf("2개의 정수를 입력하시오>>");
	scanf_s("%d %d", &x, &y);
	// 최대공약수를 계산하는 함수 호출
	gcd = getGcd(x, y);
	
	printf("첫번째 수 = %d, 두번째 수 = %d, 최대공약수 = %d\n", x, y, gcd);
	return 0;
}