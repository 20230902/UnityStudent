#include <stdio.h>

void main()
{
	// 3���� �迭 ����
	int myArray[2][3][4];

	// 3���� �迭 ����
	int zSize = sizeof(myArray) / sizeof(myArray[0]);

	// 2���� �迭 ����
	int ySize = sizeof(myArray[0]) / sizeof(myArray[0][0]);

	// 1���� �迭 ����
	int xSize = sizeof(myArray[0][0]) / sizeof(myArray[0][0][0]);

	printf("3���� ���� : %d \n", zSize);
	printf("2���� ���� : %d \n", ySize);
	printf("1���� ���� : %d \n", xSize);

	int count = 1;

	for (int i = 0; i < zSize; ++i)
	{
		for (int j = 0; j < ySize; ++j)
		{
			for (int k = 0; k < xSize; ++k)
			{
				myArray[i][j][k] = count++;
				printf("%d  ", myArray[i][j][k]);
			}
			printf("	");
		}
		printf("\n");
	}
}