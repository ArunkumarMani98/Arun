#include <stdio.h>

int main(void)
{
	int n;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("\n%d is the multiple of 7 ",n);
	}
	else
	{
		printf("\n%d is not the multiple of 7 ",n);
	}
	return 0;
}
