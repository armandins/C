// https://en.wikipedia.org/wiki/Bubble_sort

#include <stdio.h> 

void bubble_sort(int a[], int length);

int main(void)
{
	int a[] = {1,3,7,9,0,2,4,5,8,6};
	int length = 10;

	bubble_sort(a, length);

	for (int i = 0; i < length; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}

void bubble_sort(int a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < (length -1); j++)
		{
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

}
