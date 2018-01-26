#include <stdio.h>

int main(void)
{
	int a,p,b,i,max,count=0;
	printf("\nEnter the two numbers : ");
	scanf("%d",&a);
	scanf("%d",&b);
	p=a*b;
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	for(i=1;i<=max;i++)
	{
		if(p==(i*i))
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
		printf("\nThe product of %d and %d is perfect square (%d).",a,b,p);
	}
	else
	{
		printf("\nThe product of %d and %d is not a perfect square.",a,b);
	}
	return 0;
}
