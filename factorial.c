#include <stdio.h>

int main(void)
{
	int n,f=1,i;
	printf("\nEnter the range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("\nThe factorial of %d is %d",n,f);
	return 0;
}
