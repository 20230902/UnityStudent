#include <stdio.h>

// ���̰� 30�� int�� �迭�� ������ ��,
// �� ���ҿ� 31���� 60������ ���� �Է��� ��, ���

void main()
{
	int myArray[30];

	int length = sizeof(myArray) / sizeof(int);

	for (int i = 0; i < length; ++i)
	{
		myArray[i] = 31 + i;
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}
}