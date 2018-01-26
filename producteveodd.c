#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf("\nEnter the two numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a*b;
	if(c%2==0)
	{
		printf("\nThe product of %d and %d is even.",a,b);
	}
	else
	{
		printf("\nThe product of %d and &d is odd.",a,b);
	}
	return 0;
}
