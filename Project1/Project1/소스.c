#include <stdio.h>


void Add(int value);

void main()
{

	Add(10);
	Add(20);
	Add(30);

}
 void Add(int value)
{
	 static int result = 0;

	 result += value;
	 printf("result´Â %d \n", result);
}

