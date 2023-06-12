#include <stdio.h>

void rotate_right_once(int array[], int length);

int main(void)
{

	int a1[] = {1,2,3,4,5,6};

	for (int i = 0; i < 6; i++)
		printf("%d", a1[i]);
	printf("\n");

	rotate_right_once(a1,6);

	for (int i = 0; i < 6, i++)
		printf("%d", a1[i]);
	printf("\n");


	return 0;
}

void rotate_right_once(int array[], int length)
{
	int temp = array[length - 1];
	for (int i = (length - 2); i >= 0; i--)
		array[i+1] = array[i];
	array[0] = temp;
}
