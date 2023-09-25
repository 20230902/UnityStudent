#include <stdio.h>

// 반환형식이 void가 아닌 함수
// 반환 형식이 void 가 아니라면
// 꼭 return 문을 이용하여 어떠한 결과를 
// 반환해야 합니다.

// return 문이란?
// 점프문이며, 함수의 실행을 종료하고
// 프로그램의 흐름을 호출자에게 돌려놓습니다.
// 반환 형식이 void 형식이 아닌 함수에서는
// return 반환값; <- 으로 어떠한 값을 반환함
// 반환 형식이 void 형식인 함수에서는
// return; <- 을 이용하여 함수를 종료 시킬 수 있음

// int형 데이터를 반환하는 GetMyNumber() 함수를 선언
// 함수 정의 만들기 숏컷 : ctrl + . + enter
int GetMyNumber();

void main()
{
	// n 변수에 GetMyNumber()의 반환 값을 받습니다.
	// -> 원하지 않는다면 반환 값을 받지 않아도 됨
	int n = GetMyNumber();

	printf("n의 값은 %d \n", n);
}

int GetMyNumber()
{
	int myNumber;

	printf("본인의 번호를 입력해주세요. \n");
	scanf("%d", &myNumber);

	// 반환 값을 myNumber로 지정
	// 해당 함수를 호출하는 곳에서 myNumber가 가진 값을
	// 받을 수 있습니다.
	return myNumber;
}
