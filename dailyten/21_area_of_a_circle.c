#include <stdio.h>

int main(void)
{
	double radius = 0;

	printf("Enter Radius: \n");
	
	scanf("%lf", &radius);
	
	double area = 3.141592 * radius * radius;
	
	printf("Area: %f\n", area);


	return 0; 
}