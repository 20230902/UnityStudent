#include <stdio.h>
#include<string.h>

// 구조체, 열거형은 모두 struct와 enum 키워드를
// 이용해서 변수를 선언해야 하므로 불편함.
// typedef 을 사용하면 , 타입 선언 시, struct와 
// enum 키워드를 생략할 수 있습니다.

typedef unsigned int uint,UINT;    //음수값을 가지지않는 int형
//typedef : 자료형의 이름을 재정의하여 편하게 호출
// 원한다면 복수의 별칭을 지정가능   ,하여 추가

typedef enum PlayerJobType     //플레이어 직업을 열거하는 타입을 선언
{
	Warrior,
	Magician,
	Archer,
}Job, JOB ;    //enum은 코드블럭과 세미클론 사이에 재정의할 이름을 선언한다.

typedef struct PlayerCharacter
{
	char nickname[256];
	Job job;
	uint level;
}Player,PLAYER;


void PrintPlayerinfo(Player player);



void main()
{
	Player player;

	printf("캐릭터 닉네임을 입력해주세요.\n");
	gets(player.nickname);

	while (1)
	{
		//콘솔 화면 지우라고 명령 
		//cls = clear screen 
		system("cls");
		printf("캐릭터 직업을 선택해주세요.\n");
		printf("전사 / 마법사 / 궁수 \n");
		printf("입력");

		char jobSelect[256];
		gets(jobSelect);
		// 입력한 문자열이 전사라면
		if (!strcmp(jobSelect, "전사"))
		{
			player.job = Warrior;
			printf("직업이 전사로 설정되었습니다.\n");
			break;
		}
		else if (!strcmp(jobSelect, "마법사"))
		{
			player.job = Magician;
			printf("직업이 마법사로 설정되었습니다.\n");
			break;
		}
		else if (!strcmp(jobSelect, "궁수"))
		{
			player.job = Archer;
			printf("직업이 궁수로 설정되었습니다.\n");
			break;
		}
		else
		{
			printf("잘못된 입력입니다.\n");
			//약 1초간 정지3
			+
			_sleep(1000);
		}
	}


	player.level = 1;

	printf("")
}

void PrintPlayerinfo(Player player)
{
	char jobName[256];

	switch (player.job)
	{
	case Warrior:
		strcpy(jobName, "전사");
			break;
	case Magician:
		strcpy(jobName, "마법사");
		break;
	case Archer:
		strcpy(jobName, "궁수");
		break;
	}
	printf("직업 : %s \n", jobName);
	printf("레벨 : %d \n", player);
	printf("닉네임 : %s \n", player.nickname);

}
