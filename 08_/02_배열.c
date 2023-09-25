#include <stdio.h>

void main()
{
	// 보통 배열은 반복문과 함께 사용
	// -> 배열의 원소에 순차적으로 접근할 경우

	// 원소의 개수가 10개인 배열을 선언
	int myArray[] = { 23, 53, 12, 35, 20, 30, 10, 99, 11, 14 };

	for (int i = 0; i < 10; ++i)
	{
		// i 값과 일치하는 인덱스를 갖는 원소의 값이 출력
		printf("myArray[%d]의 값은 %d \n", i, myArray[i]);
	}
}