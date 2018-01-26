#include <stdio.h>
 
int main(void)
{
	int x[100],n,k,i;
	printf("\nEnter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the K value: ");
	scanf("%d",&k);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nThe %dth element  is %d.",k,x[k-1]);
	return 0;
}
