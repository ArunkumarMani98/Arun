#include<stdio.h>
void main()
{
	int n,x,s=0,i;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			if((n/i)%2!=0)
			{
				printf("\n%d",i);
				break;
			}
		}
	}
}
