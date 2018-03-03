#include<stdio.h>
void main()
{
	int a[10],n,x,s=0,i;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	printf("\nEnter the value of X : ");
	scanf("%d",&x);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s+=a[i];
	}
	if(s==x)
	{
		printf("\nYES!!!");
	}
	else
	{
		printf("\nNO!!!");
	}
}
