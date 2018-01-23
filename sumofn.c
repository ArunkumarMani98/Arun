#include <stdio.h>

int main(void) 
{
	int sum=0,n,i;
	printf("\nEnter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nThe sum of n numbers is %d",sum);
	return 0;
}
