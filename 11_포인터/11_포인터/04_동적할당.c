#include <stdio.h>
#include<stdlib.h>

void main()
{
	int size = 0;
	int* pArray = NULL;

	while (1)
	{
		if (size != 0)
			printf("�Է��� �� : ");   
		for (int i = 0; i < size; ++i)
			printf("%d", pArray[i]);
		printf("\n");
	}
	printf("���� �Է� (���� : -1) : ");
	int input;
	scanf("%d", &input);

	if (input == -1)
		break;
	else
	{
		++size;
		// pArray�� ��ȿ�ϴٸ�, �޸� ���Ҵ�
		// �ƴ϶�� �޸� ���� �Ҵ�


		pArray = pArray ?
			(int*)realloc(pArray, size * sizeof(int)) : (int*)malloc(sizeof(int));
		// pArray�� ��ȿ�ϴٸ� pArray = pArray ? realloc��ȯ �׷��� �ʴٸ� malloc��ȯ
		// void* realloc(p,size) : p�� ����Ű�� �޸� ������ ũ�⸦
		// size ����Ʈ�� ũ��� ���Ҵ�
		// ���Ҵ� ���� �Է��� ���� �����Ǹ�, ���� �߰��� �޸𸮿���
		// ������ ���� ����Ǿ� �ֽ��ϴ�.
		// ���� ���Ҵ��� ����, ����� ���δٸ� �Էµ� �����ʹ� ����� �� ����
		// realloc()�� ����Ѵٸ�, ���Ҵ� �������� �޸��� ��ġ�� �ٲ� �� �����Ƿ�, �׻� realloc �Լ���
		// ��ȯ ���� ������ ������ �ٽ� �޾� ����ϴ� ���� �����ϴ�.

		// realloc�� �ƴ�, malloc�̳� calloc���� �޸� ���Ҵ��� �Ϸ���
		// free�� ���� ���� �޸𸮸� ���� ��, ���Ҵ��� �����ؾ� ��

		// �Է��� ���� �Ҵ��� �޸𸮿� ����
		*(pArray + (size - 1)) = input;
		}
	}
free(parray);
pArray=
