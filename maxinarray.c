#include <stdio.h>

int main(void)
{
	int a[100],n,max,i;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
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
	printf("\nThe maximum element is %d ",max);
	return 0;
}
