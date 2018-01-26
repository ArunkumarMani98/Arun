#include <stdio.h>

int main(void)
{
	int a,b,max,lcm=1,i,min;
	printf("\nEnter the two numbers : ");
	scanf("%d",&a);
	scanf("%d",&b);
	min=(a<b)?a:b;
            max=(a>b)?a:b;
            if(max%min!=0)
            {
            	lcm=a*b;
            }
            else
            {
	for(i=1;i<=min;i++)
	{
		if(a%i==0||b%i==0)
		{
			lcm=i;
		}
	}
            }
            if(lcm==min)
            {
	printf("\nThe LCM of %d and %d is %d.",a,b,max);
            }
            else
            {
            	printf("\nThe LCM of %d and %d is %d.",a,b,lcm);
            }
	return 0;
}
