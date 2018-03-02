#include<stdio.h>
void main()
{
	int n,a[100],i=0,m,t,c=0;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	printf("\nEnter the number with %d digits : ",n);
	scanf("%d",&m);
	i=n-1;
	while(m!=0)
	{
		t=m%10;
		m=m/10;
		a[i]=t;
		i--;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
		if(a[i]==1&&a[i-1]==0&&a[i+1]==0)
		{
			c++;
		}
		else
		{
		printf("\n%d",a[i]);
		}
	}
}
}
