#include <stdio.h>

/// 
///	포인터 변수의 주소를 저장할 수 있습니다.
/// 포인터 변수의 주소는 일반 포인터 변수가
/// 저장할 수 없음
/// -> 이중 포인터 변수를 이용해서 저장 
///

void main()
{
	int num = 10;
	
	// num의 메모리 시작 주소를 pNum이 가리키도록 합니다. 
	int* pNum = &num;

	// pNum의 메모리 시작 주소를  ppNum이 가리키도록 합니다.
	int** ppNum = &pNum;
	int* pNum2 = &pNum;
	
	printf("&num =%p \n", &num);
	printf("pNum =%p \n", pNum);
	printf("ppNum =%p \n", ppNum);
	printf("pNum2 = %p \n", pNum2);
}