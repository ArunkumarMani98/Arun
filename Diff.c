#include <stdio.h>

int main(void) 
{
	int a,b,n;
	printf("\nEnter the two numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{
		n=a-b;
	}
	else
	{
		n=b-a;
	}
	if(n%2==0)
	{
		printf("\nThe difference is even.");
	}
	else
	{
		printf("\nThe difference is odd. ");
	}
	return 0;
}
