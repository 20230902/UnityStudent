#include <stdio.h>

// ���޹��� 2���� �����͸� ���Ͽ�
// ��ȯ�ϴ� �Լ�
int Plus(int number1, int number2);

void main()
{
	int a, b;

	printf("a �Է� : ");
	scanf("%d", &a);

	printf("b �Է� : ");
	scanf("%d", &b);

	printf("%d + %d = %d \n", a, b, Plus(a, b));
}

int Plus(int number1, int number2)
{
	return number1 + number2;
}
