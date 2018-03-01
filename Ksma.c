#include<stdio.h>
void main()
{
	int n,k,a[100],temp,i,j;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	printf("\nEnter the K value : ");
	scanf("%d",&k);
	printf("\nEnter the elements : ");
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
	printf("\nThe %dth smallest element is %d.",k,a[k-1]);
}
