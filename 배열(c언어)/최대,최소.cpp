#include <stdio.h>

#define size 5 // 매크로 상수를 이용한 배열 크기 지정
int main() {
	int list[size];
	int min = list[0], max = list[0];

	for (int i = 0; i < size; i++) {
		scanf_s("%d", &list[i]);
	}

	for (int i = 1; i < size; i++) {
		if (list[i] < min) // 최소값 찾기
			min = list[i];
	}

	for (int i = 1; i < size; i++) {
		if (list[i] > max) // 최대값 찾기
			max = list[i];
	}
	printf("list[%d]의 최소값 = %d\n", size, min);
	printf("list[%d]의 최대값 = %d\n", size, max);

	return 0;
}