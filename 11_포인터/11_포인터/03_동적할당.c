#include <stdio.h>
#include <stdlib.h>

void main()
{
	printf("몇 개의 정수를 출력할까요?");
	int printCount;
	scanf("%d", printCount);

	printf("숫자 몇 부터 출력시킬까요?");
	int initNumber;
	scanf("%d", &initNumber);


	// count * size 만큼 메모리 할당 
	int* pArray = (int*)calloc(printCount, sizeof(int));

	// calloc(count, size) : count * size 만큼 메모리 동적  할당 
	// 0으로 초기화 시킨 후 메모리의 시작 주소를 void* 형식으로 반환
	// 0으로 초기화 되므로 별도로 초기화할 필요 없음

	for (int i = 0; i < printCount; ++i)
	{
		pArray[i] = initNumber + i;

		printf("array[%d] = %d\n", i, pArray[i]);
	}
	free(pArray);   //메모리 해제
	pArray = NULL;
}