#include <stdio.h>
// 총점 계싼 함수 정의
int getTotal(int kor,int eng,int math) {
	return kor + eng + math;
 }
// 평균 계산 함수 정의
double getAvg(int total) {
	return (double)total / 3;
}

int main() {
	int kor, eng, math; // 국어,영어,수학 변수 선언
	int total; // 총점 저장하는 변수 선언
	double avg; // 평균 값을 저장하는 변수 선언
	printf("국어,영어,수학 성적을 입력하십시오>>");
	scanf_s("%d %d %d", &kor, &eng, &math);
	total = getTotal(kor, eng, math); //총점 계산하는 함수 호출
	avg = getAvg(total); // 평균 계산하는 함수 호출
	printf("국어 = %d, 영어 = %d, 수학 = %d, 총점 = %d, 평균 = %.2f", kor, eng, math, total, avg);

	return 0;
}