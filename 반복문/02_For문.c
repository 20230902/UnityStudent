#include <stdio.h>

void main()
{
	// for���� �̿��ؼ�, 
	// 1���� 20������ �հ踦 ���� ��, ������ּ���.

	// �հ踦 ������ ����
	int result = 0;

	for (int i = 1; i < 21; ++i)
	{
		result += i;
	}

	printf("�հ� : %d \n", result);
}