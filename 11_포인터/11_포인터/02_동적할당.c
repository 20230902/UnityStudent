#include<stdio.h>
#include<stdlib.h>

// 배열의 원소를 초기화하는 함수선언
void  IntArray(int*arr,int length, int initValue);

// 배열의 모든 원소를 출력하는 함수
void PrintArray(int*arr,int length);
//길이가 10인 int형 배열
int* pArr = (int*)malloc(sizeof(int) * 10);

initArray(pArr, 10, 0);

PrintArray(pArrm, 10);

//임의로 원소값 변경
// 40바이트의 메모리를 할당 시, 연속된 공간에 할당하므로
// 연속된 주소를 가지게 됨, -> 결과, 배열처럼 사용할 수 있음.
void main()
{
	InitArray(
}

void IntArray(int* arr, int length, int initValue)
{
	for (int i = 0; i < length, int length, int initValue)
		*(arr + i) = initValue;
}
void PrintArray(int* arr, int length)
{
	for (int i = 0; i < length; ++i)
		printf("Arr[%d] = %d\n", i, arr[i]);
}
