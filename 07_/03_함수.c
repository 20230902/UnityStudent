#include <stdio.h>

// �Լ��� ����� �����͸� �Ű������� ����
// ���޹��� �� �ֽ��ϴ�.

// �Ű�������?
// �Լ����� ����� �����͸� ���޹޴� ���� ��
// �Լ� �ܺο��� ���� �� �����ϴ�.

// �Ű����� birthYear�� ���޵� �����͸� �̿��Ͽ�
// ���̸� ����Դ� �Լ��� ����
void PrintAge(int birthYear);

void main()
{
	int year;
	printf("����⵵�� �Է����ּ���. \n");
	scanf("%d", &year);

	// year ������ �����͸� ���ڷ�
	// PrintAge �Ű������� ����
	PrintAge(year);
}

void PrintAge(int birthYear)
{
	int age = 2023 - birthYear + 1;
	printf("����� ���̴� %d �� \n", age);
}