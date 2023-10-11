#include<iostream>
using namespace std;

// 스코프 연산자를 사용하면 전역 변수와 지역 변수의 이름이 같을 경우에
// 지역 변수가 선언된 공간 내에서 전역 변수에 접근할 수 있음

int variable = 10;



void main()
{
	int variable = 20;   //main에서 변수이름이 같은 변수를 호출할때는 지역변수가 우선시됨.

	cout << "전역변수 :" << ::variable << endl;


}