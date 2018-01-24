#include <stdio.h>

int main(void)
{
	int a[100],i,n;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nThe index value of %d is %d",a[i],i);
	}
	return 0;
}
