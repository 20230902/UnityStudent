#include <stdio.h>
#include<stdlib.h>

void main()
{
	int size = 0;
	int* pArray = NULL;

	while (1)
	{
		if (size != 0)
			printf("입력한 수 : ");   
		for (int i = 0; i < size; ++i)
			printf("%d", pArray[i]);
		printf("\n");
	}
	printf("정수 입력 (종료 : -1) : ");
	int input;
	scanf("%d", &input);

	if (input == -1)
		break;
	else
	{
		++size;
		// pArray가 유효하다면, 메모리 재할당
		// 아니라면 메모리 최초 할당


		pArray = pArray ?
			(int*)realloc(pArray, size * sizeof(int)) : (int*)malloc(sizeof(int));
		// pArray가 유효하다면 pArray = pArray ? realloc반환 그렇지 않다면 malloc반환
		// void* realloc(p,size) : p가 가리키는 메모리 영역의 크기를
		// size 바이트의 크기로 재할당
		// 재할당 전에 입력한 값을 유지되며, 새로 추가된 메모리에는
		// 쓰레기 값이 저장되어 있습니다.
		// 만약 재할당을 통해, 사이즈를 줄인다면 입력된 데이터는 사라질 수 있음
		// realloc()을 사용한다면, 재할당 과정에서 메모리의 위치가 바뀔 수 있으므로, 항상 realloc 함수의
		// 반환 값을 포인터 변수로 다시 받아 사용하는 것이 좋습니다.

		// realloc이 아닌, malloc이나 calloc으로 메모리 재할당을 하려면
		// free를 통해 기존 메모리를 해제 후, 재할당을 진행해야 함

		// 입력한 값을 할당한 메모리에 대입
		*(pArray + (size - 1)) = input;
		}
	}
free(parray);
pArray=
