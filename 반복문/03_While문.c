#include <stdio.h>

// while���� �̿��ؼ� 1���� 100������ �հ踦 ���غ�����.
// ��� : 5050

void main()
{
	// �հ踦 ������ ����
	int result = 0;

	// 1���� 100���� ������ų ����
	int count = 1;

	// while (count <= 100) result = result + count++;
	// +=, -=, *=, /= <- ���� ���� ������
	// ���� ���� ���� ���� Ư�� ���� ������ ��, ���� ���� ����
	while (count <= 100) result += count++;

	printf("1���� 100���� �հ�� %d \n", result);
}