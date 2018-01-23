#include <stdio.h>
 
int main(void)
{
	int n,count=0;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count=count+1;
	}
	printf("\nNumber of digits is: %d",count);
	return 0;
}
