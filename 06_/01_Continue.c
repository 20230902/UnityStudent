#include <stdio.h>

void main()
{
	for (int i = 0; i < 5; ++i)
	{
		// i�� ���� 3�� ���, �������� �Ѿ
		if (i == 3) continue;

		printf("i�� %d \n", i);
	}
}