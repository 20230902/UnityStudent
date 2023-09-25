#include <stdio.h>
#include <string.h>
// 같은 타입의 변수가 많이 필요하다면 배열을 사용하지만,
// 다른 타입의 변수가 많이 필요할 경우 -> 구조체 사용

// 구조체란?
// 다양한 타입을 하나로 묶을 수 있는 복합 데이터 형식
// 복합 데이터 형식 : 기본 데이터 형식을 조합하여 만들어낸
//					  데이터 형식을 의미
//					  -> 구조체, 배열
// struct

// 구조체 선언 방법
// struct 구조체이름
// {
//		// 구조체 멤버, 필드
//		int a;
//		float b;
// }

// 구조체 Cat 을 선언
struct Cat
{
	char name[256];
	int age;

	// C언어의 구조체에서는 멤버 변수에 대한 선언만 가능
	// 멤버에 대한 값 초기화, 함수 선언이 불가능
};

void main()
{
	// 구조체 형식의 변수를 선언
	struct Cat myCat;

	// 구조체 멤버에 접근
	// 변수 식별자.멤버
	strcpy(myCat.name, "냥이");

	printf("나이 입력 : ");
	scanf("%d", &myCat.age);

	printf("고양이의 이름은 %s \n", myCat.name);
	printf("고양이의 나이는 %d \n", myCat.age);
}