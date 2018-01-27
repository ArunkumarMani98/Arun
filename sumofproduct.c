#include <stdio.h>

int main(void) 
{
	int m,n,a[100][100],i,j,sum=1,sum1=1,pro;
	printf("\nEnter the row size : ");
	scanf("%d",&m);
	printf("\nEnter the column size : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum*a[i][j];
			}
			else
			{
				sum1=sum1*a[i][j];
			}
		}
	}
	pro=sum+sum1;
	printf("\nThe sum of product of diagonal is %d.",pro);
	return 0;
}
