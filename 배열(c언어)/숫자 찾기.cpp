#include <stdio.h>

#define size 10 // 매크로 상수를 이용한 배열 크기 지정
int main() {
	int list[size] = { 1,2,3,4,5,6,7,8,9,10 };
	int key;
	printf("탐색할 값을 입력하시오>>");
	scanf_s("%d", &key);
	for (int i = 0; i < size; i++) {
		if (key == list[i])
			printf("탐색 성공 인덱스 = %d, 배열 값 = %d\n", i, list[i]);
	}
	printf("탐색 종료");

	return 0;
}