#include <stdio.h>

// while문을 이용해서, 사용자가 원하는 구구단을 출력

// input
// 구구단 몇 단을 출력할까요?
// 5

// output
// 5 X 1 = 5
// 5 X 2 = 10
// 5 X 3 = 15
// ...
// 5 X 9 = 45

#include <stdio.h>

void main()
{
	// 몇 단을 출력할 것인지, 사용자가 입력한 값을 저장할 변수
	int number = 0;

	// number의 값이 1~9 사이의 값이, 아니라면 입력을 반복
	while (number < 1 || number > 9)
	{
		printf("몇 단을 출력할까요? ");
		scanf("%d", &number);
	}

	// 1부터 9(10)까지 증가할 변수
	int count = 1;

	while (count < 10)
	{
		printf("%d X %d = %d \n", number, count, (number * count));
		++count;
	}
}