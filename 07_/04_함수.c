#include <stdio.h>

// 전달받은 2개의 데이터를 더하여
// 반환하는 함수
int Plus(int number1, int number2);

void main()
{
	int a, b;

	printf("a 입력 : ");
	scanf("%d", &a);

	printf("b 입력 : ");
	scanf("%d", &b);

	printf("%d + %d = %d \n", a, b, Plus(a, b));
}

int Plus(int number1, int number2)
{
	return number1 + number2;
}
