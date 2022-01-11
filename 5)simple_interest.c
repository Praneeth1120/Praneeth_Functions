// read p,t,r and calculate simple interest
#include<stdio.h>

void simple_interest(int p,int t,int r)
{
	float si = (p*t*r)/100;
	printf("Simple Interest = %f",si);
}

int main(void)
{
	int p,t,r;
	printf("Enter Principal Amount : ");
	scanf("%d",&p);
	printf("Enter Time Period : ");
	scanf("%d",&t);
	printf("Enter Rate of Interest : ");
	scanf("%d",&r);
	simple_interest(p,t,r);
	return(0);
}
