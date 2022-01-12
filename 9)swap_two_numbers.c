//swap to numbers using functions
#include<Stdio.h>

void swap(int a,int b);

int main(void)
{
	int a,b;
	printf("Enter values of 'a' and 'b' : ");
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;
}
void swap(int a,int b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
	printf("The Swapped Values are %d and %d",a,b);
}
