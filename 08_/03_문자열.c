#include <stdio.h>

void main()
{
	char myString[256];

	printf("문자열을 입력해주세요.\n");
	scanf("%s", myString);

	// &가 변수의 주소값을 반환
	// 배열 변수명은 배열의 첫번째 원소의 주소
	// -> 배열 변수명 자체가 주소이므로 &를 작성할 필요가 없음

	// scanf는 공백이나 개행문자(\n)를 만난다면 나머지는
	// 버리기 때문에 정상적인 문자열 입력을 사용할 수 없습니다. 
	printf("입력한 값은 %s \n", myString);

	// gets() 를 이용
	// 문자열 입력 시, 공백 사용 가능
	
	// 주의점
	// scanf 를 사용한 후, gets 를 사용할 경우
	// scanf에서 개행문자를 처리하지 않기 때문에
	// 처리되지 않은 개행문자가 gets에 입력값으로 전달 됨
	//  -> 사용 종료 처리 

	// 1. 처음부터 scanf를 사용하지 않음
	// 2. gets 을 통해서 원하는 데이터를 입력받기 전에
	//    위에 gets 을 한 번 더 호출하여, 개행문자를 처리

	char myString2[256];
	// scanf 에서 발생한 개행문자 처리
	gets(myString2);
	// 실제 원하는 데이터 입력 처리
	gets(myString2);

	printf("myString2는 %s \n", myString2);
}