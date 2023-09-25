#include <stdio.h>

// 길이가 30인 int형 배열을 선언한 후,
// 각 원소에 31부터 60까지의 값을 입력한 후, 출력

void main()
{
	int myArray[30];

	int length = sizeof(myArray) / sizeof(int);

	for (int i = 0; i < length; ++i)
	{
		myArray[i] = 31 + i;
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}
}