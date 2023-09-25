#include <stdio.h>

// 해당 파일 외부에 선언된 myNumber 전역변수를 사용하겠다
// 라고 선언
extern int myNumber;

// 외부 함수를 선언
void PrintNumber();
// 함수는 extern을 명시하지 않아도, 기본값이 extern 입니다.

void main()
{
	PrintNumber();
}