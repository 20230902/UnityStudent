#include <stdio.h>

// if문의 조건의 결과에 따라, 추가적인 검사를 하고 싶다면?
// -> else if문을 사용

// else if
// 분기점을 다양하게 만들 때 사용하는 기능

void main()
{
	int a;
	printf("a 입력 : ");
	scanf("%d", &a);

	// a의 값이 0보다 큰지
	if (a > 0)
	{
		printf("a는 양수\n");
	}
	// a의 값이 0보다 작은지
	else if (a < 0)
	{
		printf("a는 음수\n");
	}
	// 위 두 조건이 모두 아니라면
	else
	{
		printf("a는 0\n");
	}

	// else if
	// else문 처럼 단독으로 사용할 수 없습니다. 
	// if 문 다음, 또는 else if문 다음에 사용
	// else if가 사용될 때, else 문을 사용한다면 else는 마지막에 와야 함
}