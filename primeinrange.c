#include <stdio.h>
 
int main(void)
{
	int i,n,flag=0;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
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
 
