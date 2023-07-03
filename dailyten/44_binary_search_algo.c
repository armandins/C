// instead of starting from index 0, we start from the middle 
// while we look for a specific value in an array

#include <stdio.h>

int binary_search(int a[], int e, int l, int r);

int main()
{
	int sorted[] = {1,2,3,4,5,6,7,8,9,10,11,12};

	//find index 9 (10th element)
	int index = binary_search(sorted, 12, 0, 12);
	int index2 = binary_search(sorted, 9, 0, 12);

	printf("index of 12: %d\n", index);
	printf("index of 9: %d\n", index2);
	
	return 0;
}

int binary_search(int a[], int e, int l, int r)
{
	int mid = l + (r - l) / 2;

	if (l > r )
		return -1;
	if (a[mid] == e)
		return mid;
	else if (a[mid] > e)
		return binary_search(a, e, l, mid-1);
	else
		return binary_search(a, e, mid+1, r);
}