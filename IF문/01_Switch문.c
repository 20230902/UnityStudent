#include <stdio.h>

// Switch���̶�?
// ���ǽ��� ����� ���� �� �ִ� �پ��� ��츦 �� ���� ���ϰ�
// ���α׷��� �帧�� ������ �� ����մϴ�.

// switch (����� �˻��� ��)
// {
//		case ���1 :
//				���� ���1�̶�� ������ �ڵ�;
//				break; (�����Ű���� �ϴ� ������ �������� �˸�) 
//		case ���2 :
//				���� ���2�̶�� ������ �ڵ�;
//				break; (�����Ű���� �ϴ� ������ �������� �˸�) 
//		default :  (���� ���̽��� ��� �ƴ� ���)
//				�� ���� ��쿡 ������ �ڵ�;
//				break; 
// }

void main()
{
	int n = 2;

	// n�� ���� 10, 20, 30�� ���� �� �� ��츦 �˻�
	switch (n)
	{
		// ���� �ٸ� ���̽��ε�, �����Ű���� �ϴ� ������ ������ ���
	case 1:
	case 2:
	case 3:
		printf("n�� 10���� �۽��ϴ�.\n");
		break;

	case 10 :
		printf("n�� 10\n");
		break;
	case 20:
		printf("n�� 20\n");
		break;
	case 30:
		printf("n�� 30\n");
		break;
	default:
		printf("n�� 10, 20, 30�� �ƴմϴ�.\n");
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