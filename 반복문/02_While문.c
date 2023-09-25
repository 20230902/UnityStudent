#include <stdio.h>

void main()
{
	// while문 중첩 사용 가능

	int a = 0;

	// a의 값이 3 미만이라면 반복
	while (a < 3)
	{
		// while (a < 3) { ... } 구문이 끝나면
		// 사라지는 변수 b를 선언 
		// 만약 첫번째 while문이 끝나도 b 값이
		// 유지되도록 하려면 첫번째 while문 외부에
		// b를 선언해야 합니다.
		int b = 0;

		printf("a는 %d \n", a++);

		// b의 값이 3미만이라면 반복
		while (b < 3)
		{
			printf("b는 %d \n", b++);
		}
	}
}