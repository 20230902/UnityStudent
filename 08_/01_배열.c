#include <stdio.h>

// 배열이란?
// 동일한 타입의 데이터를 모아놓은 데이터 집합
// 복수의 동일한 타입의 변수가 필요할 경우 <- 유용하게 사용
// 만약 10개의 int형 변수가 필요하다면,
// 1개의 int형 배열을 선언하여 해결

void main()
{
	// int형 데이터 5개를 담을 수 있는 배열을 선언
	int myArray[5];
	// 배열의 요소들을 엘리먼트라고 하며,
	// 각각의 요소들을 구분하기 위한 번호를 인덱스라고 합니다.
	// -> 배열의 인덱스는 0번부터 시작
	// 특정 요소에 접근 시 "배열식별자[인덱스]"로 접근

	myArray[0] = 10;
	myArray[1] = 20;
	myArray[2] = 30;
	myArray[3] = 40;
	myArray[4] = 50;
	// 만약 배열 생성한 후, 원소에 어떠한 값을 할당하지 않는다면 쓰레기 값이 들어가게 됩니다.
	// 선언과 동시에 초기화하는 것이 좋습니다.

	printf("myArray[0]는 %d \n", myArray[0]);
	printf("myArray[1]는 %d \n", myArray[1]);
	printf("myArray[2]는 %d \n", myArray[2]);
	printf("myArray[3]는 %d \n", myArray[3]);
	printf("myArray[4]는 %d \n", myArray[4]);

	// 배열의 크기 확인 (데이터 타입 크기 * 배열 길이)
	printf("myArray의 사이즈는 %d \n", sizeof(myArray));

	// 배열을 선언하며, 원소의 값을 초기화하는 방법
	//  -> 선언과 동시에만 사용 가능, 이후에는 불가
	char myArray2[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	printf("myArray2[0]는 %c \n", myArray2[0]);
	printf("myArray2[1]는 %c \n", myArray2[1]);
	printf("myArray2[2]는 %c \n", myArray2[2]);
	printf("myArray2[3]는 %c \n", myArray2[3]);
	printf("myArray2[4]는 %c \n", myArray2[4]);
	printf("myArray2[5]는 %c \n", myArray2[5]);

	// 문자 형식의 배열을 "문자열" 이라고 함
	// 문자열 항상 "NULL 문자 (\0)"로 문자열의 끝을 구분하므로
	// 항상 마지막 원소가 \0가 들어가야 합니다.
	// -> 널문자를 마지막 원소에 넣지 않을 시,
	//	  문자 데이터로만 사용한다면 문제가 없지만,
	//	  문자열 데이터로 이용 시에는 데이터가 깨짐
	printf("myArray2는 %s \n", myArray2);

	// 문자 배열의 경우 아래와 같이 초기화 가능
	char myArray3[] = "안녕하세요?";
	// 이렇게 작성한 경우, 마지막에 \0 삽입
	printf("myArray3 = %s \n", myArray3);

	int myArray4[] = { 1, 2, 3 };
	// 원소의 개수를 생략하며, 할당시킨 원소 개수만큼
	// 배열의 길이가 정해짐
}