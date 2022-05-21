#include <stdio.h>

#define size 5 // 매크로 상수를 이용한 배열 크기 지정
int main() {
	int list[size] = { 3, 2, 5, 6, 1 };
	int i, j, temp, least;


	for (i = 0; i < size - 1; i++) {
		least = i;
		for (j = i + 1; j < size; j++) {
			if (list[j] < list[least])
				least = j;
		}
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}

	for (i = 0; i < size; i++) {
		printf("%d ", list[i]);
	}
	return 0;
}