#include<stdio.h>
void main()
{
	int n,a[100],b[100],i,j,k,m=0,e=0,c[100];
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	printf("\nEnter the array A : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the array B : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				c[e]=a[i];
				e++;
			}
		}
	}
	for(i=0;i<e;i++)
	{
		for(j=i+1;j<e;j++)
		{
			if(c[i]==c[j])
			{
				m++;
				for(k=j;k<e;k++)
				{
					c[k]=c[k+1];
				}
				e=e-1;
				j=j-1;
			}
		}
	}
	printf("\nThe common element : ");
	for(i=0;i<e;i++)
	{
		printf("\n%d",c[i]);
	}
}
