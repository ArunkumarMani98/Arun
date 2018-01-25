#include <stdio.h>

int main(void) 
{
	int n;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	if((n>=0)&&(n<=10))
	{
		printf("\nThe number %d is within(1,10).",n);
	}
	else
	{
		printf("\nThe number %d is not within(1,10).",n);
	}
	return 0;
}
