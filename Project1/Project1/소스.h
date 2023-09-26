#include <stdio.h>

	int globalVariable;

	void Add(int value);

	void main() {

		printf("globalVariable = %d \n", globalVariable);

		Add(10);
		printf("globalVariable = %d \n", globalVariable);
	}

	void Add(int value)
	{
		globalVariable += value;
	}


