#include<iostream>
using namespace std;

// ������ �����ڸ� ����ϸ� ���� ������ ���� ������ �̸��� ���� ��쿡
// ���� ������ ����� ���� ������ ���� ������ ������ �� ����

int variable = 10;



void main()
{
	int variable = 20;   //main���� �����̸��� ���� ������ ȣ���Ҷ��� ���������� �켱�õ�.

	cout << "�������� :" << ::variable << endl;


}