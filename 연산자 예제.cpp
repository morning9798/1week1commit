#include <stdio.h>
#define PI 3.141592 //��ũ�� ���(���̰�)

int main() {

	/* ���,���� ���ϱ�
	int kuk, eng, math,total,avg;
	char hak;

	printf("����, ����, ���� ���� �Է� >> ");
	scanf_s("%d %d %d", &kuk, &eng, &math);

	total = kuk + eng + math;
	avg = total / 3;

	if (avg <= 100 && avg >= 90)
		hak = 'A';
	if (avg < 90 && avg >= 80)
		hak = 'B';
	if (avg < 80 && avg >= 70)
		hak = 'C';
	if (avg <= 70 && avg >= 60)
		hak = 'D';
	if (avg < 60)
		hak = 'F';

	printf("=====================================================================================\n");
	printf("����            ����            ����            ����           ���            ����\n");
	printf("=====================================================================================\n");
	printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%c\t\t\n", kuk, eng, math, total, avg, hak);
	printf("=====================================================================================\n");

	*/

	/* ����,��� üũ
	int year;
	printf("�⵵ �Է� >> ");
	scanf_s("%d", &year);

	if (year % 4 == 0 || year % 400 == 0) {
		if (year % 100 == 0)
			printf("����Դϴ�\n");
		else
			printf("�����Դϴ�\n");
	}	
	*/

	/* ������ üũ
	int month;

	printf("���� �Է��Ͻÿ� >> ");
	scanf_s("%d", &month);

	if (month >= 6 && month <= 8)
		printf("������ ��� ����\n");
	if (month < 6 || month > 8)
		printf("�Ϲݿ�� ����\n");
	*/

	/* �� ������
	int num1, num2;

	printf("2���� ������ �Է��Ͻÿ�. >> ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d > %d : %d\n", num1, num2, num1 > num2);
	printf("%d < %d : %d\n", num1, num2, num1 < num2);
	printf("%d >= %d : %d\n", num1, num2, num1 >= num2);
	printf("%d <= %d : %d\n", num1, num2, num1 <= num2);
	printf("%d == %d : %d\n", num1, num2, num1 == num2);
	printf("%d != %d : %d\n", num1, num2, num1 != num2);
	*/

	/* �ﰢ�� ����
	int base, height;
	double area;

	printf("�غ��� ���� �Է� >> ");
	scanf_s("%d %d", &base, &height);

	area = base * height / 2;

	printf("�ﰢ���� ���� = %.2f\n", area);
	*/
	/* ǥ�� ü�� ���ϱ�
	double cm, kg;

	printf("Ű �Է� >> ");
	scanf_s("%lf", &cm);

	kg = cm * cm * 22 / 10000;

	printf("ǥ�� ü�� = %.1f\n", kg);
	*/

	/* �簢�� ���� �ѷ� ���ϱ�
	int width=0,height=0,area=0,perimeter=0;

	printf("���� ���� �Է� >> ");
	scanf_s("%d %d", &width, &height);

	area = width * height;

	printf("�簢���� ���� = %d\n", area);

	perimeter = 2 * (width + height);

	printf("�簢���� �ѷ� = %d\n", perimeter);
	*/

	/* �� ���� �ѷ� ���ϱ�
	int radius = 0;
	double area, perimeter;

	printf("�������� �Է��Ͻÿ� >> ");
	scanf_s("%d", &radius);
	//�� ���� ���
	area = PI * radius * radius;
	printf("�� ���� = %.2f\n", area);
	//�� �ѷ� ���
	perimeter = PI * 2 * radius;
	printf("�� �ѷ� = %.2f\n", perimeter);
	*/

	/* ��Ģ����
	int num;
	printf("������ �Է��Ͻÿ� >>");
	scanf_s("%d", &num);
	printf("num = %d\n",num);
	
	printf("��� num = %d\n", +num); // +���� ����
	printf("���� num = %d\n", -num); // -���� ����
	printf("num�� 1������ �� = %d\n", ++num); //++num�� num = num+1�� ����
	printf("num�� 1������ �� = %d\n", num++); //num++�� ����ϰ� +1
	printf("num++ ������ num = %d\n", num);
	printf("num + 2 = %d\n", (num + 2)); // ���� ��� ����
	printf("num - 2 = %d\n", (num - 2));
	printf("num * 2 = %d\n", (num * 2));
	printf("num / 2 = %d\n", (num / 2));
	printf("num %% 2 = %d\n", (num % 2));
	*/

	return 0;
}