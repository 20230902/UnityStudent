#include <stdio.h>

// while���� �̿��ؼ�, ����ڰ� ���ϴ� �������� ���

// input
// ������ �� ���� ����ұ��?
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
	// �� ���� ����� ������, ����ڰ� �Է��� ���� ������ ����
	int number = 0;

	// number�� ���� 1~9 ������ ����, �ƴ϶�� �Է��� �ݺ�
	while (number < 1 || number > 9)
	{
		printf("�� ���� ����ұ��? ");
		scanf("%d", &number);
	}

	// 1���� 9(10)���� ������ ����
	int count = 1;

	while (count < 10)
	{
		printf("%d X %d = %d \n", number, count, (number * count));
		++count;
	}
}