#include <stdio.h>

int main(void) 
{
	int a,b,n;
	printf("\nEnter the two numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
		n=a+b;
	if(n%2==0)
	{
		printf("\nThe sum is even.");
	}
	else
	{
		printf("\nThe sum is odd. ");
	}
	return 0;
}
