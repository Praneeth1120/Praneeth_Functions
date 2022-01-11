#include<stdio.h>

void operation(int a,int b)
{
	int c=a+b;
	int d=a-b;
	int e=a*b;
	int f=a/b;
	printf("%d\n%d\n%d\n%d",c,d,e,f);
}

int main(void)
{
	int a,b;
	printf("Enter two numbers  : ");
	scanf("%d%d",&a,&b);
	operation(a,b);
	return(0);
}
