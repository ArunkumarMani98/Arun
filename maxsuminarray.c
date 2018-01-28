#include <stdio.h>

int main(void)
{
	int n,a[100],sum=0,k,i;
	printf("\nEnter the array size : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element to be picked : ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			a[i+1]=0;
			a[i-1]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\nThe Maximum sum is %d .",sum);
	return 0;
}
