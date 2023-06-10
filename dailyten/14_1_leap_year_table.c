#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year);


//if yeear is not divisible by 4
// then its a common year
//else if year  is not divisible by 100 
// then it's a leap year
//else if year is not divisible by 400
// then it's a common year
//else 
// it's a leap year

int main(void)
{
	for (int y = 1900; y <= 2100; y++)
	{
		if (is_leap_year(y))
			printf("%d LEAP YEAR\n", y);
		else
			printf("%d\n", y);
	}
	return 0;
}

bool is_leap_year(int year)
{
	if (year % 4 != 0) return false;
	else if (year % 100 != 0) return true;
	else if (year % 400 != 0) return false;
	else return true;
}