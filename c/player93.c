#include<stdio.h>
void main()
{
	int a[100],n,i,t,j;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n%2==0)
	{
	for(i=0;i<n;i=i+2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	printf("\nAfter swapping adjacent elements : ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
else
{
for(i=0;i<n-1;i=i+2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	printf("\nAfter swapping adjacent elements : ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}	
}
}
