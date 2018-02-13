#include <stdio.h>
 
int main(void)
{
	int n,i,count=0;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	{
		if((i*i)==n)
		{
			printf("\n%d is a power of 2.",n);
			count=1;
			break;
		}
	}
	if(count==0)
	{
		printf("\n%d is not the power of 2.",n);
	}
	return 0;
}
