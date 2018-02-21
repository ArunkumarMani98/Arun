#include<stdio.h>
void main()
{
	int count=0,n,k,i;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	printf("\nEnter the K value : ");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		if(i*i==n&&i==k)
		{
			count+=1;
		}
	}
	if(count==0)
	{
		printf("\n%d is not the power of %d.",k,n);
	}
	else
	{
		printf("\n%d is the power of %d.",k,n);
	}
}
