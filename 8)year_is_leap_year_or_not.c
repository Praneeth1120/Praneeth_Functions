//check whether a year is a leap year or not
#include<stdio.h>

void leap_year(int year);

int main(void)
{
	int year;
	printf("Enter Year : ");
	scanf("%d",&year);
	leap_year(year);
	return 0;
}
void leap_year(int year)
{
	if((year%4==0 && year%100 != 0) || year % 400 == 0)
	{
		printf("It is Leap Year");
	}
	else
	{
		printf("It is not a Leap Year");
	}
}
