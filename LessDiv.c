#include <stdio.h>
int main(void) 
{
	int n,i,count=0;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("\n%d is divisble by numbers less than that.",n);
			count=1;
			break;
		}
	}
	if(count==0)
	{
		printf("\n%d is not divisible by numbers less than that.",n);
	}
	return 0;
}
