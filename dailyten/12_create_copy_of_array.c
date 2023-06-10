#include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int copy[5];

	for (int i = 0; i < 5; i++)
		copy[i] = a[i];
	for (int i = 0; i < 5; i++)
		printf("copy[%d]=%d\n", i, copy[i]);

	return 0;
}