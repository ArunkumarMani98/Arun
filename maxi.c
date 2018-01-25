#include <stdio.h>

int main(void)
{
	int n,a[100],max,i;
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
	printf("\nThe largest element is %d.",max);
	return 0;
}
