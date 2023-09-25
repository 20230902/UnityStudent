#include <stdio.h>

void main()
{
	int myArray[] = { 1, 2, 3 };

	// 배열의 범위를 넘어서 사용한다면?
	for (int i = 0; i < 4; ++i)
	{
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}

	// 위와 같이, 조건식의 범위를 리터럴 값으로 작성할 경우
	// 사용자의 실수에 의해, 배열의 범위를 벗어날 수 있음

	int length = sizeof(myArray) / sizeof(myArray[0]);

	for (int i = 0; i < length; ++i)
	{
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}
}