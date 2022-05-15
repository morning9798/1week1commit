#include <stdio.h>
#define n = 5

int main() {
	
	int jumsu[5] = { 10,20,30,40,50 };
	int i;
	for (i = 0; i < 5; i++) {
		jumsu[i] -= 5;
	}
	for (i = 0; i < 5; i++) {
		printf("jumsu[%d] = %d ", i, jumsu[i]);
	}


	/* 문자형 배열 짝수만
	char name[7] = { 'A','B','C','D','E','F','G' };
	for (int i = 0; i < 7; i += 2) {
		printf("%c ", name[i]);
	}
	*/

	/* 문자형 배열
	char name[7];
	printf("name에 들어갈 값을 입력하시오>>");
	int i;
	for (i = 0; i < 7; i++) {
		scanf_s(" %c", &name[i]);
	}
	for (i = 0; i < 7; i++) {
		printf("%c", name[i]);
	}
	*/

	/* 배열 선언 및 초기화
	int num[5]; // 배열 선언
//  int num[5] = { 10,20,30,40,50 }; // 배열 선언 및 초기화
//  int num[n]; // 매크로 상수
    
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("num[%d] = %d\t", i,num[i]);
	}
	*/
	return 0;
}