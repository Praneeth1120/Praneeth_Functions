//Temp from farenheit to Centigrade
#include<stdio.h>

float centigrade(float x);

int main(void)
{
	float f;
	printf("Enter temperature in Farenheit : ");
	scanf("%f",&f);
	float temp = centigrade(f);
	printf("Temperature in Centigrade is %f",temp);
	return 0;
}
float centigrade(float x)
{
	float t;
	t = (5*(x-32))/9;
	return t;
}
