#include <stdio.h>

double kmtomiles(double km);
double kmtonauticalmiles(double km);

int main(void)
{
	double start_km = 0;
	double end_km = 0;
	double step_km = 0;
	double current_km = 0;

	do

	{
		printf("Start km value: ");
		scanf("%lf", &start_km);
		// start km value shouldn't be less than zero
		if (start_km <= 0) 
			printf("Start km not >= 0\n");
	} 

	while (start_km <= 0);

	do

	{
		printf("Step km value: ");
		scanf("%lf", &step_km);
		// step km value shouldn't be less than zero
		if (step_km <= 0) 
			printf("Step km not >= 0\n");
	} 

	while (step_km <= 0);

	do

	{
		printf("End km value: ");
		scanf("%lf", &end_km);
		// End km value shouldn't be less than zero
		if (end_km <= 0) 
			printf("End km not >= 0\n");
	} 

	while (end_km <= 0);

	printf("\n\n\n");
	printf("%-20s%-20s%-20s\n",
			"Kilometers",
			"Miles",
			"Nautical");
	printf("********************************************************************\n");

	for (current_km = start_km;
		 current_km < end_km;
		 current_km += step_km)

	{
		printf("%-20.4f%-20.4f%-20.4f\n", 
				current_km,
				kmtomiles(current_km),
				kmtonauticalmiles(current_km));
	}

printf("\n");

	return 0;
}

double kmtomiles(double km)
{
	return km * 0.62137;
}
double kmtonauticalmiles(double km)
{
	return km * 0.539957;
}