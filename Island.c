#include<stdio.h>
int main()
{
	int a[100][100],m,n,i,j,c=0;
	printf("\nEnter the row size : ");
	scanf("%d",&m);
	printf("\nenter the column size : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==1)
			{
				if(a[i-1][j-1]==0&&a[i][j+1]==0&&a[i][j-1]==0&&a[i+1][j+1]==0)
				{
					c=c+1;
				}
			}
		}
	}
	printf("\nThe total island is %d",c);
	return 0;
}
