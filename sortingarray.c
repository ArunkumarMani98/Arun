#include <stdio.h>

int main(void)
{
	int a[100],j,temp,n,i;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nThe sorted array is : ");
	for(i=0;i<n;i++)
	{
	printf("\n%d ",a[i]);
	}
	return 0;
}
