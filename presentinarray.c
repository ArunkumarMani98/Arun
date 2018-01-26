#include <stdio.h>

int main(void)
{
	int n,a[100],k,i,c;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the k value : ");
	scanf("%d",&k);
	printf("\nEnter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	c=n;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			c+=1;
		}
	}
	if(c>n)
	{
		printf("\n%d is present in the array ",k);
	}
	else
	{
		printf("\n%d is not present in the array ",k);
	}
	return 0;
}
