#include <stdio.h>

int main(void) 
{
	int n,i;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	printf("\nThe factors are : ");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("\t%d",i);
		}
	}
	return 0;
}
