#include <stdio.h>

int main(void)
{
	int num;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	if(num%13==0)
	{
		printf("\n%d is the multiple of 13.",num);
	}
	else
	{
		printf("\n%d is not the multiple of 13.",num);
	}
	return 0;
}
