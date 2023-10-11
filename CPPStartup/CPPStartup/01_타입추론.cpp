#include <iostream>
using namespace std;

// c 언어에서는 auto 키워드는 자동 변수 (지역 변수)임을 명시하는 키워드,
// 아무도 사용안함.
// 그러므로 c++ 11버전에서는 auto예약어의 기능이 "타입 추론"으로 변경
// 또, c++ 14버전에서는 함수의 반환 형식을 auto로 추론할 수 있도록 기능이 확장 

// auto 
// auto를 사용한다면 초기값의 타입에 맞춰, 선언하는 인스턴스의 타입이 자동으로 결정
// 이러한 auto는 런타임 중이 아닌, 컴파일 ㅅ사입이 정해지기 때문에 
// auto 형식으로 변수를 선언해도 성능의 저하가 없다. 
// 하지만 초기값으로 타입을 결정하기 때문에, 선언 시 무조건 초기화를 해야 함

// 함수 반환 형식에 auto를 사용하는 경우, 함수 선언부와 구현부를 분리할 수 없음 

auto GetNumber(int a, int b)
{
	return a + b;
}

void main()
{
	int a = 10;
	auto b = 10;
	auto c = '안녕';  //자동으로 리터럴타입을 추론한다.


	cout << "a의 값은" << a << endl;
	cout << "GetNumber" << GetNumber(1,3) << endl;
}