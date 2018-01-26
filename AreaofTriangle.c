#include <stdio.h>

int main(void) 
{
	int b,h,a;
	printf("\nEnter the base and height of the triangle :");
	scanf("%d",&b);
	scanf("%d",&h);
	a=0.5*(b*h);
	printf("\nThe area of the triangle is %d ",a);
	return 0;
}
