#include <stdio.h>

// 전역 변수란?
// 함수 밖에 선언되며, 지역성을 띄는 지역변수와 
// 다르게 지역성이 없는 변수를 말합니다.
// 전역 변수의 사용 범위는 프로그램 전체
// 그러므로 어떤 함수든 선언한 전역 변수에 접근하여
// 데이터를 사용할 수 있습니다.
// 프로그램이 실행될 때, data 메모리 영역에 할당되며
// 프로그램이 종료될 때까지 존재합니다.

// 전역 변수를 선언
int globalVariable;
// 전역 변수는 초기화하지 않아도 0으로 초기화

// 전역변수에 value 값을 더하는 함수
void Add(int value);

void main()
{
	printf("globalVariable = %d \n", globalVariable);

	Add(10);
	printf("globalVariable = %d \n", globalVariable);
}

void Add(int value)
{
	globalVariable += value;
}
