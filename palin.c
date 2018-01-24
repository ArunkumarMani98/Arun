#include <stdio.h>

int main(void)
{
	int n,r=0,rem,org;
	printf("\nEnter the number");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		rem=n%10;
		r=r*10+rem;
		n=n/10;
	}
	if(org==r)
	{
		printf("\n%d is palindrome",org);
	}
	else
	{
		printf("\n%d is not a palindrome",org);
	}
	return 0;
}
