#include <stdio.h>

// ���� ������?
// �Լ� �ۿ� ����Ǹ�, �������� ��� ���������� 
// �ٸ��� �������� ���� ������ ���մϴ�.
// ���� ������ ��� ������ ���α׷� ��ü
// �׷��Ƿ� � �Լ��� ������ ���� ������ �����Ͽ�
// �����͸� ����� �� �ֽ��ϴ�.
// ���α׷��� ����� ��, data �޸� ������ �Ҵ�Ǹ�
// ���α׷��� ����� ������ �����մϴ�.

// ���� ������ ����
int globalVariable;
// ���� ������ �ʱ�ȭ���� �ʾƵ� 0���� �ʱ�ȭ

// ���������� value ���� ���ϴ� �Լ�
void Add(int value);

void main()
{
	printf("globalVariable = %d \n", globalVariable);

	Add(10);
	printf("globalVariable = %d \n", globalVariable);
}

void Add(int value)
{
	globalVariable += value;
}
