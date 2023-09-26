#include <stdio.h>

void main()
{
	int n = 10;
	int m = 20;

	int* p = &n;

	// n의 시작주소를 p에 할당
	int* p = &n;



	//포인터 변수 p를 이용하여 n에 역참조하여 n의 값에 15를 더함.

	*p += 15;


	//m의 시작주소를 p에 할당
	p = &m;

	
	printf("*p = %d\n", *p);
	printf("*n = %d\n", n);
	printf("*m = %d\n", n);
