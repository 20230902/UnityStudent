#include <stdio.h>
#include <stdlib.h>

// ���� ������ ������ �̿��ؼ�, 2���� �迭�� ���� �Ҵ�




void main()
{
	int** arr = NULL;

	int xSize = 0;
	int ySize = 0;

	printf("x size ? \n");
	scanf("%d", &xSize);
	printf("y size ? \n");
	scanf("%d", &ySize);

	// ���� �����͸� �̿��� ���� �Ҵ� ����
	// ���� �������� ���� �������� ���������� �Ҵ�

	// 2���� �Ҵ�
	arr = (int**)calloc(ySize, sizeof(int*));

	// 1���� �Ҵ�
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
	// �޸� ���� ����
	// �Ҵ� ������ �ݴ�� ����
	
	// 1���� �迭 �޸� ����
	for (int i = 0; i < ySize; ++i)
	{
		free(arr[i]);
		arr[i] = NULL;
	}

	// 2���� �迭 �޸� ����
	free(arr);
	arr = NULL;
}