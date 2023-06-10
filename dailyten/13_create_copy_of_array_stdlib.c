#include <stdio.h>
#include <stdlib.h>

int *array_copy(int *array, int length);

int main(void)
{
	int a1[] = {1,2,3,4,5}
	int a2[] = {99,50,30,60,80,90,100,50}
	
	int *a1_copy = array_copy(a1, 5);
	int *a2_copy = array_copy(a2, 8);
		
	return 0;

}

int *array_copy(int *array, int length);
{
	int *c = malloc(length * sizeof(int));
	for (int i = 0; i < lenth; i++)
		c[i] = array[i];
	return c;
} 
