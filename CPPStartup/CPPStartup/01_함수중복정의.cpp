#include<iostream>	
using namespace std;

// C++ 에서 같은 이름의 함수를 여러개 작성

// 함수의 "이름"과 "매개변수 타입"을 이용하여 호출 대상을 찾습니다.
// 같은 이름의 함수를 여러개 작성하려면 
// 매개변수를 다르게 해야함
// -> 함수 오버로딩
// 오버 로딩 : 동일한 이름의 함수를 중복 정의하는 것
//int Print(int num);
void Print(int num);

void Print(double num);
// 오버로딩 조건
// 이름은 같아야 하며, 선언된 함수들과 매개변수가 달라야 함
// 매개변수는 같은데, 반환 타입이 다른 함수는 오버로딩 불가능
// ㄴ 오버로딩은 매개변수로 구분을 짓기때문에 반환타입으로는 오버로딩이 불가능하다.



void main()
{
	Print(3.14);  //매개변수의 리터럴 타입이 무엇인가에 따라 호출되는 함수가 다르다. 
	Print(10);
}

void Print(int num)
{
	cout << "Print(int)Called! " << num << endl;
}
void Print(double num)
{
	cout << "Print(double)Called!" << num << endl;
}