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
	c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			c+=1;
		}
	}
	if(c>1)
	{
		printf("\n%d is repeated %d times in the array ",k,c);
	}
	else
	{
		printf("\n%d is not repeated in the array ",k);
	}
	return 0;
}
