#include <iostream>	

void main()
{
	// c++ 에서는 bool 이라는 자료형을 지원
	// 진리값을 담는 데이터 타입
	// 1바이트

	bool myBoolean = true;     // 0과1이 아닌 true false를 담을 수 있다.

	std::cout << "myBoolean의 값은" << myBoolean << std::endl;
	
      myBoolean = false;
	std::cout << "myBoolean의 값은" << myBoolean << std::endl;
}