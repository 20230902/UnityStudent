#include <stdio.h>

// �Լ� �����Ͷ�?
// �Լ��� �̸��� �Լ��� �ִ� �޸��� �ּ��̴� �׷��Ƿ� �� �Լ� �̸��� �״��
// �����Ϳ� �����ϸ� �Լ��� �޸𸮸� �� �� �ִ�.

void PrintHello();

void main()
{
	// �Լ� �����͸� ����
	// ����ų �Լ��� ��ȯ Ÿ��	(*�Լ� ������ �̸�) (����ų �Լ��� �Ű� ���� Ÿ��) = ����ų �Լ��� �̸�;
	void(*myFuncPointer)(void) = *PrintHello;

	//�Լ� �����Ͱ� ����Ű�� �Լ��� ȣ��
	myFuncPointer();
}

 void PrintHello()
{
	printf("Hello ! \n");
}
