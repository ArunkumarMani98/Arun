#include <stdio.h>

int main(void)
{
	int n,a[100],avg,sum=0,i;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("\nThe average is %d ",avg);
	return 0;
}
