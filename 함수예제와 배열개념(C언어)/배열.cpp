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


	/* ������ �迭 ¦����
	char name[7] = { 'A','B','C','D','E','F','G' };
	for (int i = 0; i < 7; i += 2) {
		printf("%c ", name[i]);
	}
	*/

	/* ������ �迭
	char name[7];
	printf("name�� �� ���� �Է��Ͻÿ�>>");
	int i;
	for (i = 0; i < 7; i++) {
		scanf_s(" %c", &name[i]);
	}
	for (i = 0; i < 7; i++) {
		printf("%c", name[i]);
	}
	*/

	/* �迭 ���� �� �ʱ�ȭ
	int num[5]; // �迭 ����
//  int num[5] = { 10,20,30,40,50 }; // �迭 ���� �� �ʱ�ȭ
//  int num[n]; // ��ũ�� ���
    
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("num[%d] = %d\t", i,num[i]);
	}
	*/
	return 0;
}