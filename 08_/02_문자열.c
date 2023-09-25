#include <stdio.h>
#include <string.h>

void main()
{
	// 문자열의 길이를 구할 때, strlen()을 사용
	char myString[] = "HelloWorld!";

	// NULL 문자를 제외한 문자열의 길이를 반환
	printf("myString 길이는 %d \n", strlen(myString));
	// NULL 문자를 포함
	printf("myString 길이는 %d \n", sizeof(myString));

	// 문자열을 서로 이을 때, strcat() 을 사용
	// strcat(string1, string2) : string1 + string2
	// 이 때 string1은 (string1 + string2)을 포함할 수 있는 
	// 크기여야 함

	char myString2[256] = "안녕";
	
	// myString 문자열을 myString2에 잇습니다.
	strcat(myString2, myString);

	printf("myString2는 %s \n", myString2);

	// 문자열을 서로 비교할 때, strcmp()
	char myString3[] = "안녕하세요?";

	// 문자열이 같다면 0을 리턴
	printf("myString3 == myString2 = %d \n", strcmp(myString3, myString2));
	printf("%d \n", strcmp(myString3, "안녕하세요?"));
}