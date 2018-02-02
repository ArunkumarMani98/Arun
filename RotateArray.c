#include <stdio.h>
 
int main(void)
{
	int a[100],k,n,temp,i,j;
	printf("\nEnter the n value : ");
	scanf("%d",&n);
	printf("\nEnter the number of rotations : ");
	scanf("%d",&k);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<k;j++)
	{
	temp=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=temp;
	}
	printf("\nThe rotated array is ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
 
