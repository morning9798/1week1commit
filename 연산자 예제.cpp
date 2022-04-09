#include <stdio.h>
#define PI 3.141592 //매크로 상수(파이값)

int main() {

	/* 평균,학점 구하기
	int kuk, eng, math,total,avg;
	char hak;

	printf("국어, 영어, 수학 점수 입력 >> ");
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
	printf("국어            영어            수학            총점           평균            학점\n");
	printf("=====================================================================================\n");
	printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%c\t\t\n", kuk, eng, math, total, avg, hak);
	printf("=====================================================================================\n");

	*/

	/* 윤년,평년 체크
	int year;
	printf("년도 입력 >> ");
	scanf_s("%d", &year);

	if (year % 4 == 0 || year % 400 == 0) {
		if (year % 100 == 0)
			printf("평년입니다\n");
		else
			printf("윤년입니다\n");
	}	
	*/

	/* 성수기 체크
	int month;

	printf("월을 입력하시오 >> ");
	scanf_s("%d", &month);

	if (month >= 6 && month <= 8)
		printf("성수기 요금 적용\n");
	if (month < 6 || month > 8)
		printf("일반요금 적용\n");
	*/

	/* 비교 연산자
	int num1, num2;

	printf("2개의 정수를 입력하시오. >> ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d > %d : %d\n", num1, num2, num1 > num2);
	printf("%d < %d : %d\n", num1, num2, num1 < num2);
	printf("%d >= %d : %d\n", num1, num2, num1 >= num2);
	printf("%d <= %d : %d\n", num1, num2, num1 <= num2);
	printf("%d == %d : %d\n", num1, num2, num1 == num2);
	printf("%d != %d : %d\n", num1, num2, num1 != num2);
	*/

	/* 삼각형 넓이
	int base, height;
	double area;

	printf("밑변과 높이 입력 >> ");
	scanf_s("%d %d", &base, &height);

	area = base * height / 2;

	printf("삼각형의 넓이 = %.2f\n", area);
	*/
	/* 표준 체중 구하기
	double cm, kg;

	printf("키 입력 >> ");
	scanf_s("%lf", &cm);

	kg = cm * cm * 22 / 10000;

	printf("표준 체중 = %.1f\n", kg);
	*/

	/* 사각형 넓이 둘레 구하기
	int width=0,height=0,area=0,perimeter=0;

	printf("가로 세로 입력 >> ");
	scanf_s("%d %d", &width, &height);

	area = width * height;

	printf("사각형의 넓이 = %d\n", area);

	perimeter = 2 * (width + height);

	printf("사각형의 둘레 = %d\n", perimeter);
	*/

	/* 원 넓이 둘레 구하기
	int radius = 0;
	double area, perimeter;

	printf("반지름을 입력하시오 >> ");
	scanf_s("%d", &radius);
	//원 면적 계산
	area = PI * radius * radius;
	printf("원 면적 = %.2f\n", area);
	//원 둘레 계산
	perimeter = PI * 2 * radius;
	printf("원 둘레 = %.2f\n", perimeter);
	*/

	/* 사칙연산
	int num;
	printf("정수를 입력하시오 >>");
	scanf_s("%d", &num);
	printf("num = %d\n",num);
	
	printf("양수 num = %d\n", +num); // +단항 연산
	printf("음수 num = %d\n", -num); // -단항 연산
	printf("num을 1증가한 값 = %d\n", ++num); //++num은 num = num+1과 동일
	printf("num을 1증가한 값 = %d\n", num++); //num++은 출력하고 +1
	printf("num++ 이후의 num = %d\n", num);
	printf("num + 2 = %d\n", (num + 2)); // 이항 산술 연산
	printf("num - 2 = %d\n", (num - 2));
	printf("num * 2 = %d\n", (num * 2));
	printf("num / 2 = %d\n", (num / 2));
	printf("num %% 2 = %d\n", (num % 2));
	*/

	return 0;
}