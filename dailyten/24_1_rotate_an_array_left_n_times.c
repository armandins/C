#include <stdio.h>


void rotate_left(int array[], int length, int n);
void rotate_left_once(int array[], int length);

int main(void)
{
	int a1[] = {1,2,3,4,5,6};
	for (int i = 0; i < 6; i++)
		printf("%d", a1[i]);
	printf("\n");

	// apply rotate_left_once three times this code
	rotate_left(a1, 6, 3);

	for (int i = 0; i<6; i++)
		printf("%d", a1[i]);
	printf("\n");

	return 0; 
}

void rotate_left(int array[], int length, int n)
{
	for (int i = 0; i < n; i++)
		rotate_left_once(array,length);
}


void rotate_left_once(int array[], int length)
{
	int temp = array[0];
	for (int i = 0; i < (length - 1); i++)
		array[i] = array[i+1];
	array[length-1] = temp;
}