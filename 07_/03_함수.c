#include <stdio.h>

// 함수에 사용할 데이터를 매개변수를 통해
// 전달받을 수 있습니다.

// 매개변수란?
// 함수에서 사용할 데이터를 전달받는 일을 함
// 함수 외부에서 사용될 수 없습니다.

// 매개변수 birthYear에 전달된 데이터를 이용하여
// 나이를 출력함는 함수를 선언
void PrintAge(int birthYear);

void main()
{
	int year;
	printf("출생년도를 입력해주세요. \n");
	scanf("%d", &year);

	// year 변수의 데이터를 인자로
	// PrintAge 매개변수에 전달
	PrintAge(year);
}

void PrintAge(int birthYear)
{
	int age = 2023 - birthYear + 1;
	printf("당신의 나이는 %d 살 \n", age);
}