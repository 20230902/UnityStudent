#include <stdio.h>
// �Ǻ���ġ ����
// 1 1 2 3 5 8 13 

// ����� �Է�
// ����ڰ� ���ϴ� n ��° �Ǻ���ġ �������� ���

void main()
{
	// ������
	int prev = 0;
	// �����
	int current = 1;
	// ������
	int next;

	int n;
	printf("�� ��° �������� ����ұ��?\n");
	scanf("%d", &n);

	// n��°���� �Ǻ���ġ ������ ���ϵ��� �ݺ�
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", current);
		next = prev + current;
		prev = current;
		current = next;
	}
}
