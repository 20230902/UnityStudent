#include <stdio.h>

void main()
{
	// for 문으로 별 찍기
	
	// for문 중첩해서 - 2중 for문
	// for문 안에서 printf()만 사용 가능

	// *
	// **
	// ***
	// ****
	// *****

	// y축
	for (int i = 0; i < 5; ++i)
	{
		// x축
		for (int j = 0; j <= i; ++j)
		{
			printf("*");
		}

		printf("\n");
	}

	// *****
	// ****
	// ***
	// **
	// *

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5 - i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}