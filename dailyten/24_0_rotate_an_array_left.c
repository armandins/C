#include <stdio.h>

// think of rotation like an orbit

void rotate_left_once(int array[], int length);

int main(void)
{
	int a1[] = {1,2,3,4,5,6};
	for (int i = 0; i < 6; i++)
		printf("%d", a1[i]);
	printf("\n");

	rotate_left_once(a1, 6);

	for (int i = 0; i<6; i++)
		printf("%d", a1[i]);
	printf("\n");

	return 0; 
}

void rotate_left_once(int array[], int length)
{
	// store last first element of array as temp and append it to last element
	// and push every other element by one index
	int temp = array[0];
	for (int i = 0; i < (length - 1); i++)
		array[i] = array[i+1];
	array[length-1] = temp;
}