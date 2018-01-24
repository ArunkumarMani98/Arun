#include <stdio.h>

int main(void)
{
	int n,r,sum=0,t;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(t==sum)
	{
		printf("\n%d is the Armstrong number.",t);
	}
	else
	{
		printf("\n%d is not the Armstrong number.",t);
	}
	return 0;
}
