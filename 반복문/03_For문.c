#include <stdio.h>

void main()
{
	// for ������ �� ���
	
	// for�� ��ø�ؼ� - 2�� for��
	// for�� �ȿ��� printf()�� ��� ����

	// *
	// **
	// ***
	// ****
	// *****

	// y��
	for (int i = 0; i < 5; ++i)
	{
		// x��
		for (int j = 0; j <= i; ++j)
		{
			printf("*");
		}

		printf("\n");
	}

	// *****
	// ****
	// ***
	// **
	// *

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5 - i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}