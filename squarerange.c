#include <stdio.h>
int main(void) 
{
	int a,b,c=0,i,j,n;
	printf("\nEnter the initial number : ");
	scanf("%d",&a);
	printf("\nEnter the final number : ");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		n=i*i;
		for(j=a;j<=b;j++)
		{
			if(n==j)
			{
				c=c+1;
			}
		}
	}
	printf("\nThere are %d perfect squares between %d and %d.",c,a,b);
	return 0;
}
