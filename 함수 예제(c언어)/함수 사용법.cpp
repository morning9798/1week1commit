#include <stdio.h>

/* 함수 선언하고 나중에 구현
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);

*/

/* 함수 선언하고 구현
// 2개의 정수를 덧셈하는 함수 정의
int add(int x, int y) {
	return x + y;
}
// 2개의 정수를 뺄셈하는 함수 정의
int sub(int x, int y) {
	return x - y;
}
// 2개의 곱하기를 뺄셈하는 함수 정의
int mul(int x, int y) {
	return x * y;
}
// 2개의 나누기를 뺄셈하는 함수 정의
double div(int x, int y) {
	return (double)x / y;
}
*/


int main() {
	int num1, num2;
	printf("2개의 숫자를 입력하시오>>");
	scanf_s("%d %d", &num1, &num2);
	// 입력받은 2개의 숫자를 가지고 덧셈하는 함수 호출
	printf("%d + %d = %d\n", num1, num2,add(num1,num2)); // add함수 호출
	// 입력받은 2개의 숫자를 가지고 뺄셈하는 함수 호출
	printf("%d - %d = %d\n", num1, num2, sub(num1, num2)); // sub함수 호출
	// 입력받은 2개의 숫자를 가지고 곱하기하는 함수 호출
	printf("%d × %d = %d\n", num1, num2, mul(num1, num2)); // mul함수 호출
	// 입력받은 2개의 숫자를 가지고 나누기하는 함수 호출
	printf("%d ÷ %d = %.2f\n", num1, num2, div(num1, num2)); // div함수 호출

	return 0;
}


/* 구현 부분
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
double div(int x, int y) {
	return (double)x / y;
}
*/