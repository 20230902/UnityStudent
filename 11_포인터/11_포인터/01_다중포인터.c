#include <stdio.h>

/// 
///	������ ������ �ּҸ� ������ �� �ֽ��ϴ�.
/// ������ ������ �ּҴ� �Ϲ� ������ ������
/// ������ �� ����
/// -> ���� ������ ������ �̿��ؼ� ���� 
///

void main()
{
	int num = 10;
	
	// num�� �޸� ���� �ּҸ� pNum�� ����Ű���� �մϴ�. 
	int* pNum = &num;

	// pNum�� �޸� ���� �ּҸ�  ppNum�� ����Ű���� �մϴ�.
	int** ppNum = &pNum;
	int* pNum2 = &pNum;
	
	printf("&num =%p \n", &num);
	printf("pNum =%p \n", pNum);
	printf("ppNum =%p \n", ppNum);
	printf("pNum2 = %p \n", pNum2);
}