#include <stdio.h>

int main(void)
{
	int n,k,a[100],i,sum=0;
	printf("\nEnter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the range of array to be summed :");
	scanf("%d",&k);
	printf("\nenter the array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		sum=sum+a[i];
	}
	printf("\nThe sum is %d",sum);
	return 0;
}
