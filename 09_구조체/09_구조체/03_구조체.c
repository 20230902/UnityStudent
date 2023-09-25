#include <stdio.h>
#include<string.h>

// ����ü, �������� ��� struct�� enum Ű���带
// �̿��ؼ� ������ �����ؾ� �ϹǷ� ������.
// typedef �� ����ϸ� , Ÿ�� ���� ��, struct�� 
// enum Ű���带 ������ �� �ֽ��ϴ�.

typedef unsigned int uint,UINT;    //�������� �������ʴ� int��
//typedef : �ڷ����� �̸��� �������Ͽ� ���ϰ� ȣ��
// ���Ѵٸ� ������ ��Ī�� ��������   ,�Ͽ� �߰�

typedef enum PlayerJobType     //�÷��̾� ������ �����ϴ� Ÿ���� ����
{
	Warrior,
	Magician,
	Archer,
}Job, JOB ;    //enum�� �ڵ���� ����Ŭ�� ���̿� �������� �̸��� �����Ѵ�.

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

	printf("ĳ���� �г����� �Է����ּ���.\n");
	gets(player.nickname);

	while (1)
	{
		//�ܼ� ȭ�� ������ ��� 
		//cls = clear screen 
		system("cls");
		printf("ĳ���� ������ �������ּ���.\n");
		printf("���� / ������ / �ü� \n");
		printf("�Է�");

		char jobSelect[256];
		gets(jobSelect);
		// �Է��� ���ڿ��� ������
		if (!strcmp(jobSelect, "����"))
		{
			player.job = Warrior;
			printf("������ ����� �����Ǿ����ϴ�.\n");
			break;
		}
		else if (!strcmp(jobSelect, "������"))
		{
			player.job = Magician;
			printf("������ ������� �����Ǿ����ϴ�.\n");
			break;
		}
		else if (!strcmp(jobSelect, "�ü�"))
		{
			player.job = Archer;
			printf("������ �ü��� �����Ǿ����ϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� �Է��Դϴ�.\n");
			//�� 1�ʰ� ����3
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
		strcpy(jobName, "����");
			break;
	case Magician:
		strcpy(jobName, "������");
		break;
	case Archer:
		strcpy(jobName, "�ü�");
		break;
	}
	printf("���� : %s \n", jobName);
	printf("���� : %d \n", player);
	printf("�г��� : %s \n", player.nickname);

}
