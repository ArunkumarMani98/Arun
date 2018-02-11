#include <stdio.h>
int main(void)
{
	int n,k,a[100],count=0,i;
	printf("\nEnter the array size : ");
	scanf("%d",&n);
	printf("\nEnter the element to be searched : ");
	scanf("%d",&k);
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("\nYES!!!");
			count=1;
		}
	}
	if(count==0)
	{
		printf("\nNO!!!!");
	}
	return 0;
}
