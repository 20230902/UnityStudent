#include <stdio.h>

void main()
{
	for (int i = 0; i < 5; ++i)
	{
		// i의 값이 3일 경우, 다음으로 넘어감
		if (i == 3) continue;

		printf("i는 %d \n", i);
	}
}