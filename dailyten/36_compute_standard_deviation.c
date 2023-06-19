#include <stdio.h>
#include <math.h>

dobule stdev(double x[], int N);

int main()
{
	double a[] = {9.2, 1.5, 6.7, 8.2, 5.5, 7.1};


	return 0;

}

dobule stdev(double x[], int N)
{
	double mean = 0, total = 0;
	for (int i = 0; i < N; i++) total += x[i];
	mean = total / N;


}