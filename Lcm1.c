#include <stdio.h>

int main(void)
{
	int a,b,lcm=1,min,max,i,res;
	printf("\nEnter the first number : ");
	scanf("%d",&a);
	printf("\nEnter the second number : ");
	scanf("%d",&b);
	min=(a<b)?a:b;
	max=(a>b)?a:b;
	for(i=2;i<=min;i++)
	{
		if(a%i==0&&b%i==0)
		{
			lcm=i;
		}
	}
	res=(a*b)/lcm;
	printf("\nThe smallest divisor od %d and %d is %d.",a,b,res);
	return 0;
}
