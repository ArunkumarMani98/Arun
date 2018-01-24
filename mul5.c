#include <stdio.h>

int main(void)
{
	int n,m=1,i,j=5;
	printf("\nEnter the range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d\n",(i*j));
	}
	return 0;
}
