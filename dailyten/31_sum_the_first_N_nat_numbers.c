#include <stdio.h>

// recursion method
// sum of numbers untill n is a result of sum of
// the number n + sum of numbers untill (n-1)
// note how to define sum func. 


int sum(int n);

int main(void)
{

	printf("%d\n", sum(5));

}

int sum(int n)
{
	if (n > 0) return n + sum(n-1);
	else return 0;
}