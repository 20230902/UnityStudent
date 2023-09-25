#include <stdio.h>

// 점프문이란?
// 프로그램의 흐름을 끊고, 프로그램의 실행 위치를
// 원하는 곳으로 도약시킬 때 사용

// c언어 
// break
// continue
// goto
// return

// break문
// 현재 실행중인 반복문이나, 
// switch 문의 실행을 중단하고자 할 때 사용

void main()
{
	int i = 10;

	while (1)
	{
		--i;
		printf("i는 %d \n", i);

		if (i == 5)
		{
			printf("반복을 중단 \n");
			// 현재 진행중인 반복을 중단
			break;
		}
	}
}
