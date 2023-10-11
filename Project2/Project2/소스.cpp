#include<stdio.h>
#include<string.h>

typedef struct Score {
	char name[20];
	int kor;
	int mat;
	int eng;
}S;

int main()
{
	S s1 = { "ȫ�浿", 50, 60, 70 };

	printf("%d",s1.kor);
}