#include <stdio.h>

// 함수 포인터란?
// 함수의 이름은 함수가 있는 메모리의 주소이다 그러므로 이 함수 이름을 그대로
// 포인터에 대입하면 함수의 메모리를 알 수 있다.

void PrintHello();

void main()
{
	// 함수 포인터를 선언
	// 가리킬 함수의 반환 타입	(*함수 포인터 이름) (가리킬 함수의 매개 변수 타입) = 가리킬 함수의 이름;
	void(*myFuncPointer)(void) = *PrintHello;

	//함수 포인터가 가리키는 함수를 호출
	myFuncPointer();
}

 void PrintHello()
{
	printf("Hello ! \n");
}
