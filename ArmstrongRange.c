#include <stdio.h>

int main(void)
{
	int n,r,sum=0,i,a,b,t;
	printf("\nEnter the initial value: ");
	scanf("%d",&a);
	printf("\nEnter the end value: ");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		t=i;
	while(t>0)
	{
		r=t%10;
		sum=sum+(r*r*r);
		t=t/10;
	}
	if(i==sum)
	{
		printf("\n%d\n",i);
	}
	sum=0;
	}
	return 0;
}
