#include <stdio.h>

/* �Լ� �����ϰ� ���߿� ����
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);

*/

/* �Լ� �����ϰ� ����
// 2���� ������ �����ϴ� �Լ� ����
int add(int x, int y) {
	return x + y;
}
// 2���� ������ �����ϴ� �Լ� ����
int sub(int x, int y) {
	return x - y;
}
// 2���� ���ϱ⸦ �����ϴ� �Լ� ����
int mul(int x, int y) {
	return x * y;
}
// 2���� �����⸦ �����ϴ� �Լ� ����
double div(int x, int y) {
	return (double)x / y;
}
*/


int main() {
	int num1, num2;
	printf("2���� ���ڸ� �Է��Ͻÿ�>>");
	scanf_s("%d %d", &num1, &num2);
	// �Է¹��� 2���� ���ڸ� ������ �����ϴ� �Լ� ȣ��
	printf("%d + %d = %d\n", num1, num2,add(num1,num2)); // add�Լ� ȣ��
	// �Է¹��� 2���� ���ڸ� ������ �����ϴ� �Լ� ȣ��
	printf("%d - %d = %d\n", num1, num2, sub(num1, num2)); // sub�Լ� ȣ��
	// �Է¹��� 2���� ���ڸ� ������ ���ϱ��ϴ� �Լ� ȣ��
	printf("%d �� %d = %d\n", num1, num2, mul(num1, num2)); // mul�Լ� ȣ��
	// �Է¹��� 2���� ���ڸ� ������ �������ϴ� �Լ� ȣ��
	printf("%d �� %d = %.2f\n", num1, num2, div(num1, num2)); // div�Լ� ȣ��

	return 0;
}


/* ���� �κ�
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