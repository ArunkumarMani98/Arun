#include <stdio.h>

int main(void)
{
	int t,n,temp,count=0;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		temp=n%10;
		count++;
		n=n/10;
	}
	printf("\nThe number of digits in %d is %d.",t,count);
	return 0;
}
