#include <stdio.h>
void main()
{
    int a[100][100],i,j,c=0,n;
    printf("\nEnter the number of snow drifts : ");
    scanf("%d",&n);
    printf("\nEnter the coordinate values : ");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a[i][j]<a[i][j+1])
			{
				c=c+1;
			}
		}
	}
	printf("\nThe minimal snow drifts formed are : %d",c);
}
