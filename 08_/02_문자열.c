#include <stdio.h>
#include <string.h>

void main()
{
	// ���ڿ��� ���̸� ���� ��, strlen()�� ���
	char myString[] = "HelloWorld!";

	// NULL ���ڸ� ������ ���ڿ��� ���̸� ��ȯ
	printf("myString ���̴� %d \n", strlen(myString));
	// NULL ���ڸ� ����
	printf("myString ���̴� %d \n", sizeof(myString));

	// ���ڿ��� ���� ���� ��, strcat() �� ���
	// strcat(string1, string2) : string1 + string2
	// �� �� string1�� (string1 + string2)�� ������ �� �ִ� 
	// ũ�⿩�� ��

	char myString2[256] = "�ȳ�";
	
	// myString ���ڿ��� myString2�� �ս��ϴ�.
	strcat(myString2, myString);

	printf("myString2�� %s \n", myString2);

	// ���ڿ��� ���� ���� ��, strcmp()
	char myString3[] = "�ȳ��ϼ���?";

	// ���ڿ��� ���ٸ� 0�� ����
	printf("myString3 == myString2 = %d \n", strcmp(myString3, myString2));
	printf("%d \n", strcmp(myString3, "�ȳ��ϼ���?"));
}