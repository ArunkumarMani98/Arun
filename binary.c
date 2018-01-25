#include <stdio.h>

int main(void)
{
	int n,temp,count=0,k;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		temp=n%10;
		count=0;
		if(temp==1||temp==0)
		{
			count=1;
		}
		else
		{
			break;
		}
		n=n/10;
	}
	if(count==1)
	{
		printf("\nThe number %d is binary",k);
	}
	else
	{
		printf("\nThe number %d is not binary",k);
	}
	return 0;
}
