#include <stdio.h>

double Sum(int a, int b)
{
	return (double)a + b;
}

double Sub(int a, int b)
{
	return (double)a - b;
}

double Mul(int a, int b)
{
	return(double)a * b;
}

double Div(int a, int b)
{
	return (double)a / b;
}
// ���ͷ� Ÿ�� , ��ȯ Ÿ��, ������ ������ �����ϹǷ� �Լ��� ���°� �����ϴٰ� �� �� �ִ�.
void main()
{
	//typedef�� ����Ͽ�, ������ Ÿ������ ��� ����
	typedef double(*Calculate) (int, int);

	Calculate myCal = NULL;

	int a, b;
	int oper;

	printf("a �Է� :");
	scanf("%d", &a);

	printf("b �Է� :");
	scanf("%d", &b);

	printf("������ ���� \n");
	printf("1. ����, 2. ����, 3. ����, 4. ������ \n");
	scanf("%d", &oper);

	// �Լ��� ���°� �����ϹǷ�, ���� �ٸ� �Լ�����
	//�ϳ��� �Լ������Ϳ� ���� �� ����
	switch (oper)
	{
	case 1: myCal = Sum;break;
	case 2:myCal = Sub;	break;
	case 3:myCal = Mul;	break;
	case 4:myCal = Div; break; 
	}

	// �߰����� �۾��� �ְ� ���꿡 ���� ȣ���� �޶�����
	// ȣ���� �Լ��� ���� �Լ������Ϳ� ��Ƶ� �Լ���
	// �̷��� ���, �߰������� oper �� ���� �˻��� ��, ������ �Լ��� ȣ����
	// �ʿ���� �Լ� �����͸� ���� �ٷ� ȣ�� ������. 

	printf("��� : %.2lf \n", myCal(a, b));
}