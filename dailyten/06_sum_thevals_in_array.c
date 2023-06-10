#include <stdio.h>

int main(void)
{
	int myarray[] = {1,2,6,9,8,7,6,5};
	int sum = 0;

	for (int i = 0; i < 8; i++)
	{
		sum = sum + myarray[i];
		//could also use 
		//sum += myarray[i];
	}

	printf("Sum of the array is: %d\n", sum);

	return 0;
}

//the result should be 44