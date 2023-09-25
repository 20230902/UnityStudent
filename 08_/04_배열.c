#include <stdio.h>

// int형 데이터 100개를 담을 수 있는 배열을 선언한 후,
// 각 원소에 1부터 100까지의 수를 담고, 출력해주세요.

void main()
{
	// 길이가 100인 int형 배열 선언
	int myArray[100];

	// 배열의 길이를 구함
	int length = sizeof(myArray) / sizeof(int);
	
	// 입력
	// 구한 길이만큼 반복
	for (int i = 0; i < length; ++i)
	{
		myArray[i] = i + 1;
	}

	// 출력
	for (int i = 0; i < length; ++i)
	{
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}
}