#include <stdio.h>

/// 
///	������ ������ �ּҸ� ������ �� �ֽ��ϴ�.
/// ������ ������ �ּҴ� �Ϲ� ������ ������
/// ������ �� ����
/// -> ���� ������ ������ �̿��ؼ� ���� 
///

void Change(int* a, int* b);
void Change2(int** a, int* b);
void main()
{
	int num = 10;
	int num2 = 20;
	
	// num�� �޸� ���� �ּҸ� pNum�� ����Ű���� �մϴ�. 
	int* pNum = &num;
	int* pNum3 = &num2;

	


	// pNum�� �޸� ���� �ּҸ�  ppNum�� ����Ű���� �մϴ�.
	int** ppNum = &pNum;
	int* pNum2 = &pNum;
	// ������ �����ڸ� �̿��ϸ�, num�� ���� ���� ���� ����

	printf("*ppNum = %p \n", *ppNum);
	printf("**ppNum = %d \n", **ppNum);
	Change2(ppNum, pNum3);
	



	printf("&num =%p \n", &num);
	printf("num2 = %p \n", &num2);
	printf("pNum �� �ּ� = %p \n", &pNum);
	printf("pNum�� ����Ű�� ��� =%p \n", pNum);
	printf("ppNum =%p �� ����Ű�� ��� \n", ppNum);
	printf("pNum2 = %p�� ����Ű�� ��� \n", pNum2);
	printf("pNum3 = %p�� ����Ű�� ��� \n", pNum3);
	printf("pNum2 = %p�� ����Ű�� ��� \n", *pNum2);  //�������� ���� num�� �ּҰ��� ���� �� ������ num�� �������� ������ �� ����.
}

void Change(int* a, int* b)
{
	a = b;
}

void Change2(int** a, int* b)
{
	*a = b;

}
