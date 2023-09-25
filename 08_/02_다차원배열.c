#include <stdio.h>

void main()
{
	// 3차원 배열 선언
	int myArray[2][3][4];

	// 3차원 배열 길이
	int zSize = sizeof(myArray) / sizeof(myArray[0]);

	// 2차원 배열 길이
	int ySize = sizeof(myArray[0]) / sizeof(myArray[0][0]);

	// 1차원 배열 길이
	int xSize = sizeof(myArray[0][0]) / sizeof(myArray[0][0][0]);

	printf("3차원 길이 : %d \n", zSize);
	printf("2차원 길이 : %d \n", ySize);
	printf("1차원 길이 : %d \n", xSize);

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