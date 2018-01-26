#include <stdio.h>

int main(void)
{
	int temp1,n,temp,count=0;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	temp1=n;
	while(n!=0)
	{
		temp=n%10;
		count++;
		n=n/10;
	}
	printf("\nThe number of digits in %d is %d.",temp1,count);
	return 0;
}
