#include <stdio.h>

// 철수의 국영수 점수(정수)를 사용자 입력받고,
// 점수의 평균을 구하여 아래와 같이 출력
// 평균이 80.5 이상이라면 "국영수의 평균은 80.5 이상입니다."
// 아니라면 "국영수의 평균은 80.5 이상이 아닙니다." 출력

void main()
{
	// 국영수 점수를 담을 변수 선언
	int kor, eng, math;

	printf("국어 : ");
	scanf("%d", &kor);

	printf("영어 : ");
	scanf("%d", &eng);

	printf("수학 : ");
	scanf("%d", &math);

	// 평균 값 연산
	double avg = (double)(kor + eng + math) / 3;

	// 결과 출력
	if (avg >= 80.5)
		printf("국영수의 평균은 80.5 이상입니다.\n");
	else
		printf("국영수의 평균은 80.5 이상이 아닙니다.\n");
}