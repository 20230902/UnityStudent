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
// 리터럴 타입 , 반환 타입, 인자의 개수가 동일하므로 함수의 형태가 동일하다고 볼 수 있다.
void main()
{
	//typedef을 사용하여, 별도의 타입으로 사용 가능
	typedef double(*Calculate) (int, int);

	Calculate myCal = NULL;

	int a, b;
	int oper;

	printf("a 입력 :");
	scanf("%d", &a);

	printf("b 입력 :");
	scanf("%d", &b);

	printf("연산자 선택 \n");
	printf("1. 덧셈, 2. 뺄셈, 3. 곱셈, 4. 나눗셈 \n");
	scanf("%d", &oper);

	// 함수의 형태가 동일하므로, 서로 다른 함수지만
	//하나의 함수포인터에 담을 수 있음
	switch (oper)
	{
	case 1: myCal = Sum;break;
	case 2:myCal = Sub;	break;
	case 3:myCal = Mul;	break;
	case 4:myCal = Div; break; 
	}

	// 추가적인 작업이 있고 연산에 따라 호출이 달라질때
	// 호출한 함수는 위의 함수포인터에 담아둔 함수들
	// 이러한 경우, 추가적으로 oper 의 값을 검사한 후, 각각의 함수를 호출할
	// 필요없이 함수 포인터를 통해 바로 호출 가능함. 

	printf("결과 : %.2lf \n", myCal(a, b));
}