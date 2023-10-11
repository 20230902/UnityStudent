#include <iostream>



// 네임 스페이스란?
// 특정한 영역에 이름을 붙여주기 위한 문법적 요소 
// 어떠한 이름이 소속된 공간을 의미
// 네임 스페이스를 이용하면
// 변수, 함수, 구조체 등을 똑같은 이름으로
// 다른 공간으로 분리하여 선언할 수 있음
// 경우에 따라, namespace 내에 또 다른 namespace를 중첩시킬 수 있음

// 여러명이서 작업할 경우
// 각 기능 또는 파트별로 나눠서 작업을 하게됨
// 

namespace Add    //Add의 공간은 코드블럭이다.
{
	int Calculate(int a, int b)
	{
		return a + b;
	}
}

namespace Sub
{
	int Calculate(int a, int b)  // 동일한 함수명, 동일한 함수 타입은 c언어에서는 불가능 하였지만
								// namespace를 통해 가능하다.
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

// 코드 파일 내에 자주 사용되는 네임스페이스가 있을 경우
// using 키워드를 이용하여, 네임스페이스를 별도로 명시하지 않을 수 있음.
// 
using namespace std; //std라는 namespace를 작성하지 않아도 바로 호출 하여 사용 할 수 있음.

void main()
{
	cout << "숫자 1을 입력해주세요 :";

	// 원한다면 네임스페이스 별칭을 지정할 수 있음.
	namespace myGlobal = MyNamespace::Variable::Global;

	cin >> MyNamespace::Variable::Global::num1;
	cin >> myGlobal::num2;
	cout << endl;

	cout << "숫자를 입력하세요 . :";
	cin >> myGlobal::num2;
	cout << endl;

	cout << "어떤 연산을 하시겠습니까 ? " <<endl;
	cout << "1.덧셈 / 2. 뺄셈" << endl;

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