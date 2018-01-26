#include <stdio.h>

int main(void)
{
	int a,b,gcd,i,min;
	printf("\nEnter the two numbers : ");
	scanf("%d",&a);
	scanf("%d",&b);
	min=(a<b)?a:b;
	for(i=1;i<=min;i++)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
	printf("\nThe GCD of %d and %d is %d.",a,b,gcd);
	return 0;
}
