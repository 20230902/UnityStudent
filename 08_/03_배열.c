#include <stdio.h>

void main()
{
	int myArray[] = { 1, 2, 3 };

	// �迭�� ������ �Ѿ ����Ѵٸ�?
	for (int i = 0; i < 4; ++i)
	{
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}

	// ���� ����, ���ǽ��� ������ ���ͷ� ������ �ۼ��� ���
	// ������� �Ǽ��� ����, �迭�� ������ ��� �� ����

	int length = sizeof(myArray) / sizeof(myArray[0]);

	for (int i = 0; i < length; ++i)
	{
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}
}