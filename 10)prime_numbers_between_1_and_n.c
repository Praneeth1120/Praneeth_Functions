//prime numbers between 1 to n
#include<stdio.h>

void prime(int x);

int main(void)
{
	int n;
	printf("enter value of n : ");
	scanf("%d",&n);
	prime(n);
	return 0;
}
void prime(int x)
{
	int i,f,j;
	for(i=2;i<=x;i++)
	{
		f=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		printf("%d\n",i);
	}
}
