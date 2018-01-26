#include <stdio.h>

int main(void)
{
	int n,i,sum=0;
	printf("\nEnter the range : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nThe sum is %d.",sum);
	return 0;
}
