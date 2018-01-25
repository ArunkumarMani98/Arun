#include <stdio.h>

int main(void)
{
	int n,a[100],max,min,i;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nThe Maximum element is %d and the minimum element is %d",max,min);
	return 0;
}
