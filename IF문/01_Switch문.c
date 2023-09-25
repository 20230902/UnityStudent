#include <stdio.h>

// Switch문이란?
// 조건식의 결과가 가질 수 있는 다양한 경우를 한 번에 평가하고
// 프로그램의 흐름을 제어할 때 사용합니다.

// switch (결과를 검사할 값)
// {
//		case 상수1 :
//				값이 상수1이라면 실행할 코드;
//				break; (실행시키고자 하는 로직이 끝났음을 알림) 
//		case 상수2 :
//				값이 상수2이라면 실행할 코드;
//				break; (실행시키고자 하는 로직이 끝났음을 알림) 
//		default :  (위의 케이스가 모두 아닐 경우)
//				그 외의 경우에 실행할 코드;
//				break; 
// }

void main()
{
	int n = 2;

	// n의 값이 10, 20, 30인 경우와 그 외 경우를 검사
	switch (n)
	{
		// 서로 다른 케이스인데, 실행시키고자 하는 로직이 동일할 경우
	case 1:
	case 2:
	case 3:
		printf("n은 10보다 작습니다.\n");
		break;

	case 10 :
		printf("n은 10\n");
		break;
	case 20:
		printf("n은 20\n");
		break;
	case 30:
		printf("n은 30\n");
		break;
	default:
		printf("n은 10, 20, 30이 아닙니다.\n");
		break;
	}

	enum MonsterType { Goblin, Slime, Dragon, Ork };

	int type = 0;

	switch (type)
	{
	case Goblin:
		break;
	case Slime:
		break;
	case Dragon:
		break;
	case Ork:
		break;
	}
}