#include <stdio.h>

// 유클리드 호제법
// 주어진 두 수의 최대공약수를 구하는 알고리즘

// 순서
// n 과 m을 사용자 입력
// 조건 -> m의 값이 0이라면, n은 최대 공약수
// 
// 조건 맞을 때까지 반복
// temp 에 n을 m으로 나눈, 나머지를 입력
// n 에는 m을, m에는 temp를 넣습니다.

void main()
{
	int n, m;
	int temp = 0;

	printf("N : \n");
	scanf("%d", &n);

	printf("M : \n");
	scanf("%d", &m);

	// 최대공약수를 구하지 못했다면, 반복
	while (m != 0)
	{
		// temp에 n을 m으로 나눈 나머지 대입
		temp = n % m;

		// n에는 m, m에는 temp
		n = m;
		m = temp;
	}

	printf("최대 공약수는 %d \n", n);
}


