#include <stdio.h>


void main()
{
	int myArray[5] = { 1,2,3,4,5 };

	int length = sizeof(myArray) / sizeof(myArray[0]);
	for (int i = 0;i < length; ++i)
	{
		printf("&myArray[%d] = %p \n", i, &myArray[i]);

	}
		for (int i = 0;i < length; ++i)
		{
			
			printf("myArray + %d = myArray + (%d * sizeof(int))= %p \n",i,i,myArray+i);
		}
	
}