
// ö���� ���������� �Է¹ް�,
// ����� ���
// ���� ���� 0~100 ������ ����

// �� �� - E
// 60�� �̻� - D
// 70�� �̻� - C
// 80�� �̻� - B
// 90�� �̻� - A

#include <stdio.h>

void main()
{
	int score;

	printf("���� : ");
	scanf("%d", &score);

	// �Է� �� ������ ���� ����ó��
	if (score >= 0 && score <= 100)
	{
		if (score >= 90) printf("��� A");
		else if (score >= 80) printf("��� B");
		else if (score >= 70) printf("��� C");
		else if (score >= 60) printf("��� D");
		else printf("��� E");
	}
	else
	{
		printf("�߸��� �� �Դϴ�.\n");
	}
}