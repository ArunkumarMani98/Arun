#include <stdio.h>

int main(void)
{
	int n,a[100],b[100],r,k,i,c,j;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the k value : ");
	scanf("%d",&k);
	j=0;
	printf("\nEnter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
	printf("\nThe %d odd number is %d .",k,b[k]);
	return 0;
}
