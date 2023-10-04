#include <stdio.h>
#include <stdlib.h>

// 이중 포인터 변수를 이용해서, 2차원 배열을 동적 할당




void main()
{
	int** arr = NULL;

	int xSize = 0;
	int ySize = 0;

	printf("x size ? \n");
	scanf("%d", &xSize);
	printf("y size ? \n");
	scanf("%d", &ySize);

	// 이중 포인터를 이용한 동적 할당 순서
	// 상위 차원부터 하위 차원으로 순차적으로 할당

	// 2차원 할당
	arr = (int**)calloc(ySize, sizeof(int*));

	// 1차원 할당
	for (int i = 0; i < ySize; ++i)
		*(arr + i)=(int*)calloc(xSize,sizeof(int));

	int count = 1;
	for (int i = 0; i < ySize; ++i)
	{
		for (int j = 0; j < xSize; ++j)
		{
			arr[i][j] = count++;
			
			printf("%d \n", arr[i][j]);
			printf("%d \n", *(*(arr + i) + j));
		}
	}
	// 메모리 해제 순서
	// 할당 순서와 반대로 진행
	
	// 1차원 배열 메모리 해제
	for (int i = 0; i < ySize; ++i)
	{
		free(arr[i]);
		arr[i] = NULL;
	}

	// 2차원 배열 메모리 해제
	free(arr);
	arr = NULL;
}