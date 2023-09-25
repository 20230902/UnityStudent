#include <stdio.h>

void main()
{
	// for문을 이용해서, 
	// 1부터 20까지의 합계를 구한 후, 출력해주세요.

	// 합계를 저장할 변수
	int result = 0;

	for (int i = 1; i < 21; ++i)
	{
		result += i;
	}

	printf("합계 : %d \n", result);
}