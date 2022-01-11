//maximum of two numbers using functions
#include<stdio.h>

void maximum(int a,int b)
{
	if(a>b)
	{
		printf("%d is maximum",a);
	}
	else
	{
		printf("%d is maximum",b);
	}
}
int main(void)
{
	int a,b;
	printf("Enter two numbers :");
	scanf("%d %d",&a,&b);
	maximum(a,b);
	return(0);
}
