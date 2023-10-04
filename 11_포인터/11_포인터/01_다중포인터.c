#include <stdio.h>

/// 
///	포인터 변수의 주소를 저장할 수 있습니다.
/// 포인터 변수의 주소는 일반 포인터 변수가
/// 저장할 수 없음
/// -> 이중 포인터 변수를 이용해서 저장 
///

void Change(int* a, int* b);
void Change2(int** a, int* b);
void main()
{
	int num = 10;
	int num2 = 20;
	
	// num의 메모리 시작 주소를 pNum이 가리키도록 합니다. 
	int* pNum = &num;
	int* pNum3 = &num2;

	


	// pNum의 메모리 시작 주소를  ppNum이 가리키도록 합니다.
	int** ppNum = &pNum;
	int* pNum2 = &pNum;
	// 역참조 연산자를 이용하면, num이 가진 값에 접근 가능

	printf("*ppNum = %p \n", *ppNum);
	printf("**ppNum = %d \n", **ppNum);
	Change2(ppNum, pNum3);
	



	printf("&num =%p \n", &num);
	printf("num2 = %p \n", &num2);
	printf("pNum 의 주소 = %p \n", &pNum);
	printf("pNum이 가리키는 대상 =%p \n", pNum);
	printf("ppNum =%p 이 가리키는 대상 \n", ppNum);
	printf("pNum2 = %p이 가리키는 대상 \n", pNum2);
	printf("pNum3 = %p이 가리키는 대상 \n", pNum3);
	printf("pNum2 = %p이 가리키는 대상 \n", *pNum2);  //역참조를 통해 num의 주소값은 얻을 수 있지만 num의 실제값은 제어할 수 없다.
}

void Change(int* a, int* b)
{
	a = b;
}

void Change2(int** a, int* b)
{
	*a = b;

}
