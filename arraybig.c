#include <stdio.h>

int main(void)
{
	int n,arr[100],max,i;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\nThe maximum element is %d.",max);
	return 0;
}
