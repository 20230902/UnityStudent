#include <stdio.h>

// int�� ������ 100���� ���� �� �ִ� �迭�� ������ ��,
// �� ���ҿ� 1���� 100������ ���� ���, ������ּ���.

void main()
{
	// ���̰� 100�� int�� �迭 ����
	int myArray[100];

	// �迭�� ���̸� ����
	int length = sizeof(myArray) / sizeof(int);
	
	// �Է�
	// ���� ���̸�ŭ �ݺ�
	for (int i = 0; i < length; ++i)
	{
		myArray[i] = i + 1;
	}

	// ���
	for (int i = 0; i < length; ++i)
	{
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}
}