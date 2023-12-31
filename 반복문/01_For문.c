#include <stdio.h>

// for 문이란?
// 초기식, 조건식, 증감식으로 이루어진 반복문
// while 문보다 반복을 더 정교하게 제어할 수 있음

// 초기식 : 반복을 실행하기 전에 처음 한 번만 실행되는 코드
//			for 문에서 사용할 변수가 있다면,
//			이 곳에서 선언 및 초기화를 할 수 있음

// 조건식 : 반복을 계속 수행할 것인지를 결정하는 식
//			당연히, 조건식의 결과가 false라면 반복을 중단

// 증감식 : 매 반복이 끝날 때마다, 한 번 실행
//			이 곳에서 주로 조건식에 사용되는 변수의 값을 조정

// for (초기식; 조건식; 증감식) 조건식의 결과가 참일 경우 반복시킬 코드;


void main()
{
	for (int i = 1; i <= 10; ++i)
		printf("%d \n", i);

	// 필요하다면 특정 식을 생략할 수 있음
	// for (; ; ) printf("반복\n");
}