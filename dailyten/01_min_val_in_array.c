#include <stdio.h>

int main(void)
{
	int myarray[] = {5,9,10,12,4,3,8,6,7};
	int min;
	//lets assume the first number in array is the smallest in arrary 
	min = myarray[0];
	//we create a loop to check all the elements in array
	for (int i = 0; i < 9; i++)
	//however, even though i is set at 0, we can start from 1 since 0 element (first ) is set as initial value
	{
		if (myarray[i] < min) min = myarray[i];
	}

	printf("Minimum is: %d\n", min);

	return 0;
}