#include <iostream>



// ���� �����̽���?
// Ư���� ������ �̸��� �ٿ��ֱ� ���� ������ ��� 
// ��� �̸��� �Ҽӵ� ������ �ǹ�
// ���� �����̽��� �̿��ϸ�
// ����, �Լ�, ����ü ���� �Ȱ��� �̸�����
// �ٸ� �������� �и��Ͽ� ������ �� ����
// ��쿡 ����, namespace ���� �� �ٸ� namespace�� ��ø��ų �� ����

// �������̼� �۾��� ���
// �� ��� �Ǵ� ��Ʈ���� ������ �۾��� �ϰԵ�
// 

namespace Add    //Add�� ������ �ڵ���̴�.
{
	int Calculate(int a, int b)
	{
		return a + b;
	}
}

namespace Sub
{
	int Calculate(int a, int b)  // ������ �Լ���, ������ �Լ� Ÿ���� c������ �Ұ��� �Ͽ�����
								// namespace�� ���� �����ϴ�.
	{
		return a - b;
	}
}

namespace MyNamespace
{
	namespace Variable
	{
		namespace Global
		{
			int num1;
			int num2;
		}
	}
}

// �ڵ� ���� ���� ���� ���Ǵ� ���ӽ����̽��� ���� ���
// using Ű���带 �̿��Ͽ�, ���ӽ����̽��� ������ ������� ���� �� ����.
// 
using namespace std; //std��� namespace�� �ۼ����� �ʾƵ� �ٷ� ȣ�� �Ͽ� ��� �� �� ����.

void main()
{
	cout << "���� 1�� �Է����ּ��� :";

	// ���Ѵٸ� ���ӽ����̽� ��Ī�� ������ �� ����.
	namespace myGlobal = MyNamespace::Variable::Global;

	cin >> MyNamespace::Variable::Global::num1;
	cin >> myGlobal::num2;
	cout << endl;

	cout << "���ڸ� �Է��ϼ��� . :";
	cin >> myGlobal::num2;
	cout << endl;

	cout << "� ������ �Ͻðڽ��ϱ� ? " <<endl;
	cout << "1.���� / 2. ����" << endl;

	int calType;
	cin >> calType;
	cout << endl;

	if (calType == 1)
	{
		cout << Add::Calculate(myGlobal::num1, myGlobal::num2);
	}
	if (calType == 2)
	{
		cout << Sub::Calculate(MyNamespace::Variable::Global::num1, myGlobal::num2);
	}
}