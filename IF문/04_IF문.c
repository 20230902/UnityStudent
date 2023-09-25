
// 철수는 아르바이트 중
// 철수가 일한 시간을 사용자 입력 받고,
// 철수의 임금을 출력하는 프로그램을 작성

// 철수가 일한 시간이 8시간을 초과할 경우,
// 초과한 시간만큼만 최저시급 * 1.5배로 연산
// 임금 = 일한 시간 * 최저시급

// 최저시급 -> 9,620

#include <stdio.h>

void main()
{
	// 최저 시급 담아둘 변수
	const int rate = 9620;
	const int stdTime = 8;

	// 일한 시간, 임금
	int time, pay;

	// 일한 시간을 입력
	printf("철수가 일한 시간을 입력해주세요. \n");
	scanf("%d", &time);

	// 8시간을 초과한 경우
	if (time > stdTime)
		pay = (rate * stdTime + (1.5f * rate * (time - stdTime)));
	// 초과하지 않은 경우
	else
		pay = rate * time;

	// 결과 출력
	printf("철수의 임금은 %d 원 입니다.\n", pay);
}