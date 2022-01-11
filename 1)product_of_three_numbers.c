//product of three numbers using functions
#include<stdio.h>

void product(int a,int b,int c)
{
	int d =a*b*c;
	printf("Product = %d",d);
}
int main(void)
{
	int a,b,c;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	product(a,b,c);
	return(0);
}
