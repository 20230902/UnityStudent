#include <stdio.h>

// ���� �� ���α׷�
// int�� ���� kor, eng, math ��
// ����, ����, ���� ������ ����� �Է¹ް�
// [������ ����], [������ ���], [���� �� �ְ�����]��
// ��ȯ�ϴ� �Լ��� �����Ͽ�, 
// �Ʒ��� ���� �����ϴ� ���α׷��� �ۼ�

// input
// ���� : 90
// ���� : 80
// ���� : 85

// output
// ���� : 255
// ��� : 85.00
// �ְ����� : 90

int GetSum(int a, int b, int c);
double GetAvg(int a, int b, int c);
int	GetMax(int a, int b, int c);

void main()
{
	int kor, eng, math;

	printf("���� ���� : ");
	scanf("%d", &kor);

	printf("���� ���� : ");
	scanf("%d", &eng);

	printf("���� ���� : ");
	scanf("%d", &math);

	printf("���� : %d \n", GetSum(kor, eng, math));
	printf("��� : %.2lf \n", GetAvg(kor, eng, math));
	printf("�ְ� ���� : %d \n", GetMax(kor, eng, math));
}

int GetSum(int a, int b, int c)
{
	return a + b + c;
}

double GetAvg(int a, int b, int c)
{
	return (double)(a + b + c) / 3;
}

int GetMax(int a, int b, int c)
{
	int max = a;
	max = (max > b) ? max : b;
	max = (max > c) ? max : c;

	return max;
}
