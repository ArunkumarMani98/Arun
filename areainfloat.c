#include <stdio.h>

int main(void)
{
	float l,b,a;
	printf("\nEnter the length and breadth of the farm : ");
	scanf("%f",&l);
	scanf("%f",&b);
	a=l*b;
	printf("\nThe area of the farm is %.5f ",a);
	return 0;
}
