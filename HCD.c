#include <stdio.h>
int main(void) 
{
	int a,b,n,min,i;
	printf("\nEnter the first number : ");
	scanf("%d",&a);
	printf("\nEnter the second number : ");
	scanf("%d",&b);
	min=(a<b)?a:b;
	if(a%b!=0)
	{
		printf("\nNo common divisor between %d and %d.",a,b);
	}
	else
	{
	for(i=2;i<=min;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			n=i;
		}
	}
	printf("\nThe highest common divisor of %d and %d is %d.",a,b,n);
	}
	return 0;
}
