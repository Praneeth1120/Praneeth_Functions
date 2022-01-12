// gcd of two numbers
#include<stdio.h>

int gcd(int a,int b);
int main()
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	int x = gcd(a,b);
	printf("The GCD of %d and %d is %d",a,b,x);
	return 0;	
}
int gcd(int a,int b)
{
	int i,g;
	for(i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			g=i;
		}
	}
	return g;
}
