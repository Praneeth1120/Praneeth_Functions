//lcm of two numbers
#include<stdio.h>

int lcm(int a,int b);

int main(void)
{
	int a,b;
	printf("enter two numbers : ");
	scanf("%d %d",&a,&b);
	int x = lcm(a,b);
	printf("%d",x);
	return 0;
}
int lcm(int a,int b)
{
	int i;
	for(i=1;i<=a*b;i++)
	{
		if(i%a==0 && i%b==0)
		{
			return i;
		}
	}
}
