#include <stdio.h>
// ���� ��� �Լ� ����
int getTotal(int kor,int eng,int math) {
	return kor + eng + math;
 }
// ��� ��� �Լ� ����
double getAvg(int total) {
	return (double)total / 3;
}

int main() {
	int kor, eng, math; // ����,����,���� ���� ����
	int total; // ���� �����ϴ� ���� ����
	double avg; // ��� ���� �����ϴ� ���� ����
	printf("����,����,���� ������ �Է��Ͻʽÿ�>>");
	scanf_s("%d %d %d", &kor, &eng, &math);
	total = getTotal(kor, eng, math); //���� ����ϴ� �Լ� ȣ��
	avg = getAvg(total); // ��� ����ϴ� �Լ� ȣ��
	printf("���� = %d, ���� = %d, ���� = %d, ���� = %d, ��� = %.2f", kor, eng, math, total, avg);

	return 0;
}