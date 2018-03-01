#include<stdio.h>
void main()
{
	int n,i;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	if(n<=3)
	{
		printf("\nNo odd factors for %d.",n);
	}
	else
	{
	printf("\nThe odd factors are : ");
	for(i=3;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
	}
}
}
