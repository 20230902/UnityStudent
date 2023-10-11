#include <stdio.h>
#include <stdlib.h>


// 난수란 ? 
// 특정한 배열 순서, 규칙을 가지지 안흔ㄴ 
// 연속적인 임의의 수를 의미


// c언어에서는 rand() 함수를 이용하여 난수를 생성
// stdlib.h 필요
// 
void main()
{
	for (int i = 0; i < 5; ++i)
	{
		printf("%d \n", rand());
	}
}