#include <stdio.h>

int main(void) 
{
	int m,n,a[100][100],i,j,sum=0;
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
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nThe sum is %d.",sum);
	return 0;
}
