#include<stdio.h>
#include<stdlib.h>

// �迭�� ���Ҹ� �ʱ�ȭ�ϴ� �Լ�����
void  IntArray(int*arr,int length, int initValue);

// �迭�� ��� ���Ҹ� ����ϴ� �Լ�
void PrintArray(int*arr,int length);
//���̰� 10�� int�� �迭
int* pArr = (int*)malloc(sizeof(int) * 10);

initArray(pArr, 10, 0);

PrintArray(pArrm, 10);

//���Ƿ� ���Ұ� ����
// 40����Ʈ�� �޸𸮸� �Ҵ� ��, ���ӵ� ������ �Ҵ��ϹǷ�
// ���ӵ� �ּҸ� ������ ��, -> ���, �迭ó�� ����� �� ����.
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
