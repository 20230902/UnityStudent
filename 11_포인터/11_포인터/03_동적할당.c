#include <stdio.h>
#include <stdlib.h>

void main()
{
	printf("�� ���� ������ ����ұ��?");
	int printCount;
	scanf("%d", printCount);

	printf("���� �� ���� ��½�ų���?");
	int initNumber;
	scanf("%d", &initNumber);


	// count * size ��ŭ �޸� �Ҵ� 
	int* pArray = (int*)calloc(printCount, sizeof(int));

	// calloc(count, size) : count * size ��ŭ �޸� ����  �Ҵ� 
	// 0���� �ʱ�ȭ ��Ų �� �޸��� ���� �ּҸ� void* �������� ��ȯ
	// 0���� �ʱ�ȭ �ǹǷ� ������ �ʱ�ȭ�� �ʿ� ����

	for (int i = 0; i < printCount; ++i)
	{
		pArray[i] = initNumber + i;

		printf("array[%d] = %d\n", i, pArray[i]);
	}
	free(pArray);   //�޸� ����
	pArray = NULL;
}