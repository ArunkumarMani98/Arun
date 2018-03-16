#include<stdio.h>
void main()
{
	int a[100],n,i,sum=0,k;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			sum=sum+a[i];
		}
		else if(a[i]<a[i+1])
		{
			sum=sum+a[i+1];	
		}
		else if(a[i]==a[i+1])
		{
			sum=sum+a[i];
		}
	}
		printf("\nThe adjacent sum is %d",sum);
}
