#include <stdio.h>

int main(void)
{
	double C = 0;
	double F = 0;

	printf("Enter C Temp: ");
	
	scanf("%lf", &C);

	F = (C * 1.8) + 32;

	printf("C: %.2lf -> F: %.2lf\n",C ,F );

	return 0;
}