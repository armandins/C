#include <stdio.h>

int main(void)
{
	int myarray[] = {8,7,5,3,9,10,1,2,4};

	int max = myarray[0];

	for (int i = 0; i<9; i++)
	{
		if (myarray[i] > max) max = myarray[i];
	}

	printf("Maximum is: %d\n", max);
}