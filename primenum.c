#include <stdio.h>

int main(void)
{
	int k,n,flag=0;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	for(k=2;k<=n/2;k++)
	{
		if(n%k==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\n%d is a prime number",n);
	}
	else
	{
		printf("\n%d is not a prime number",n);
	}
	return 0;
}
