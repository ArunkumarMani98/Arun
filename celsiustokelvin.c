#include <stdio.h>

int main(void)
{
	float k,f;
	printf("\nEnter the temperature in celsius : ");
	scanf("%f",&f);
	k=(f-273.15);
	printf("\nThe temperature in kelvin is %.1f",k);
	return 0;
}
