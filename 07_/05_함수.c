#include <stdio.h>

// 성적 평가 프로그램
// int형 변수 kor, eng, math 에
// 국어, 영어, 수학 점수를 사용자 입력받고
// [과목의 총점], [과목의 평균], [과목 중 최고점수]를
// 반환하는 함수를 정의하여, 
// 아래와 같이 동작하는 프로그램을 작성

// input
// 국어 : 90
// 영어 : 80
// 수학 : 85

// output
// 총점 : 255
// 평균 : 85.00
// 최고점수 : 90

int GetSum(int a, int b, int c);
double GetAvg(int a, int b, int c);
int	GetMax(int a, int b, int c);

void main()
{
	int kor, eng, math;

	printf("국어 점수 : ");
	scanf("%d", &kor);

	printf("영어 점수 : ");
	scanf("%d", &eng);

	printf("수학 점수 : ");
	scanf("%d", &math);

	printf("총점 : %d \n", GetSum(kor, eng, math));
	printf("평균 : %.2lf \n", GetAvg(kor, eng, math));
	printf("최고 점수 : %d \n", GetMax(kor, eng, math));
}

int GetSum(int a, int b, int c)
{
	return a + b + c;
}

double GetAvg(int a, int b, int c)
{
	return (double)(a + b + c) / 3;
}

int GetMax(int a, int b, int c)
{
	int max = a;
	max = (max > b) ? max : b;
	max = (max > c) ? max : c;

	return max;
}
