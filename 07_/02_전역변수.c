#include <stdio.h>

int a = 50;

void Assign();

void main()
{
	printf("a는 %d \n", a);
	Assign();
	printf("a는 %d \n", a);
}

void Assign()
{
	// 만약 전역 변수와 동일한 이름(식별자)를 갖는
	// 지역 변수를 함수 내부에 선언한다면?
	//  -> 전역 변수보다 지역 변수가 우선시 됩니다
	//	   함수의 파라미터도 지역 변수처럼 처리됨 
	//int a = 10;

	// 전역 변수의 값을 변경하는 것이 아닌,
	// 지역 변수 a의 값을 변경
	a += 100;
}
