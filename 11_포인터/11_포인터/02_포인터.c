#include <stdio.h>

void main()
{
	int n = 10;
	int m = 20;

	int* p = &n;

	// n�� �����ּҸ� p�� �Ҵ�
	int* p = &n;



	//������ ���� p�� �̿��Ͽ� n�� �������Ͽ� n�� ���� 15�� ����.

	*p += 15;


	//m�� �����ּҸ� p�� �Ҵ�
	p = &m;

	
	printf("*p = %d\n", *p);
	printf("*n = %d\n", n);
	printf("*m = %d\n", n);
