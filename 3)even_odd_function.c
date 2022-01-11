#include<stdio.h>

void even_odd(int a)
{
	if(a%2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("odd");
	}
}

int main(void)
{
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	even_odd(a);
	return 0;
}
