#include <stdio.h>
#include <string.h>

void main()
{
	// �Ʒ��� ���� �ʱ�ȭ ����
	int myArray[5] = { 1, 2, 3, 4, 5 };

	printf("myArray �ּ� : %x \n", myArray);
	for (int i = 0; i < 5; ++i)
		printf("myArray[%d] = %x \n", i, &myArray[i]);

	// �Ʒ��� ���� ����� �Ұ���
	int myArray2[5];
	// myArray2 = { 1, 2, 3, 4, 5 };

	// �迭���� ������ ����Դϴ�.
	// ������ : �ּҸ� ������ ����
	// ������ ��� : ������ �ּҰ��� ������ �� ���� ����

	// myArray2[0] �� �޸� �ּҰ� 0x0000 �� ���
	// myArray2�� �迭�� ù��° ������ �ּ� 0x0000���� ������
	// ��� = { 1, 2, 3, 4, 5 }; <- �̹� ���� �Ҵ�� ����� ���� �����Ϸ��� ����

	// �Ʒ��� ���� ����� ���ÿ� �ʱ�ȭ ����
	char myString[] = "Hello World";
	// �Ʒ� ���� ����� �Ұ���
	// myString = "�ȳ�";

	char myString2[256];
	// strcpy(char* dest, const char* src)
	// dest : ���ڿ��� ������� ������ �迭
	// src : ������ ���� ���ڿ�
	strcpy(myString2, myString);

	printf("myString2�� %s \n", myString2);
}