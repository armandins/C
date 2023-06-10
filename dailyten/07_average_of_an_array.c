#include <stdio.h>

int main(void)
{
	double arr1[] = {5.2,9.3,6.5,4.1,7.8};
	double sum = 0;
	double average = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += arr1[i];
	}

	average = sum / 5;

	printf("Average is: %.2lf\n", average);
	// what .2 does is it rounds up to 2 decimal numbers 

	return 0;
}