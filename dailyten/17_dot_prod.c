#include <stdio.h>

// dot product ex
// v1 = {2,5,4}
// v2 = {3,2,1}

float dot_product(float v1[], 
	 			  float v2[],
	 			  int length);

int main(void)
{
	float v1[] = {2,5,4};
	float v2[] = {3,2,1};
	float result = dot_product(v1,v2,3);
	printf("Result: %.3f\n", result);
}

float dot_product(float v1[], 
	 			  float v2[],
	 			  int length)
{
	float sum = 0;
	for (int i = 0; i < length; i++)
	sum += (v1[i] * v2[i]);
}